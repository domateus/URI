#include <algorithm>
#include <iostream>

using namespace std;

bool comp(int a, int b) { return (a > b); }

int main() {
  int n;
  cin >> n;
  for (int k = 0; k < n; ++k) {
    int s, foo;
    cin >> s;
    int init[s], fin[s];
    for (int i = 0; i < s; ++i) {
      cin >> foo;
      init[i] = foo, fin[i] = foo;
    }
    stable_sort(fin, fin + s, comp);
    foo = 0;
    for (int j = 0; j < s; ++j) {
      if (init[j] == fin[j]) {
        foo++;
      }
    }
    cout << foo << endl;
  }
}
