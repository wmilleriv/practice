#include <iostream>

int main(){
	int x{0};
	int y{x};
	if((++x)>y){
		std::cout << "True\n";
	}
	else{
		std::cout << "False\n";
	}
	return 0;
}
