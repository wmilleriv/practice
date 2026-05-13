#include <iostream>

bool comp(int x, int y){
	return x==y;
} 

int add(int x, int y){
	return x+y;
}

int sub(int x, int y){
	return x+-y;
}

bool lessThan(int x, int y){
	
	if(comp(y,0))
		return false;
	if(comp(x,0))
		return true;
	return(lessThan(sub(x,1),sub(y,1)));
}
int mult(int x, int y, int z=0){
	if(comp(z,0))
		z=x;
	if(comp(y,1))
		return x;
	else
		return(mult(x+z,sub(y,1),z));
}

int divide(int x, int y, int z=0){	
	if(lessThan(x,y))
		return z;
	if(comp(x,0))
		return add(z,1);
	else
		return(divide(sub(x,y),y,add(z,1)));


}

int pow(int x, int y, int z=0){
	if(comp(y,0))
		return 1;
	if(comp(z,0))
		z=x;
	if(comp(y,1))
		return x;
	else
		return pow(mult(x,z),sub(y,1), z);
}

int getOperand(){
	int op{};
	std::cout << "Enter and operand: ";
	std::cin >> op;
	return op;
}

void menu(){
	int leftOperand{};
	int rightOperand{};
	int operation{0};
	std::cout << "Choose an operation\n";
	std::cout <<"--------------------------\n";
	std::cout <<"1) Addition\n";
	std::cout <<"2) Subtraction\n";
	std::cout <<"3) Multiplication\n";
	std::cout <<"4) Division\n";
	std::cout <<"5) Exponentiation\n";
	std::cout <<"6) Quit\n";
	std::cout <<"--------------------------\n";

	std::cin >> operation; 

	switch(operation){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			std::exit(0);
		default:
			std::cout << "Invalid Choice, Please select again\n";
			break;
	}
	
	menu();

}


int main(){
	menu();
	return 0;
}
