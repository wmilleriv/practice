#include <iostream>
#include <string>

int getInteger(){
	int k{};
	std::cout << "Enter an Integer: ";
	std::cin >> k;
	return k;
}

std::string getString(){
	std::string str{};
	std::cout << "Enter a string: ";
	std::cin >> str;
	return str;
}

int main(){

	int testInput{getInteger()};
	return 0;
}
