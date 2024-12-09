#include <iostream>
/*Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500 (inclusive) - desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de 10% Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.*/
int main(void){
  float taxIr;
  float valueHours;
  float hoursInMonth;
  std :: cout <<"Enter the value of you hour: " << std :: endl;
  std :: cin >> valueHours;
  std :: cout <<"Enter Hours in Month: " << std :: endl;
  std :: cin >> hoursInMonth;
  float wageBrute = valueHours * hoursInMonth;
  if(wageBrute <= 900){
    taxIr = 0;
  }
  else if( wageBrute > 900 && wageBrute <= 1500){
    taxIr = 0.05;
  }
  else if(wageBrute > 1500 && wageBrute <= 2500){
    taxIr = 0.10;
  }
  else{
    taxIr = 0.20;
  }
  float wageLiquid = wageBrute - (wageBrute * taxIr);

  std :: cout <<"The wage brutte is : " << wageBrute << std :: endl;
  std :: cout <<"The Ir tax applied: " << taxIr << std :: endl;
  std :: cout <<"The liquid wage is: " << wageLiquid << std :: endl;
  




}