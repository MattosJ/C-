#include <iostream>
#include <cmath>
using namespace std;
//Faça um Programa para uma loja de tintas.

//O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

//Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.

//Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
int main(void){
  float mSquare;
  cout <<"Enter m: " << endl;
  cin >> mSquare;
  ceil(mSquare);
  float Pricecans18 = 80.00;
  const float CANS18R = 18 * 6;
  float Pricesgallons3_6 = 25.00;
  const float GALLONS3_6R = 3.6 * 6;
  float cans = 0;
  float gallons = 0;

  if(mSquare < GALLONS3_6R){
    cout <<"buy a gallon  3.6" << endl;
  }
  else if(mSquare > GALLONS3_6R && mSquare < CANS18R){
    cout <<"buy a cans " << endl;
  }
  else{
    cans = int(mSquare) / int(CANS18R);
    gallons = int(mSquare) % int(CANS18R);
    gallons = gallons / GALLONS3_6R;
    
    if(gallons < 1){
      gallons = int(gallons);
      gallons ++;
    }
    else if(gallons > 1 && gallons < 2){
      gallons = int(gallons);
      gallons ++;
    }
    else if(gallons > 2 && gallons < 3){
      gallons = int(gallons);
      gallons ++;
    }
    else if(gallons > 3 && gallons < 4){
      gallons = int(gallons);
      gallons ++;
    }
    else if(gallons > 4){
      gallons = int(gallons);
      cans ++;
    }
    cout<<"You need: " << cans <<" Cans" <<endl;
    cout <<"You need: " << gallons<<" gallons" << endl;
    cout <<"Price cans: " << cans * Pricecans18 << endl;
    cout << "Price gallons: " << gallons * Pricesgallons3_6 << endl;
    cout <<"Total price: " << (cans * Pricecans18) + (gallons * Pricesgallons3_6) << endl;
  }
}