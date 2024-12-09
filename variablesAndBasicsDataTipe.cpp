# include <iostream>

int main(){
  /*
  int x ; // declaration
  x = 5; // assigment
  */
  // Simplifying things we can write
  int x = 5;
  int y = 6;
  int sum = x + y;

  std :: cout << x << std :: endl;
  std :: cout << y << std :: endl;
  std :: cout << sum << std :: endl;

  

  //integer (whole number)
  int age = 21;
  int year = 2024;
  int days = 7.5;

  std :: cout << age << std :: endl;
  std :: cout << year << std :: endl;
  std :: cout << days << std :: endl;

  // Note that "days" in line 22 when printed does not give an error, but only shows the entire value of the number ignoring its decimal part


  // double (number including decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;
  
  std :: cout << price << std :: endl;
  std :: cout << gpa << std :: endl;
  std :: cout << temperature << std :: endl;

  // single character
  char grade = 'A';
  char initial = 'B';
  char dollarSign = '$';
  std :: cout << grade << std :: endl;
  std :: cout << initial << std :: endl;
  std :: cout << dollarSign << std :: endl;

  // If I use two letters in a char variable it will give an error.

  // boolean ( true or false)
  bool student = true;
  bool power = false;
  bool forSale = true;

  // string (objects that represents a sequence of text)
  std :: string name = "James";
  std :: string day = "Friday";
  std :: string food = "Pizza";
  std :: string address = "123 fake st.";

  std :: cout << name << std :: endl;
  std :: cout << day << std :: endl;
  std :: cout << food << std :: endl;
  std :: cout << address << std :: endl;
  std :: cout << "Hello " << name << std :: endl;
  std :: cout << "You are: " << age << " years old" << std :: endl;

  return 0;
}