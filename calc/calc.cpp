#include <iostream>

bool comp(int x, int y){
	return x==y;
} 

int add(int x, int y){
	return x+y;
}

int sub(int x, int y){
	return add(x,-y);
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

int exponentiate(int x, int y, int z=0){
	if(comp(y,0))
		return 1;
	if(comp(z,0))
		z=x;
	if(comp(y,1))
		return x;
	else
		return exponentiate(mult(x,z),sub(y,1), z);
}

void printResult(int left,int right,int op){
		char opChar{};
		int result{};
	switch(op){
		case 1:
			opChar='+';
			result=add(left,right);
			break;
		case 2:
			opChar='-';
			result=sub(left,right);
			break;
		case 3:
			opChar='*';
			result=mult(left,right);
			break;
		case 4:
			opChar='/';
			result=divide(left,right);
			break;
		case 5:
			opChar='^';
			result=exponentiate(left,right);
			break;
	}		
	std::cout << left << opChar << right << '=' << result <<"\n\n";
	
}  

int menu(){
	
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
	if(operation==6)
		return 0;
	if(operation<1||operation>6){
		std::cout << "Invalid Operation selected\n";
		return menu();
	}
	std::cout << "Enter first operand: ";
	std::cin  >> leftOperand;
	std::cout << "Enter second operand: ";
	std::cin >> rightOperand;
	
	printResult(leftOperand,rightOperand,operation);
	
	return menu();
}


int main(){
	
	int run{menu()};
	
	return run;
}
