#include<iostream>
using namespace std;
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}
int plusFunc(int x, int y, int z) {
  return x + y + z;
}
int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  int myNum3 = plusFunc(1, 2, 3);

  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2 << "\n";
  cout << "Double: " << myNum3 << "\n";
  return 0;
}