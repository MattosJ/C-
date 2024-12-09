#include <iostream>
#include <cmath>
using namespace std;
int main(void){
  float mSquare ;
  int lata = 18;
  float lataPrice = 80.00;
  cout <<"Enter metros square: " << endl;
  cin >> mSquare;
  float qtd = (mSquare/3) / lata ;
  cout << ceil(qtd) << endl; 
  cout << ceil(qtd) * lataPrice << endl;
}