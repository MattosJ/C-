#include <iostream>
//Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando a sua altura em centímetros.

//Encontre o aluno mais alto e o mais baixo.

//Mostre o número do aluno mais alto e o número do aluno mais baixo, junto com suas alturas.
int main(void){
  int numberOfTall = 0;
  int numberOfSmall = 0;
  float heightMoreTall = -99999;
  float heightMoreSmall = 99999;

  for(int i = 1; i <= 10; i++){
    float height;
    std :: cout << "Enter  Height of student " << i <<": " << std :: endl;
    std :: cin >> height;
    if(height > heightMoreTall){
      heightMoreTall = height;
      numberOfTall = i;
    }
    if(height < heightMoreSmall){
      heightMoreSmall = height;
      numberOfSmall = i;
    }
  }
  std :: cout <<"***************Data***************" << std :: endl;
  std :: cout<<"More Tall: " << heightMoreTall << std :: endl;
  std :: cout <<"More Tall number: " << numberOfTall << std :: endl;
  std :: cout <<"More Small:" << heightMoreSmall << std :: endl;
  std :: cout <<"More Small number: " << numberOfSmall << std :: endl;
}