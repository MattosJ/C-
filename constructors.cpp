#include <iostream>
// constructor = special method that is automatically called when an object is instantiated useful for assigning values to attributes as arguments

class Student{
  public : 
  std :: string name;
  int age;
  double gpa;
  Student(std :: string x, int y, double z){
    name = x;
    age = y;
    gpa = z;
  }
};
class Car{
  public:
    std :: string make;
    std :: string model;
    int age;
    std :: string color;
  Car(std :: string w, std :: string x, int y, std :: string z){
    make = w;
    model = x;
    age = y;
    color = z;
  }
};

int main(){
  Student student1("James",23,3.2);
  std :: cout << student1.name << std :: endl;
  std :: cout << student1.age << std :: endl;
  std :: cout  << student1.gpa << std :: endl;

  Student student2("Anne",21,5.0);
  std :: cout << student2.name << std :: endl;
  std :: cout << student2.age << std :: endl;
  std :: cout  << student2.gpa << std :: endl;

  Student student3("Pedro", 25, 0);
  std :: cout << student3.name << std :: endl;
  std :: cout << student3.age << std :: endl;
  std :: cout  << student3.gpa << std :: endl;

  Car car1("Fiat","Uno",1997,"White");
  std :: cout << car1.make << std :: endl;
  std :: cout << car1.model << std :: endl;
  std :: cout << car1.age << std :: endl;
  std :: cout << car1.color << std :: endl;

  Car car2("Ford","Mustang",2023,"Red");
  std :: cout << car2.make << std :: endl;
  std :: cout << car2.model << std :: endl;
  std :: cout << car2.age << std :: endl;
  std :: cout << car2.color << std :: endl;
  return 0;
}