#include <iostream>
//Dynamic memory = Memory that is allocate after the program is already compiled & running.
// use the 'new' operator to allocate memory in the heap rather than the stack.
// Useful when we dont know how much memory we will need. Makes our programs more flexible, especially when accepting user input.


int main(){

  int *pNum = NULL;
  pNum = new int;

  *pNum = 21;

  std :: cout << "address: " << pNum << std :: endl;
  std :: cout <<"Value: " << *pNum << std :: endl;

  delete pNum;




  char *pGrades = NULL;
  int size;
  std :: cout << "How many grades to enter in?: ";
  std :: cin >> size;

  pGrades = new char[5];

  for(int i = 0; i < size; i++){
    std :: cout << "Enter grade #" << i + 1 << ": ";
    std :: cin >> pGrades[i];
  }

  for(int i = 0; i < size; i++){
    std :: cout << pGrades[i] << std :: endl;
  }

  delete[] pGrades;
  return 0;
}