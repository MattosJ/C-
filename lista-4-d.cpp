// Faça um programa que some os números ímpares contidos em um intervalo digitado pelo usuário. Caso o usuário digite um intervalo inválido (começando por um valor maior que o valor final) deve ser escrito uma mensagem de erro na tela, “Intervalo de valores inválido” e o programa termina.
// Faça um programa que conte quantos números múltiplos de 7 existem no intervalo entre a e b, onde a e b são números informados pelo usuário
#include <iostream>

int main(){

  int inferiorLimit;   int upperLimit;   int sum = 0;   int count = 0;

  std :: cout << "Enter inferior Limit: " << std :: endl;
  std :: cin >> inferiorLimit;
  std :: cout <<"Enter Upper Limit: " << std :: endl;
  std :: cin >> upperLimit;

  if(inferiorLimit >= upperLimit){
    std :: cout <<"invalid limit! " << std :: endl;
  }
  else if(inferiorLimit < 0 || upperLimit < 0){
    std :: cout <<"Invalid Limit! " << std :: endl;
  }
  else{
    for(int o = inferiorLimit; o <= upperLimit;o++){
      if(o % 7 == 0 && o != 0){
        count ++;
      }
    }
    for(int i = inferiorLimit; i <= upperLimit; i++){
      if(i % 2 != 0){
        sum += i;
      }
    }
  }

  std :: cout << sum << std :: endl;
  std :: cout << count << std :: endl;

  return 0;
}