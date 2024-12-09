#include <iostream>
// pointers = variable that stores a memory address of another variable
//            sometimes it´s easier to work with an address.
//             & address-of operator .
//             * dereference operator.

int main(){

  std :: string name = "James";
  int age = 21;

  std :: string *pName = &name;
  int *pAge = &age;
  std :: string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};

  std :: string *pFreePizzas = freePizzas;

  std :: cout << pName << std :: endl ;
  std :: cout <<*pName << std :: endl ;
  std :: cout << pAge << std :: endl;
  std :: cout << *pAge << std :: endl;

  std :: cout << *pFreePizzas << std :: endl;
  return 0;
}