#include <iostream>
using namespace std;
int main() {
  float d;
  cout << "Enter diameter: ";
  cin >> d;
  float h;
  cout << "Enter height: ";
  cin >> h;
  float p = 3.14;
  float volume;
  volume = (p*d*d/4)*h;
  cout << "volume = "<< volume;
}