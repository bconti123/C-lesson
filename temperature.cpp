#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  //Ask the user
  std::cout << "Enter the Temperature in Fahrenheit: ";
  std::cin >> tempf;

  tempc = (tempf - 32) / 1.8;

  std::cout << "The temp is " << tempc << " degree Celsius.\n";

   
}