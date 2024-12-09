//Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.
//Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.
#include <iostream>

int main(void){
  float sum = 0;
  float low = 9999999999;
  float bigger = -9999999;
  int number;
  std :: cout <<"Enter number: " << std ::endl;
  std :: cin >> number;

  for(int i = 0; i < number; i++){
    float aux;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    while((aux < 0) || (aux > 1000)){
      std :: cout <<"Enter number: " << std :: endl;
      std :: cin >> aux;   
    }
    if(aux  < low){
      low = aux;
    }
    if(aux > bigger){
      bigger = aux;
    }
    sum += aux;
  }
  std :: cout <<"The sum is: " << sum << std :: endl;
  std :: cout <<"The bigger is: " << bigger <<std :: endl;
  std :: cout <<"The low is: " << low <<std :: endl;

}