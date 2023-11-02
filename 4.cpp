#include <iostream>

using namespace std;

void printn(int number)
{
  if (number == 0)
  return;
  cout << "* ";
  printn(number - 1);
}
void printn(int n, int i)
{
  if (n == 0)
  return;
  printn(i);
  cout << endl;

  printn(n - 1, n + 11);
}

int main() {
  int n;
  cin >> n;

  printn(n);

  return 0;
}
