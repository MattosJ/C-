#include <iostream>
#include <cmath>
int main(void){
  float number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  if(floor(number) == number){
    std :: cout <<"The number is int" << std :: endl;
  }
  else{
    std :: cout <<"The number is float" << std :: endl;
  }


}