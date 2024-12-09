#include <iostream>

int main(void){
  std :: string codeOfTall = " ";
  std :: string codeOfSmall = " ";
  std :: string codeOfmoreFat = " ";
  std :: string codeOfmoreLean = " ";
  std :: string codestudents = " ";
  float studentsWeigth;
  float studentsHeigth;
  float Tall = 0;
  float small = 10000;
  float MoreFat = 0;
  float moreLean = 10000;
  while(true){
    std :: cout <<"Enter your code: " << std :: endl;
    std :: cin >> codestudents;
    std :: cout << "Enter you weigth: " << std :: endl;
    std :: cin >> studentsWeigth;
    std :: cout <<"Enter you heigth: " << std :: endl;
    std :: cin >> studentsHeigth;
    if(studentsHeigth == 0){
      break;
    }
    else if(studentsHeigth > Tall){
      Tall = studentsHeigth;
      codeOfTall = codestudents;
    }
    else if(studentsHeigth < small){
      small = studentsHeigth;
      codeOfSmall = codestudents;
    }

    if(studentsWeigth == 0){
      break;
    }
    else if(studentsWeigth > MoreFat){
      MoreFat = studentsWeigth;
      codeOfmoreFat = codestudents;
    }
    else if(studentsWeigth < moreLean){
      moreLean = studentsWeigth;
      codeOfmoreLean = codestudents;
    }
    
  }
  std :: cout <<"Code of more Tall: " <<codeOfTall << ": " << Tall <<std :: endl;
  std :: cout <<"Code of more Small: " <<codeOfSmall << ": " << small <<std :: endl;
  std :: cout <<"Code of more Fat: " <<codeOfmoreFat << ": " << MoreFat <<std :: endl;
  std :: cout <<"Code of more Lean: " << codeOfmoreLean <<": " << moreLean << std ::endl;

}