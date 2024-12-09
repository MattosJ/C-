#include <iostream>
// local variable = declared inside a function or block {}.
// Global variable = delared outside of all functions.
int myNum = 3;
void printNum(int myNum);

int main(){
  std :: cout << myNum << std:: endl;
  printNum(myNum);



  return 0;
}
void printNum(int myNum){
  std :: cout << myNum;
}