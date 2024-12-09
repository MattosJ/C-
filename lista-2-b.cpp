#include<iostream>
#include <math.h>

int main(){
  float number1;
  std :: cout << "Enter number: " << std :: endl;
  std :: cin >> number1;
  std :: cout << pow(number1,2) << std :: endl;
  
  float r;
  std :: cout <<"Enter raio: " << std:: endl;
  std :: cin >> r;
  float diameter = r * 2;
  float circumference = 2 * 3.14159 * r;
  float area = 3.14159 * pow(r,2);


  std :: cout << diameter << std :: endl;
  std :: cout << circumference << std :: endl;
  std :: cout << area << std :: endl;

  float number2;
  std :: cout <<"Enter number: " << std:: endl;
  std :: cin >> number2;
  std :: cout <<number2/float(5);
  return 0;
}