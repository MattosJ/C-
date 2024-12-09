#include <iostream>
//Escreva um programa que leia duas listas do mesmo tamanho (N) e calcule a média de cada uma das listas, informe qual lista tem a maior média. Calcule a lista soma dos dois vetores (posição por posição).
int main(){
  int size = 0;
  std :: cout <<"Enter size: " << std :: endl;
  std :: cin >> size;
  float a[size];
  float b[size];
  float c[size];

  for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
    float aux = 0;
    std :: cout <<"Enter value A: " << std :: endl;
    std :: cin >> aux;
    a[i] = aux;
    std :: cout <<"Enter value B: " << std :: endl;
    std :: cin >> aux;
    b[i] = aux;
  }
  float sumA = 0;
  int countA = 0;
  for(float i : a){
    sumA += i;
    countA++;
  }
  float sumB = 0;
  int countB = 0;
  for(float i : b){
    sumB += i;
    countB++;
  }
  std :: cout << sumA/countA << std :: endl;
  std :: cout << sumB/countB << std :: endl;
  if((sumA/countA) > (sumB/countB)){
    std :: cout << "A > B" << std :: endl;
  }
  else if((sumA/countA) < (sumB/countB)){
    std :: cout << "A < B" << std :: endl;
  }
  else{
    std :: cout << "A = B" << std :: endl;
  }
  for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
    c[i] = a[i] + b[i];
  }
  for(float i : c){
    std :: cout << i << std :: endl;
  }

  return 0;
}