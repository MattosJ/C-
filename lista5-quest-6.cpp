//6 - Faça um programa que leia uma lista com 10 números reais, calcule e mostre a quantidade de números negativos e a quantidade de números positivos dessa lista
#include <iostream>

int main(){
  const int SIZE = 10;
  float number[SIZE];
  int lessThan = 0;
  int biggerThen  = 0;

  for(int i = 0; i<SIZE; i++){
    float aux = 0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    number[i] = aux;
    if(aux < 0){
      lessThan ++;
    }
    else{
      biggerThen ++;
    }
  }
  std :: cout << lessThan  << std :: endl;
  std :: cout << biggerThen << std :: endl;
  return 0;
}