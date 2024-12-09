#include <iostream>
//Desenvolva um programa que armazene quatro notas em uma lista e que apresente a média final. Caso a média seja igual ou superior a 7, apresentar a mensagem "APROVADO", caso contrário, armazenar a nota da prova final e recalcular a média. Caso a nova média seja igual superior a 5, apresentar a mensagem "APROVADO", caso contrário, apresentar a mensagem "REPROVADO
int main(){
  float grades[4];
  float sum = 0;
  int count = 0;
  float average;
  for(int i = 0; i< sizeof(grades)/sizeof(grades[0]); i++){
    float aux = 0;
    std :: cout << "Enter nota " << i + 1 << std :: endl;
    std :: cin >> aux;
    grades[i] = aux;
  }
  for(float grade : grades){
    sum += grade;
    count ++;
  }
  average = sum / count;
  if(average < 7){
    std :: cout << "Disapproved";
  }
  else{
    std :: cout << "approved";
  }




  return 0;
}