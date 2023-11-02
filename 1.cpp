#include <iostream>

using namespace std;

int H(int n) {
  if (n == 0) {
    return 0;
  } else {
    return 2 * H(n - 1) + 1;
  }
}

int main() {
  int n;
  cin >> n;
  cout << H(n) << endl;
  return 0;
}
