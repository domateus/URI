#include <algorithm>
#include <iostream>
#include <math.h>
#include <stack>
#include <vector>

using namespace std;

int main() {
  int n, p;
  int t, b;
  while (cin >> n >> p && (n + p)) {
    vector<stack<int>> a(p);
    int x, y;
    for (int i = 0; i < p; ++i) {
      cin >> t;
      for (int j = 0; j < t; ++j) {
        cin >> b;
        a[i].push(b);
        if (b == 1) {
          x = i, y = j;
        }
      }
    }

    int r = 0, l = 0;
    for (int i = x + 1; i < p; ++i) {
      if (a[i].size() > y) {
        r += a[i].size() - y;
      } else {
        break;
      }
    }

    for (int i = x - 1; i >= 0; --i) {
      if (a[i].size() > y) {
        l += a[i].size() - y;
      } else {
        break;
      }
    }
    cout << min(l, r) + a[x].size() - y - 1 << endl;
  }
}
