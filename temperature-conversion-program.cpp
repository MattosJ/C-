#include <iostream>

int main(){
  char thermometricScale ; double temp; char thermometricScaleWant;
  std :: cout << "Whats is tha temperature: ";
  std :: cin >> temp;

  std :: cout <<" C for Celsius" << std :: endl;
  std :: cout << "F for Fahrenheit" << std :: endl;
  std :: cout <<"K for Kelvin" << std :: endl;
  std :: cout <<"*************************************" << std :: endl;
  std :: cout <<"Enter thermometric Scale you are: ";
  std :: cin >> thermometricScale;

  std :: cout <<" C for Celsius" << std :: endl;
  std :: cout << "F for Fahrenheit" << std :: endl;
  std :: cout <<"K for Kelvin" << std :: endl;
  std :: cout <<"*************************************" << std :: endl;
  std :: cout <<"Enter thermometrica scale you want: ";
  std :: cin >> thermometricScaleWant;

  if(thermometricScale == 'C' && thermometricScaleWant == 'F'){
    std :: cout << (temp * 1.8) + 32 << std :: endl;
  }
  else if(thermometricScale == 'C' && thermometricScaleWant == 'K'){
    std :: cout <<(temp + 273.15) << std :: endl;
  }
  else if (thermometricScale == 'F' && thermometricScaleWant == 'C'){
    std :: cout << (temp -32) / 1.8 << std :: endl;
  }
  else if (thermometricScale == 'F' && thermometricScaleWant == 'K'){
    std :: cout << (temp - 32) * (5/(double) 9) + 273.15  << std :: endl;
  }
   else if (thermometricScale == 'K' && thermometricScaleWant == 'C'){
    std :: cout << temp -273.15 << std :: endl;
  }
  else if (thermometricScale == 'K' && thermometricScaleWant == 'F'){
    std :: cout << (temp * 1.8) - 459.67 << std :: endl;
  }



  return 0;
}