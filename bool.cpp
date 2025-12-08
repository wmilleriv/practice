#include <iostream>

int main(){
	int x{5};
	if(!(x<9)){
		std::cout << "True\n";
	}
	else{
		std::cout << "False\n";
	}
	return 0;
}
