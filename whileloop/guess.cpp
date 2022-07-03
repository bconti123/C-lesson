#include <iostream>

int main() {

  int guess;
  
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:
  while (guess != 8 && tries < 5) {
    std::cout << "You got " << 5 - tries << " tries left.\n";
    std::cout << "Wrong guess, try again: ";
    
    std::cin >> guess;

    tries++;
  }
  if (guess == 8) {
    std::cout << "Correct guess!!! You win\n";
  }
  else if (tries == 5) {
    std::cout << "You lose.";
  }

}