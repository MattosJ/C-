#include <iostream>
#include <math.h>

int main(){
  float libras;
  std :: cout <<"Enter value in libras: " << std :: endl;
  std :: cin >> libras;
  float quilogramas = libras * 0.45;
  std :: cout << quilogramas << std :: endl;

  float number1;
  float number2;
  float number3;

  std :: cout <<"Enter number:  " << std :: endl;
  std :: cin >> number1;
  std :: cout <<"Enter number:  " << std :: endl;
  std :: cin >> number2;
  std :: cout <<"Enter number:  " << std :: endl;
  std :: cin >> number3;
  float somaQuadrados = pow(number1,2) + pow(number2,2) + pow(number3,2);

  std :: cout << somaQuadrados << std :: endl;

  int number;
  std :: cout <<"Enter number:  " << std :: endl;
  std :: cin >> number;
  std :: cout << number - 1 <<"  " << number + 1 << std :: endl;
  std :: cout << (number * 3 + 1) + (number * 2 - 1) << std :: endl;

  float a;
  float b;
  float c;
  float d;
  float e;
  float f;

  std :: cout <<"Enter number a :   " << std :: endl;
  std :: cin >> a;
  std :: cout <<"Enter number b :   " << std :: endl;
  std :: cin >> b;
  std :: cout <<"Enter number c:   " << std :: endl;
  std :: cin >> c;
  std :: cout <<"Enter number d :   " << std :: endl;
  std :: cin >> d;
  std :: cout <<"Enter number e :   " << std :: endl;
  std :: cin >> e;
  std :: cout <<"Enter number f:   " << std :: endl;
  std :: cin >> f;

  float x = (c * e) - (b * f) / (a*e) - (b * d);
  float y = (a * f) - (c*d)/ (a*e) -(b*d);

  std :: cout << x << std :: endl;
  std :: cout << y << std :: endl;
  return 0;
}