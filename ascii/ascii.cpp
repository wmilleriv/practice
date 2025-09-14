#include <iostream>

int main(){
    std::cout << "Enter a number: ";
    char ch{};
    std::cin >> ch;

    std::cout << static_cast<int>(ch);

    
        
    return 0;
}
