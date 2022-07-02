#include <iostream>

int main() {
  int y = 0;
  std::cout << "Enter year: ";
  std::cin >> y;

  if (y < 1000 || y > 9999) {
    std::cout << "Invald\n";
  }
  // year divisible by 4 AND year divisible by 100 is NOT 
  // OR year divisible by 400
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    std::cout << y << " is a leap year\n";
  } else {
    std::cout << y << " is not a leap year\n";
  }
  
}