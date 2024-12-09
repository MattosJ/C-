#include <iostream>
#include <cmath>

float imcCalculator(float weight, float height){
  float imc = weight/pow(height,2);
  return imc;
}
float iacCalculator(float Hc, float Hm){
  float iac = (Hc/pow(Hm,1.5)) - 18;
  return iac;
}
void display(float number){

  if(number  < 16.9){
    std :: cout << "Very underweight" << std :: endl;
  }
  else if(number >= 17 && number <= 18.4){
    std :: cout << "under weight" << std :: endl;
  }
  else if(number >= 18.5 && number <= 24.9){
    std :: cout << "normal weight" << std :: endl;
  }
  else if(number >= 25.0 && number <= 29.9){
    std :: cout <<"Overweight" << std :: endl;
  }
  else if(number >= 30.0 && number <= 34.9){
    std :: cout <<"obesity 1" << std :: endl;
  }
  else if(number >= 35.0 && number <= 40.0){
    std :: cout <<"obesity 2" << std :: endl;
  }
  else{
    std :: cout <<"obesity 3" << std :: endl;
  }
}

int main(){
  float weight;
  std :: cout <<"Enter your Weight in (Kg): " << std :: endl;
  std :: cin >> weight;
  float height;
  std :: cout <<"Enter your height in (m): "<< std :: endl;
  std :: cin >> height;
  float Hc;
  std :: cout <<"Enter you hip circumference in (cm): " << std :: endl;
  std :: cin >> Hc;


  display(imcCalculator(weight,height));
  std :: cout <<"You body adiposity index: "  << iacCalculator(Hc,height) <<"%"<< std :: endl;

  return 0;
}