#include <iostream>
//6 - Faça uma função que recebe a altura e o raio de um cilindro e retorna o volume desse cilindro. O volume de um cilindro é calculado por meio da seguinte fórmula: 
//V = π * R*R * altura.
float cylinder(float radius, float h);
int main(){
  float radius; float h;

  std :: cout << "Enter radius: " << std :: endl;
  std :: cin >> radius;
  std :: cout <<"Enter h: " << std :: endl;
  std :: cin >> h;
  std :: cout <<cylinder(radius,h);

  return 0;
}

float cylinder(float radius, float h){
  return 3.14159 * radius * radius * h;
}