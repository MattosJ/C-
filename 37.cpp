#include <iostream>

int main(void){
  int number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  if(number < 0 || number > 999 ){
    std :: cout <<"invalid number! " << std :: endl;
  }
  int hundred = number / 100;
  int rest = number % 100;
  int dozens = rest / 10;
  rest = rest % 10;
  int one = rest;
  std :: cout <<hundred << " " << dozens << " " << " " <<  one;
}