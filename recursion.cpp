#include <iostream>

// recursion = a programming technique where a function invokes itself from within.
// break a complex concept into a repeatable single step;

//(iterative vs recursive)

// advantages = less code and is cleaner
//    userful for sorting and searching algorithms

// disadvantages = uses more memory
//                 slower

void walk(int steps);
int factorial(int num);
int main(){

  
  std :: cout << factorial(10);



  return 0;
}

void walk(int steps){
 if(steps > 0){
  std  :: cout << "You  take a step\n";
  walk(steps - 1);
 }
}

int factorial(int num ){
  if(num > 1){
    return num * factorial(num - 1);
  }
  else{
    return 1;
  }
}