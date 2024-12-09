#include <iostream>
#include <iomanip>  
//Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).
int main(void){
  float lenArq;
  std :: cout <<"Enter length archive in (MB): " << std :: endl;
  std :: cin >> lenArq;
  float speedNet;
  std :: cout << "Enter Speed of internet in (mb/s)" <<std :: endl;
  std :: cin >> speedNet;
  float seconds = lenArq / speedNet;
  float minutes = seconds / 60;
  std :: cout << "The dowload finish in: " << seconds <<" seconds." << std :: endl;
  std :: cout << std :: setprecision(2) << "OR: " << minutes <<" minutes" << std :: endl;
}