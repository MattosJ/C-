//  Escreva um programa que recebe uma sequência de N números, imprima a lista na ordem inversa à da leitura.
#include <iostream>

int main(){
  int amount = 0;
  std :: cout <<"Enter amount numbers: " << std :: endl;
  std :: cin >> amount;
 
  float numbers[amount];

  for(int i = 0 ; i < amount ; i++){
    float aux = 0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    numbers[i] = aux;
  }
  for(int i = amount-1; i >= 0; i--){
    std :: cout << numbers[i] << std :: endl;
  }

  return 0;
}