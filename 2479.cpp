#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, pos = 0, neg = 0;
  scanf("%d", &n);
  string nam[100];
  int g = 0, b = 0;
  string foo, bar, beef, delim = " ";
  cin.ignore();
  for (int i = 0; i < n; ++i) {
    getline(cin, foo);
    bar = foo.substr(0, foo.find(delim));
    beef = foo.substr(foo.find(delim) + 1, string::npos);
    if (bar == "+")
      pos++;
    else
      neg++;
    nam[i] = beef;
  }
  stable_sort(nam, nam + n);
  for (int h = 0; h < n; ++h) {
    cout << nam[h] << endl;
  }
  cout << "Se comportaram: " << pos << " | "
       << "Nao se comportaram: " << neg << endl;
}
