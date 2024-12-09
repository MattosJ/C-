#include <iostream>
#include <ctime>
void sort(float array[], int size);
int main(){
  const int SIZE = 100000;
  float numbers[SIZE];

  for(int i = 0; i<sizeof(numbers)/sizeof(numbers[0]);i++){
    float aux = rand() % 100 + 1;
    numbers[i] = aux;
  }
  sort(numbers,SIZE);

  for( float number : numbers){
    std :: cout << number << std :: endl;
  }

  return 0;
}


void sort(float array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) { 
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
