#include <iostream>
//  Escreva um programa que lê do usuário 10 números reais em uma lista. Calcule o quadrado de cada elemento da lista e armazene o resultado em outra lista também de tamanho 10. Ao final mostre na tela os elementos das duas lista.
int main(){
  int num = 10;
  float number[num];
  float number1[num];
  for(int i = 0; i < 10;i++){
    float aux = 0.0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    number[i] = aux;
  }
  for(int i = 0; i < 10; i++){
    number1[i] = number[i] * number[i];
  }
  for(float numero : number1){
    std :: cout << numero << std :: endl;
  }

  return 0;
}