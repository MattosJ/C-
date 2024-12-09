//Escreva uma função que recebe uma lista de números reais e retorna os dois maiores números da lista
#include <iostream>
float biggers(float array[], int size){
  float bigger1 = -99999999;
  float bigger2 = -99999998;
  for(int i = 0; i < size; i++){
    if(array[i] > bigger1){
      bigger1 = array[i];
    }
    else if(array[i] > bigger2){
      bigger2 = array[i];
    }
  }
  std :: cout << "Bigger 1: " << bigger1 << std :: endl;
  std :: cout << "Bigger 2: " << bigger2 << std :: endl;
}

int main(){
  int size = 0;
  std :: cout << "Enter array size: " << std :: endl;
  std :: cin >> size;
  float list[size];

  for(int i = 0; i < size; i++){
    float aux;
    std :: cout << "Enter number: " << std :: endl;
    std :: cin >> aux;
    list[i] = aux;
  }
  biggers(list,size);
  return 0;
}