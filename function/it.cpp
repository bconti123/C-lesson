#include <iostream>

std::string it_convo() {

    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";

    std::string reply;
    std::cin >> reply;
    return reply;    
}


int main() {
  
  // Conduct IT support
  std::string on_off_attempt;
   on_off_attempt = it_convo();
  
  // Check in with Jenn
  std::cout << "Oh hi Jen!\n";
  
  // Conduct IT support again...
    on_off_attempt = it_convo();

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";
  
  // Conduct IT support yet again...zzzz...
    on_off_attempt = it_convo();
  
}