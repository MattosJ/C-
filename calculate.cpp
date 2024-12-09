#include <iostream>
#include <cmath>
using namespace std;
//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
int main(void){
  int number1;
  cout <<"Enter number 1: " << endl;
  cin >> number1;
  int number2;
  cout <<"Enter number 2: " << endl;
  cin >> number2;
  float number3;
  cout <<"Enter number 3: " << endl;
  cin >> number3;
  float calculate = (2 * number1) * (number2/float(2));
  float calculate2 = (3 * number1) + number3;
  float calculate3 = pow(number3,3);
  cout<<calculate << endl;
  cout << calculate2 << endl;
  cout << calculate3 << endl;
}