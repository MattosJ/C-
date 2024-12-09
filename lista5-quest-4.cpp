#include <iostream>

int main(){
  const int SIZE = 10;
  int numbers[SIZE];
  int odd = 0;
  for(int i = 0; i < SIZE; i++){
    int aux = 0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    numbers[i] = aux;
  }
  for(int numero : numbers){
    if(numero % 2 != 0){
      odd += 1;
    }
  }
  std :: cout << odd << std :: endl;


  return 0;
}