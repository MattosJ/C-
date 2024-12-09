#include <iostream>
#include <cmath>

int main(){
  double a ; double b; double c; double cSquared;
  std :: cout << "whats value A: ";
  std :: cin >> a;

  std :: cout << "whats value B: " ;
  std :: cin >> b;
  
  cSquared = (a * a) + (b * b);
  // c = sqrt(pow(a,2) + pow(b,2));
  c = sqrt(cSquared);
  std :: cout <<"the value of hypotenuse is: " << c;

  return 0;
}