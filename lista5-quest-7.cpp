#include <iostream>
//Leia uma lista com 10 números inteiros. Escreva os elementos da lista eliminando elementos repetido.
int main(){
  const int SIZE = 5;
  float numbers[SIZE];
  float auxs[SIZE];
  int newSize = SIZE;
   for(int i = 0; i<SIZE; i++){
    float aux = 0;
    std :: cout <<"Enter number: " << std :: endl;
    std :: cin >> aux;
    numbers[i] = aux;
    auxs[i] = numbers[i];
    }

    for(int i = 0; i < SIZE ; i++){
      for(int j = i + 1; j < SIZE; j++){
        if(numbers[i] == auxs[j]){
          numbers[i] = -999;
          newSize = newSize - 1;
        }
      }
    }
    int j = 0;
    float numbers2[newSize];
    for(int i= 0; i< SIZE ; i++){
      if(numbers[i] == -999){
        continue;
      }
      else{
        numbers2[j] = numbers[i];
        j++;
      }
      
    }
    for(int o = 0; o < newSize; o++){
      std :: cout <<numbers2[o] << std :: endl;
    }

  return 0;
}