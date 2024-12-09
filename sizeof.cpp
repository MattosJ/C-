#include <iostream>
// sizeof() = determines the size in bytes of a:
//        variable, data type, class, objects,etc.
int main(){

  double gpa = 2.5;
  std :: cout << sizeof(gpa) << " Bytes \n";

  std :: string name = "Bro code aaaaaaaaaaaaaaaaaa VBBBBBBV";
  std :: cout << sizeof(name) << " Bytes \n";

  bool student = true;
  std :: cout << sizeof(student) << " Bytes \n";

  char grade = 'F';
  std :: cout << sizeof(grade) << " Bytes \n";

  char grades[] = {'A','B','C','D','E','F'};
  std :: cout << sizeof(grades) << " Bytes \n";


  std :: string students[] = {"James","Bro","Code","Anne"};
  std :: cout << sizeof(students)/sizeof(std::string) << " elements \n";
  
  int studentsNumber = sizeof(students)/sizeof(std::string);

  for(int i = 0; i <= studentsNumber; i++ ){
    std :: cout << students[i] << std :: endl;
  }
  return 0;
}