//10 - Faça uma função que retorne o maior fator primo de um número.

#include <iostream>

int primefactor(int number);
int isPrimeNumber(int number);
int main(){
  int number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  std :: cout << primefactor(number) << std :: endl;

  
  return 0;
}

int primefactor(int number){
  int bigger = 0;
  for(int i = 1; i < number; i++){
    if(number % i == 0 ){
      if(i > bigger && isPrimeNumber(i) == 1){
        bigger = i;
      }
    }
  }

  return bigger;
}
int isPrimeNumber(int number){
  for(int i = 2; i < number; i++){
    if(number % i == 0){
      return false;
    }
  }
  return true;
}