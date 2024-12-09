#include <iostream>

int main(void){
  float wage;
  float newWage;
  float increase = 0;
  std :: cout <<"Enter you wage: " << std :: endl;
  std :: cin >> wage;
  if(wage < 280.00){
    increase = 0.20;
    newWage = wage +(wage * increase);
  }
  else if(wage >= 280.00 && wage < 700){
    increase = 0.15;
    newWage = wage +(wage * increase);
  }
  else if(wage >= 700 && wage < 1500){
    increase = 0.10;
    newWage = wage + (wage * increase);
  }
  else{
    increase = 0.05;
    newWage = wage + (wage *increase);
  }
  std :: cout <<"The new wage is: " << newWage << std :: endl;
  std :: cout <<"The previous age: " << wage << std :: endl;
  std :: cout <<"Increase: " << increase << std :: endl;

}