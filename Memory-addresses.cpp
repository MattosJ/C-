#include <iostream>

// memory address = a location in memory where data is stored
// a memory address can acessed with & (address-of operator)

int main(){

  std :: string name = "James";
  int age = 21;
  bool student = true;

  std :: cout << &name << std :: endl;
  std :: cout << &age << std :: endl;
  std :: cout << &student << std :: endl;
  return 0;
}