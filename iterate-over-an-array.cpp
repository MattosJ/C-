#include <iostream>

int main(){
  std :: string students[] = {"James","Anne","Robert","Ana","Pedro"};

  int numberStudents = sizeof(students)/sizeof(std::string);
  std :: cout << numberStudents << std :: endl ;
  for(int i = 0; i < numberStudents; i++){
    std :: cout << students[i] << std :: endl;
  }

  return 0;
}