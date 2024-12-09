#include <iostream>
// return = return a value back to the spot 
    // where you called the encompassing function.

double square(double length);

int main(){
  double length = 5.0;
  double result = square(length);
  std :: cout << result;



  return 0;
}

double square(double length){
  return length * length;
}
