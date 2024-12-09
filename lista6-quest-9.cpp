//Faça uma função que recebe um número inteiro e verifica se esse número é primo.
#include <iostream>
int isPrimeNumber(int number);
int main(){
  int number;
  std :: cout << "Enter number: " << std :: endl;
  std :: cin >> number;
  if( isPrimeNumber(number) == 1){
    std :: cout <<"is prime" << std :: endl;
  }
  else{
    std :: cout <<"Not prime" << std :: endl;
  }


  return 0;
}

int isPrimeNumber(int number){
  for(int i = 2; i < number; i++){
    if(number % i == 0){
      return false;
    }
  }
  return true;
}