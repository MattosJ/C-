#include <iostream>
#include <cmath>
// i used a function of cmath why the numbers of the type floating ex: 0.5 can not be calculated;
int main(void){
  int index;
  std :: cout <<"Enter the index of multiplication table: " << std :: endl;
  std :: cin >> index;
  for(int i = 1; i <= 10; i++){
    std :: cout << index <<" X " <<i<<" = " << index * i << std :: endl;
  }
  float base;
  float exponent;
  std :: cout <<"Enter the base: " << std :: endl;
  std :: cin >> base;
  std :: cout <<"Enter the exponent: " << std :: endl;
  std :: cin >> exponent;
  float result = pow(base,exponent);
  std :: cout << result << std :: endl;


}