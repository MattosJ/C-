/*Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.

Foram obtidos os seguintes dados: Código da cidade; Número de veículos de passeio (em 1999); Número de acidentes de trânsito com vítimas (em 1999).

Deseja-se saber: Qual o maior e menor índice de acidentes de transito e a que cidade pertence; Qual a média de veículos nas cinco cidades juntas; Qual a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.*/

#include <iostream>

int main(void){
  float smallerIndex = 99999;
  float biggerIndex = -99999;
  std :: string citySmallIndex = "";
  std :: string cityBiggerIndex = "";
  int sumNumCars = 0;
  int sumNumLess2000 = 0;
  int cityLess2000 = 0;

  for(int i = 1; i <= 5 ; i++){
    std :: string city;
    std :: cout <<"Enter the city: " << std :: endl;
    if(i == 1){
      getline(std :: cin,city);
    }
    else{
      std :: cin.ignore();
      getline(std :: cin,city);
    }
    int numberOfCar;
    std :: cout <<"Enter number of cars: " << std :: endl;
    std :: cin >>numberOfCar;

    float numberOfAcident;
    std :: cout <<"Enter number of acident: " << std :: endl;
    std :: cin >> numberOfAcident;
    std :: cout <<city << std :: endl;
    sumNumCars += numberOfCar;

    float index;
    index = numberOfAcident / numberOfCar;

    if(index > biggerIndex){
      biggerIndex = index;
      cityBiggerIndex = city;
    }
    if(index < smallerIndex){
      smallerIndex = index;
      citySmallIndex = city;
    }
    if(numberOfCar < 2000){
      cityLess2000 ++;
      sumNumLess2000 += numberOfAcident;
    }
  }

  float average = sumNumCars / 5;

  std :: cout <<"********************" << std :: endl;
  std :: cout <<"Smaller: " << smallerIndex << std :: endl;
  std :: cout <<"City of smaller index: " << citySmallIndex << std :: endl;
  std :: cout <<"Bigger: " << biggerIndex << std :: endl;
  std :: cout <<"City of bigger index: " << cityBiggerIndex << std :: endl;
  std :: cout <<"Average vehicles: " << average << std :: endl;
  std :: cout <<"Average  acident with less 2000 vehicles: " << sumNumLess2000 / cityLess2000 << std :: endl;



}