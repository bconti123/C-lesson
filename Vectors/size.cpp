#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Apple");
  grocery.push_back("Banana");

  std::cout << grocery.size() << "\n";
  
  
  
  
}