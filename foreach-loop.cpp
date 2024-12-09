#include <iostream>
// foreach loop = loop that eases the traversal over an iterable data set.

int main(){

  std :: string students[] = {"James","Anne","Ana","Robert","Paulo"};

  for(std :: string i : students){
    std :: cout << i << std :: endl;
  }
  
  int grades[] = {65,72,81,93};

  for(int i : grades){
    std :: cout << i << std :: endl;
  }
  return 0;
}