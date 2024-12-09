#include <iostream>
//object = A collection of attributes and methods
// they can have characteristics and could perform actions
// can be used to mimic real world items
// created from a class wich acts as a "blue-print"

class Human{
  public:
    std :: string name;
    std :: string occupation;
    int age;

    void eat(){
      std :: cout << "This person is eating" << std :: endl;
    }
    void drink(){
      std :: cout << "This person is driking" << std :: endl;
    }
    void sleep(){
      std :: cout <<"This person is sleeping" << std :: endl;
    }
};

class Car{
  public:
  std :: string make;
  std :: string model;
  int year;
  std :: string color;

  void accelerate(){
    std :: cout << "You step on the gas" << std :: endl;
  }
  void brake(){
    std :: cout << "You step on the brakes" << std :: endl;
  }
};

int main(){
  Human human1;
  Human human2;

  human1.name = "Rick";
  human1.occupation ="scientist";
  human1.age = 70;

  std :: cout << human1.name << std :: endl;
  std :: cout << human1.occupation << std :: endl;
  std :: cout << human1.age << std :: endl;
  human1.eat();
  human1.drink();
  human1.sleep();

  human2.name = "Morty";
  human2.occupation ="student";
  human2.age = 15;

  std :: cout << human2.name << std :: endl;
  std :: cout << human2.occupation << std :: endl;
  std :: cout << human2.age << std :: endl;

  human2.eat();
  human2.drink();
  human2.sleep();


  Car car1;
  car1.make = "Ford";
  car1.model = "Mustang";
  car1.year = 2023;
  car1.color ="silver";
  std :: cout << car1.make << std :: endl;
  std :: cout << car1.model << std :: endl;
  std :: cout << car1.year << std :: endl;
  std :: cout << car1.color << std :: endl;

  car1.accelerate();
  car1.brake();
  return 0;
}