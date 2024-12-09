/* Desenvolver um programa para verificar a nota do aluno em uma prova com 10 questões, o programa deve perguntar ao aluno a resposta de cada questão e ao final comparar com o gabarito da prova e assim calcular o total de acertos e a nota (atribuir 1 ponto por resposta certa).

Após cada aluno utilizar o sistema deve ser feita uma pergunta se outro aluno vai utilizar o sistema.

Após todos os alunos terem respondido informar: Maior e Menor Acerto; Total de Alunos que utilizaram o sistema; A Média das Notas da Turma. Gabarito da Prova: 01 - A 02 - B 03 - C 04 - D 05 - E 06 - E 07 - D 08 - C 09 - B 10 - A

Após concluir isto você poderia incrementar o programa permitindo que o professor digite o gabarito da prova antes dos alunos usarem o programa. */
#include <iostream>
#include <vector>





std::vector<char> BuildTemplate(){
  std :: vector<char> templates;
  for(int i = 1; i <= 10; i++){
    char Btemplate = ' ';
    std :: cout <<"Enter Template question " <<i <<":" << std :: endl;
    std :: cin >>  Btemplate;
    Btemplate = tolower(Btemplate);
    templates.push_back(Btemplate);
    fflush(stdin);
  }
  return templates;
}

std::vector<char> studentAnswer(){
  std :: vector<char> answers;
  for(int i = 1; i<= 10; i++){
    char answer = ' ';
    std :: cout <<"Enter answer for the question " << i <<":" << std :: endl;
    std :: cin >> answer;
    answer = tolower(answer);
    answers.push_back(answer);
  }
  return answers;
}





int main(void){
  std :: vector<char> templates = BuildTemplate();
  std :: vector<std :: string> students;
  while(true){
    std :: string name;
    std :: cout <<"Enter the name of student: "  << std :: endl;
    getline(std :: cin,name);
    fflush(stdin);
    students.push_back(name);
    std :: vector<char> answers = studentAnswer();
    char wantContinue = 's';
    std :: cout <<"want add more one:(y/n): " << std :: endl;
    std :: cin >> wantContinue;
    fflush(stdin);
    wantContinue= tolower(wantContinue);
    if(wantContinue == 'n'){
      break;
    }
  }

  
}