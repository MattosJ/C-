#include <iostream>

int main(void){
  int numberGrades;
  std :: cout <<"Enter the number of grades: " << std :: endl;
  std :: cin >> numberGrades;
  float sum = 0;
  for(int i = 1; i <= numberGrades; i++){
    float aux;
    std :: cout <<"Enter grade: " << std :: endl;
    std :: cin >> aux;
    sum += aux;
  }
  float average = sum / numberGrades;
  std :: cout << average << std :: endl;

}