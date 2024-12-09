//Faça um programa que peça para n pessoas a sua idade, ao final o programa deverá verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.

#include <iostream>

int main(void){
  int numberOfPeople;
  std :: cout <<"Enter number of People: " << std :: endl;
  std :: cin >> numberOfPeople;
  int sum = 0;
  for(int i = 1; i<= numberOfPeople ; i++){
    int age;
    std :: cout <<"Enter age"<<i <<" :" << std :: endl;
    std :: cin >> age;
    sum += age;
  }

  float average = sum / numberOfPeople;
  if(average <= 25){
    std :: cout <<"Class young with average age: "<<average << std :: endl;
  }
  else if( (average > 25) && (average <= 60) ){
    std :: cout <<"Class Adult with average age: " << average << std :: endl;
  }
  else{
    std :: cout <<"Class Elderly with average age: " << average << std :: endl;
  }




}