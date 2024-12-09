#include <iostream>
#include <cmath>
float positive(float number);
float bigger(float number, float number2);
int perfectSquare(int number);
int main(){
  float number;
  std :: cout <<"Enter number: " << std :: endl;
  std :: cin >> number;
  float number2;
  std :: cout <<"Enter number 2: " << std :: endl;
  std :: cin >> number2;
  std :: cout << positive(number) << std :: endl; 
  std :: cout << bigger(number,number2) << std :: endl;
  std :: cout <<perfectSquare(number) << std :: endl;
}
float positive(float number){
  if(number > 0){
    return true;
  }
  return false;
}
float bigger(float number, float number2){
  if(number > number2){
    return number;
  }
  else if(number2 > number){
    return number2;
  }
  else{
    std :: cout << "The numbers it equals!";
  }
  return 0;
}
int perfectSquare(int number){
  int raizq = int(sqrt(number));
  if (raizq * raizq == number ){
    return true;
  }
  else{
    return false;
  }
}