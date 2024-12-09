//Escreva uma função que recebe uma lista de números reais e retorna a média deles
#include <iostream>
float average(float array[], int size){
  float sum = 0;
 
  for(int i = 0; i < size ; i++ ){
    sum += array[i];
  }

  float average = float(sum) / float(size) ;
  return average;
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
  std :: cout << average(list,size) << std :: endl;
  return 0;
}