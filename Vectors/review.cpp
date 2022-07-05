#include <iostream>
#include <vector>

int main() {

    int total_even = 0;
    int total_odds = 1;

    std::vector<int> number = {2, 4, 3, 6, 1, 9};
    number.push_back(3);
    number.push_back(2);
    number.push_back(5);
    for (int i = 0; i < number.size(); i++){

        if (number[i] % 2 == 0){
            total_even = total_even + number[i];
        }
        else {
            // example: 3 * 1 then 3 * 5 then 15 *...
            total_odds = total_odds * number[i];
        }
    }

    std::cout << "Sum of even numbers is " << total_even << ".\n";
    std::cout << "Product of odd numbers is " << total_odds << ".\n";
}