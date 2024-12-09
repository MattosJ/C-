#include <iostream>

int main(){
  float tempF;
  std :: cout <<"Enter temperature: " << std:: endl;
  std :: cin >> tempF;
  float tempc = 5.0 * (tempF - 32.0) / 9;
  std :: cout << tempc << std :: endl;

  float Celsius;
  std:: cout <<"Enter temp in Celsius: " << std :: endl;
  std :: cin >> Celsius;
  float kelvin = Celsius + 273.15;
  std :: cout << kelvin << std :: endl;

  float ang;
  std :: cout <<"Enter angle: " << std :: endl;
  std :: cin >> ang;
  float rad = ang * (3.14159/180);
  std :: cout << rad << std :: endl;


  float vol;
  std :: cout <<"Enter vol: " << std :: endl;
  std :: cin >> vol;
  float l = 1000 * vol;
  std :: cout << l << std :: endl;
  return 0;
}