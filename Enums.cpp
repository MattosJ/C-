#include <iostream>
// enums = a user-defined data type that consists of paired named-integer constants.
// Great if you have a set of potential options.

enum Day{sunday = 0,monday = 1,tuesday = 2,wednesday = 3,thursday = 4,friday = 5,saturday = 6};

int main(){
  Day today = monday ;

  switch (today){
  case sunday:
    std :: cout << "It is sunday!" << std :: endl;
    break;
  case monday:
    std :: cout << "It is monday!" << std :: endl;
    break;
  case tuesday:
    std :: cout << "It is tuesday!" << std :: endl;
    break;      
  case wednesday:
    std :: cout << "It is wednesday!" << std :: endl;
    break;
  case thursday:
    std :: cout << "It is thursday!" << std :: endl;
    break;
  case friday:
    std :: cout << "It is friday!" << std :: endl;
    break;
  case saturday:
    std :: cout << "It is saturday!" << std :: endl;
    break;                
  default:
    std :: cout << "It not is day of the week" << std :: endl;
    break;
  }




  return 0;
}