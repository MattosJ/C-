#include <iostream>
// abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute Readable
// setter = function that makes a private attribute Writeable

class Stove{
  private:
    int temperature = 0;
  public:
  Stove(int temperature){
    setTemperature(temperature);
  }
  int getTemperature(){
    return temperature;
  }
  void setTemperature(int temperature){
    if(temperature < 0){
      this -> temperature = 0;
    }
    else if(temperature >= 10){
      this -> temperature = 10;
    }
    else{
      this -> temperature = temperature;
    }
    
  }
};

int main(){

  Stove stove(1);

  std :: cout << "The temperature setting is: "<< stove.getTemperature() << std :: endl;
  return 0;
}