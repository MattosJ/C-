#include <iostream>
//Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7
using namespace std;
void calculateForMan(float heigth){
  cout << 72.7 * heigth - 58 << endl ;
}
void calculateForWoman(float heigth){
  cout << 62.1 * heigth - 44.7 << endl;
}
char womanOrMan(float heigth){
  char sex;
  while(true){
    cout <<"Enter M for Man ou W for Woman: " << endl;
    cin >> sex;
    if(sex =='M' || sex =='W'){
      break;
    }
  }
  if(sex == 'M'){
    calculateForMan(heigth);
  }
  else if(sex == 'W'){
    calculateForWoman(heigth);
  }
}



int main(void){
  float heigth;
  cout <<"Enter heigth: " << endl;
  cin >> heigth;
  womanOrMan(heigth);

}