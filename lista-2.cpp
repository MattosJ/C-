#include <iostream>

int main(){
  int number1;
  int number2;


  std :: cout << "This is 1:" << std :: endl;
  std :: cout << "Enter number1: ";
  std :: cin >> number1;

  std :: cout << "Enter number2: ";
  std :: cin >> number2;  

  std :: cout << number1 + number2 << std :: endl;
  std :: cout << number1 - number2 << std :: endl;
  std :: cout << number1 * number2 << std :: endl;
  std :: cout << number1 / float(number2) << std :: endl;


  float number3;
  float number4;
  float number5;
  std :: cout <<"This is 2:" << std :: endl;
  std :: cout <<"Enter number: " <<std :: endl;
  std :: cin >> number3;

  std :: cout <<"Enter number: " <<std :: endl;
  std :: cin >> number4;

  std :: cout <<"Enter number: " <<std :: endl;
  std :: cin >> number5;  

 float sum = number3 + number4 + number5;
 float mult = number3 * number4 * number5;
 float media = sum/3;

 std :: cout <<"This is sum: " << sum << std :: endl;
 std :: cout <<"This is media: " << media << std :: endl;
 std :: cout <<"This is mult: " << mult << std :: endl;

  return 0;
}
