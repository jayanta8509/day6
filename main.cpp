//Write a program to find the Quadrants in which coordinates lie
#include <iostream>
using namespace std;
void Quadrants(int a, int b) {
  if (a > 0 && b > 0) {
    cout << "This point lies in first quadrant" << endl;
  } else if (a < 0 && b > 0) {
    cout << "This point lies in second quadrant." << endl;
  } else if (a < 0 && b < 0) {
    cout << "This point lies in third quadrant." << endl;
  } else if (a > 0 && b < 0) {
    cout << "This point lies in fourth quadrant." << endl;
  } else if (a == 0 and b > 0) {
    cout << "positive y axis";
  } else if (a == 0 and b < 0) {
    cout << "negative y axis";
  } else if (b == 0 and a < 0) {
    cout << "negative x axis";
  } else if (b == 0 and a > 0) {
    cout << "positive x axis";
  } else {
    cout << "lies at origin";
  }
}
int main() {
  int x, y;
  cin >> x >> y;
  Quadrants(x, y);
}