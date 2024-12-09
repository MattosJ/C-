#include <iostream>
// Faça um programa que calcule o valor total investido por um colecionador em sua coleção de CDs e o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor para em cada um.
int main(void){
  float valueTotal = 0;
  float valueAverage = 0;
  int amountCD;
  std :: cout <<"Enter amount of CD: " << std :: endl;
  std :: cin >> amountCD;
  for(int i = 1; i <= amountCD ; i++){
    float value;
    std :: cout <<"Enter value of CD " << i <<": ";
    std :: cin >> value;
    std:: cout <<"" << std :: endl;
    while(value < 0){
      std :: cout <<"Enter value of CD " << i <<": ";
      std :: cin >> value;
      std:: cout <<"" << std :: endl;
    }
    valueTotal += value;
  }
  valueAverage = valueTotal / amountCD;
  std :: cout <<"The value of colection is: " << valueTotal << std :: endl;
  std :: cout <<"The value average of colection is: " << valueAverage << std :: endl;
}