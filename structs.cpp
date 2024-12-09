#include <iostream>
//struct = a structure that group related variables under one name structs can contain many different data types (string,int...)
// variables in a struct are know as members.
// members can be acess with. "Class member acess operetor".

struct student{
  std :: string name;
  double gpa;
  bool enrolled = true;
};

int main(){
  student student1;
  student1.name = "James";
  student1.gpa = 3.2;

  student student2;
  student2.name = "Anne";
  student2.gpa = 8.2;

  student student3;
  student3.name = "Ana";
  student3.gpa = 6.2;
  student3.enrolled = false;


  std :: cout << student1.name << std :: endl;
  std :: cout << student1.gpa << std :: endl;
  std :: cout << student1.enrolled << std:: endl; 

  std :: cout << student2.name << std :: endl;
  std :: cout << student2.gpa << std :: endl;
  std :: cout << student2.enrolled << std:: endl;

  std :: cout << student3.name << std :: endl;
  std :: cout << student3.gpa << std :: endl;
  std :: cout << student3.enrolled << std:: endl;

  return 0;
}