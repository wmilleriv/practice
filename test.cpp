#include <iostream>

void doNothing(int&){
}

int main(){
	int x;
	
	doNothing(x);
	std::cout << x <<'\n';
	
	std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

	
	return 0;
}
