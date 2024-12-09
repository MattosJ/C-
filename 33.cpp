/*Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro; Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer dois lados iguais; Triângulo Escaleno: três lados diferentes;*/

#include <iostream>

int main(void){
  float sideA; float sideB; float sideC;
  std :: cout <<"Enter side A: " << std :: endl;
  std :: cin >> sideA;
  std :: cout <<"Enter side B: " << std :: endl;
  std :: cin >> sideB;
  std :: cout <<"Enter side C: " << std :: endl;
  std :: cin >> sideC;
  if((sideA > (sideB + sideC)) || (sideB > (sideA + sideC)) || (sideC > (sideA + sideB))){
    std :: cout <<"Does not form a triangle!" << std :: endl;
  }
  if( (sideA == sideB) && (sideB == sideC) ){
    std :: cout <<"The triangle is equilateral" << std :: endl;
  }
  else if( ((sideA == sideB) && (sideB != sideC)) || ((sideA == sideC) && (sideB != sideC)) || ((sideB == sideC) && (sideB != sideA)) ){
    std :: cout <<"The triangle is isosceles" << std :: endl;
  }
  else{
    std :: cout <<"The triangle is scalene" << std :: endl;
  }
}