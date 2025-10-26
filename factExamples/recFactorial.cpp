#include <iostream>

int getUserInput(){
	int k{-1};

	std::cout << "Enter a positive integer: ";
	std::cin >> k;
	return k;
}

int getFactorial(int k){
	if(k==1)
		return 1;
	return k*=getFactorial(k-1);
}

int main(){

	int in{getUserInput()};
	std::cout << "The Factorial of " << in << " is  " << getFactorial(in) << '\n';

	return 0;
}
