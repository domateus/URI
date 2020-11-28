#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int e[n], c[m];
  for (int i = 0; i < n; ++i) {
    cin >> e[i];
  }
  for (int j = 0; j < m; ++j) {
    cin >> c[j];
  }
  int it = 0;
  int temp[n];
  while (it < m) {
    if (it < n) {
      temp[it] = e[it] * c[it];
    } else {
      int least = temp[n-1], index = 0;
      for (int k = n - 1; k >= 0; --k) {
        if (temp[k] <= least) {
          least = temp[k];
          index = k;
        }
      }
      temp[index] += e[index] * c[it];
    }
    it++;
  }
  int time = temp[0];
  for (int l = 0; l < n; ++l) {
    if (temp[l] > time) {
      time = temp[l];
    }
  }
  cout << time << endl;
}
