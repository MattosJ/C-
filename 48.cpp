#include <iostream>

int main(void){
  std :: string name;
  std :: cout<<"Enter name: " << std :: endl;
  getline(std :: cin, name);
  while(name.length() < 3){
    std :: cout<<"Enter name: " << std :: endl;
    getline(std :: cin, name);
  }
  int age;
  std :: cout <<"Enter you age: " << std :: endl;
  std :: cin >> age;
  while(age < 0 || age > 160){
    std :: cout <<"Enter you age: " << std :: endl;
    std :: cin >> age;
  }
  float wage;
  std :: cout <<"Enter you wage: " << std :: endl;
  std :: cin >> wage;
  while(wage < 0){
    std :: cout <<"Enter you wage: " << std :: endl;
    std :: cin >> wage;
  }

  char gender;
  std :: cout <<"Enter you gender: " << std :: endl;
  std :: cin >> gender;
  while((gender != 'f') && (gender !='m') && (gender != 'F') && (gender != 'M')){
    std :: cout <<"Enter you gender: " << std :: endl;
    std :: cin >> gender;
  }

}