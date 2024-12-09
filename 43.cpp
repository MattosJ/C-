#include <iostream>

int main(void){
  const float rebateAl20 = 0.03;
  const float rebateAl20plus = 0.05;
  const float rebateGas20 = 0.04;
  const float rebateGas20plus = 0.06;
  const float gasPrice = 2.5;
  const float alPrice = 1.90;
  float fuel;
  std :: cout <<"Enter the number of liters: " << std :: endl;
  std :: cin >> fuel;
  char fuelType;
  std :: cout <<"****************" << std :: endl;
  std :: cout <<"Enter G for gas" << std :: endl;
  std :: cout <<"Enter A for Al" << std :: endl;
  std :: cin >> fuelType;
  float total;
  if(fuelType == 'a' || fuelType =='A'){
    if(fuel <= 20){
      total = (alPrice * fuel) - ((alPrice * fuel) * rebateAl20);
    }
    else{
      total = (alPrice * fuel) - ((alPrice * fuel) * rebateAl20plus);
    }
  }
  else if(fuelType == 'g' || fuelType =='G'){
    if(fuel <= 20){
      total = (gasPrice * fuel) - ((gasPrice * fuel) * rebateGas20);
    }
    else{
      total = (gasPrice * fuel) - ((gasPrice * fuel) * rebateGas20plus);
    }
  }

  std :: cout << total << std :: endl;


}