#include <iostream>

int main(void){
  int number;
  std :: cout <<"Enter number of calculate fibo: " << std :: endl;
  std :: cin >> number;
  long numberAn = 0;
  long numberPos = 1;
  long aux;
  if(number == 0){
    std :: cout << 1 << std :: endl;
  }
  else{
    for(int i = 1; i<= number ; i++){
      std :: cout << numberPos << std :: endl;
      aux = numberPos;
      numberPos += numberAn;
      numberAn = aux;
    }
  }

}