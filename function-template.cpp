#include <iostream>
template <typename T, typename U>
// function template = describes what a function looks like.
//            can be used to generate as many overloaded function
//            as needed, each using different data types
auto max(T x, U y){

  return (x > y) ? x : y ;
}


int main(){

  std :: cout << max(2.7,1);


  return 0;
}


