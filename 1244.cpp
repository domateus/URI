#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compare(string a, string b) { return (a.length() <= b.length()); }

int main() {
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string foo, bar, delim = " ";
    size_t pos = 0;
    string a[51];
    int j = 0;
    getline(cin, foo);
    foo = foo + " ";
    while ((pos = foo.find(delim)) != string::npos) {
      bar = foo.substr(0, pos);
      a[j] = bar;
      j++;
      foo.erase(0, pos + delim.length());
    }
    stable_sort(a, a + j, compare);
    reverse(a, a + j);
    for (int k = 0; k < j; k++) {
      if (k == j - 1) {
        cout << a[k] << endl;
      } else {
        cout << a[k] << " ";
      }
    }
  }
  return 0;
}
