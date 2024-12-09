#include <iostream>
//O Departamento Estadual de Meteorologia lhe contratou para desenvolver um programa que leia as um conjunto indeterminado de temperaturas, e informe ao final a menor e a maior temperaturas informadas, bem como a média das temperaturas.
int main(void){
  float TotalTemp = 0;
  int infoTemp = 0;
  float temp;
  char infor = ' ';
  float lowTemp = 9999999;
  float bigTemp = -9999999;
  while(true){
    std :: cout <<"Enter temperature: " << std :: endl;
    std :: cin >> temp;
    if(temp < lowTemp){
      lowTemp = temp;
    }
    if(temp > bigTemp){
      bigTemp = temp;
    }
    infoTemp ++;
    TotalTemp += temp;
    std :: cout <<"You like infor more:(s/n)" << std :: endl;
    std :: cin >> infor;
    if(infor == 'N' || infor == 'n'){
      break;
    }
  }
  std :: cout <<"Low: " << lowTemp << std :: endl;
  std :: cout <<"Big: " << bigTemp << std :: endl;
  std :: cout <<"Average: " << TotalTemp / infoTemp << std :: endl;
}