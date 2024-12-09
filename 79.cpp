
//Sabe-se que: Esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00; Em 1996 recebeu aumento de 1,5% sobre seu salário inicial; A partir de 1997 (inclusive), os aumentos salariais sempre correspondem ao dobro do percentual do ano anterior.

//Faça um programa que determine o salário atual desse funcionário. Após concluir isto, altere o programa permitindo que o usuário digite o salário inicial do funcionário.
#include <iostream>

int main(void){

  int yearHired = 0;
  std :: cout <<"Enter Year of Hired: " << std :: endl;
  std :: cin >> yearHired;

  float initialWage = 0;
  std :: cout <<"Enter the initial wage: " << std :: endl;
  std :: cin >> initialWage;

  float wageActual = 0;

  int actualYear = 0;
  std :: cout <<"Enter Year actual: " << std :: endl;
  std :: cin >> actualYear;

  float initTaxForYear = 0;
  std :: cout <<"Enter initial Tax for year: " << std :: endl;
  std :: cin >> initTaxForYear;

  float actualTax = initTaxForYear;

  for(int i = yearHired; i<=actualYear; i++){
    if(i == yearHired){
      wageActual = initialWage + (initialWage * initTaxForYear);
    }
    else{
      actualTax = actualTax * 2;
      wageActual = initialWage + (initialWage * (actualTax));
    }
    std :: cout <<wageActual << std :: endl;
    std :: cout << actualTax << std :: endl;
  }
  
}