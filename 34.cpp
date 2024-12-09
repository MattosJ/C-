#include <iostream>
#include <cmath>
int main(void){
  float a; float b; float c;
  
  
  float x1 = 0;
  float x2 = 0;

  std :: cout <<"Enter a: " << std :: endl;
  std :: cin >> a;
  std :: cout <<"Enter b: " << std :: endl;
  std :: cin >> b;
  std :: cout << "Enter C: " << std :: endl;
  std :: cin >> c;
  float delta = (pow(b,2)) - 4 * a * c;
  std :: cout <<delta << std :: endl;
  if(delta < 0){
    std :: cout <<"does not have value real" << std :: endl;
  }
  else{
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    std :: cout <<"x1: " << x1 << std :: endl;
    std :: cout <<"x2: " << x2 << std :: endl;
  }
}