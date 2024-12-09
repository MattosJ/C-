// Escreva um programa para listar todos os números primos entre 1 e 10000, na linguagem de sua preferência.

#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int number){
  if(number <= 1){
    return false;
  }
  for(int i = 2; i <= std::sqrt(number); i++){
    if(number % i == 0){
      return false;
    }
  }
  return true;
}

void printArray(const std::vector<int>& array){
  for(int num : array){
    std::cout << num << std::endl;
  }
}

void verification(int number){
  std::vector<int> list;
  for(int i = 2; i < number; i++){
    if(isPrime(i)){
      list.push_back(i);
    }
  }
  printArray(list);
}

int main(){
  verification(1000);
  return 0;
}
