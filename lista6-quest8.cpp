//Escreva um algoritmo que recebe um número inteiro positivo n e calcule o seu fatorial, n!.
#include <iostream>
long long int factorial(int number);
int main(){
  int number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;

  std :: cout << factorial(number) << std :: endl;
  

  return 0;
}

long long int factorial(int number){
  if(number < 1){
    return 1;
  }
  else{
    long long factorial = 1;
    for(int i = 1; i <= number; i++){
      factorial  = factorial * i;
    }
    return factorial;
  }
}