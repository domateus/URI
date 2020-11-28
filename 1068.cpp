#include <iostream>

using namespace std;

int main() {
	string input;
	bool flag = true;
	int open = 0, close = 0;
	while(getline(cin, input)) {
		open = 0;
		close = 0;
		flag = true;
		for(char i : input) {
			if(close > open) {
				flag = false;
			}
			switch(i) {
				case '(':
					open++;
					break;
				case ')':
					close++;
					break;
				default:
					break;
			}
		}
		if (open == close && flag) cout << "correct" << endl;
		else cout << "incorrect" << endl;
	}

	return 0;
}
