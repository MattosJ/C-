#include <iostream>
/* Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os códigos utilizados são: 1, 2, 3, 4 - Votos para os respectivos candidatos (você deve montar a tabela ex: 1 - Jose/ 2- João/etc) 5 - Voto Nulo 6 - Voto em Branco

Faça um programa que calcule e mostre: O total de votos para cada candidato; O total de votos nulos; O total de votos em branco; A percentagem de votos nulos sobre o total de votos; A percentagem de votos em branco sobre o total de votos.

Para finalizar o conjunto de votos tem-se o valor zero.*/
void message(){
  std :: cout <<"Enter 1 - Candidate A" << std :: endl;
  std :: cout <<"Enter 2 - Candidate B" << std :: endl;
  std :: cout <<"Enter 3 - Candidate C" << std :: endl;
  std :: cout <<"Enter 4 - Candidate D" << std :: endl;
  std :: cout <<"Enter 5 - In white" << std :: endl;
  std :: cout <<"Enter 6 - Anulate" << std :: endl;
}

void print(int total,int a, int b, int c,int d, int e , int f){
  std :: cout <<"The total of the vote is: "<< total << std :: endl;
  std :: cout <<"The total for candidate A is: "<< a << std :: endl;
  std :: cout <<"The total for candidate B is: "<< b << std :: endl;
  std :: cout <<"The total for candidate C is: "<< c << std :: endl;
  std :: cout <<"The total for candidate D is: "<< d << std :: endl;
  std :: cout <<"The total for In White is: "<< e << std :: endl;
  std :: cout <<"The total for Anulate is: "<< f << std :: endl;
}


int main(void){
  int candidateA = 0;
  int candidateB = 0;
  int candidateC = 0;
  int candidateD = 0;
  int inwhite = 0;
  int anulate = 0;
  int totalVote = 0;
  int vote = 10;

  while(vote != 0){
    message();
    std :: cin >> vote;

    if(vote == 1){
      candidateA ++;
      totalVote++;
    }
    else if(vote == 2){
      candidateB++;
      totalVote++;
    }
    else if(vote == 3){
      candidateC++;
      totalVote++;
    }
    else if(vote == 4){
      candidateD++;
      totalVote++;
    }
    else if(vote == 5){
      inwhite++;
      totalVote++;
    }
    else if(vote == 6){
      anulate++;
      totalVote++;
    }
  }

  print(totalVote,candidateA,candidateB,candidateC,candidateD,inwhite,anulate);
  std :: cout <<"The percent of candidate A: " << (float(candidateA) / totalVote) * 100 <<"%"<< std :: endl;
  std :: cout <<"The percent of candidate B: " << (float(candidateB) / totalVote) * 100 <<"%" << std :: endl;
  std :: cout <<"The percent of candidate C: " << (float(candidateC) / totalVote) * 100 <<"%"<< std :: endl;
  std :: cout <<"The percent of candidate D: " << (float(candidateD) / totalVote) * 100 <<"%" << std :: endl;
  std :: cout <<"The percent of In white: " << (float(inwhite) / totalVote) * 100 <<"%" << std :: endl;
  std :: cout <<"The percent of Anulate: " << (float(anulate) / totalVote) * 100 <<"%" << std :: endl;

}