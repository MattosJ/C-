#include <iostream>
// && = check if two conditions are true.
// || = check if ate least one of two conditions is true.
// ! = reverses the logical state of its operand.


int main(){
  double temp;
  std :: cout << "Enter the temperature: ";
  std :: cin >> temp;

  if(temp > 0 && temp < 30){
    std :: cout << "The temperature is good!" << std :: endl;
  }
  else{
    std :: cout << "The temperature is bad" << std :: endl;
  }

  int age;
  std :: cout <<"what you age?: ";
  std :: cin >> age;
  if ( age <= 18 || age >= 100)
  {
    std :: cout << "You are not allowed!" << std :: endl;
  }
  else{
    std :: cout <<"You are allowed!" << std :: endl;
  }


  bool sunny = false;


  if (!sunny){
    std :: cout << "It is sunny outside!" << std :: endl;
  }
  else{
    std :: cout << "It is cloudy outside!" << std :: endl;
  }
  




  return 0;
}
