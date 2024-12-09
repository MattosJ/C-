#include <iostream>
#include <cmath>
float sphereVolume(float radius);
int main(){
  float radius;
  std :: cout<<"Enter radius of sphere: " << std :: endl;
  std :: cin >> radius;
  std:: cout << sphereVolume(radius) << std :: endl;


  return 0;
}
float sphereVolume(float radius){
  float vol = float(4*3.14159 * pow(radius,3))/3;

  return vol;
}
