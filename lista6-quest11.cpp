// Faça uma função que recebe uma lista de inteiros e retorna quantos valores pares ela  possui. 
//Faça uma função que recebe uma lista de inteiros e retorna todos os valores ímpares.
#include <iostream>

int isEven(int array[] , int size){
  int evens = 0;
  int odds = 0;
  for(int i = 0; i < size;i++){
    if(array[i] % 2 == 0) {
      evens ++;
    }
    else{
      odds ++;
    }
  }
  std :: cout <<"Odds: " << odds << std :: endl;
  std :: cout <<"Evens: "<< evens << std :: endl;
}

int main(){
  int size = 0;
  std :: cout << "Enter array size: " << std :: endl;
  std :: cin >> size;
  int list[size];

  for(int i = 0; i < size; i++){
    int aux;
    std :: cout << "Enter number: " << std :: endl;
    std :: cin >> aux;
    list[i] = aux;
  }

  isEven(list,size);
  return 0;
}

