#include <iostream>

int main()
{
	int input{};
	std::cout << "Enter an integer: ";
	std::cin >> input;
	
	std::cout << input << " doubled is " << 2*input <<'\n';
	std::cout << input << " tripled is " << 3*input << '\n';
	 
	return 0;
}
