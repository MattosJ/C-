#include <iostream>
#include <cmath>


bool iprime(int number) {
  if (number < 1) {
      return false;
  }
  for(int i = 2; i <= sqrt(number); i++){
    if(number % i == 0){
      return false;
    }
  }
  return true;
}

int main(void){
  int sup;
  
  std :: cout <<"Enter limit sup: " << std :: endl;
  std :: cin >> sup;

  for(int i = 1; i <= sup; i++){
    if(iprime(i)){
      std :: cout << i << std :: endl;
    }
  }
}