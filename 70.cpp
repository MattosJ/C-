#include <iostream>
//Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.
int main(void){
  int numberOfVoters; int candidate1 = 22; int candidate2 = 13; int candidate3 = 31;
  int voteIn1 =0; int voteIn2 = 0; int voteIn3 = 0;
  std :: cout <<"Enter number of voters: " << std :: endl;
  std :: cin >> numberOfVoters;
  for(int i = 1; i<= numberOfVoters; i++){
    int vote = 0;
    std :: cout <<"22 for Cantidate 1 Jane Doe" << std :: endl;
    std :: cout <<"13 for candidate 2 John Doe" << std :: endl;
    std :: cout <<"31 for candidate 3 John John Doe:" << std :: endl;
    std :: cout <<"Enter your vote: " << std :: endl;
    std :: cin >> vote;
    if(vote == 22){
      voteIn1 += 1;
    }
    else if(vote == 13){
      voteIn2 += 1;
    }
    else if(vote == 31){
      voteIn3 += 1;
    }
  }
  std :: cout <<"Jane Doe: " <<  float(voteIn1) / numberOfVoters * (100) <<"%" << std :: endl;
  std :: cout <<"John Doe: " << float( voteIn2) / numberOfVoters * (100)<<"%" << std :: endl;
  std :: cout << "John John Doe: "<<  float(voteIn3) / numberOfVoters * (100)<<"%"<< std :: endl;
}