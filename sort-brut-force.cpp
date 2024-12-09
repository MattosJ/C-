#include <iostream>
#include <ctime>
// Escreva um programa que recebe do usuário dois números inteiros m e n e duas sequências ordenadas com m e n números inteiros. Crie uma lista única ordenada contendo todos os elementos das sequências originais sem repetição.


int main(){
  
  const int SIZE = 1000000;
  float numbers[SIZE];
  srand(time(0));
  for(int i = 0; i<sizeof(numbers)/sizeof(numbers[0]);i++){
    
    int random = rand() % 100 + 1;
    float aux = random;
    numbers[i] = aux;
  }
  
  
 
  clock_t start = clock();
  int amount = 0;
  for(int i= 0;i<sizeof(numbers)/sizeof(numbers[0]);i++){
    for(int j = i + 1; j < sizeof(numbers)/sizeof(numbers[0]) ; j++){
      if(numbers[j] < numbers[i]){
        float swap = 0;
        swap = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = swap;
        amount ++;
        
      }
      else{
        amount ++;
      }
    }
  }
  clock_t end = clock();
  double elapsed = end - start;
  std :: cout << elapsed / CLOCKS_PER_SEC << std :: endl;
  for(float number : numbers){
    std :: cout << number << std :: endl;
  }

  std :: cout << amount << std :: endl;

  return 0;
}
