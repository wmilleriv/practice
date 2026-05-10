#include <iostream>

bool comp(int x, int y){
	return x==y;
} 

bool lessThan(int x, int y){
	
	if(comp(y,0))
		return false;
	if(comp(x,0))
		return true;
	return(lessThan(x-1,y-1));
}

int add(int x, int y){
	return x+y;
}

int sub(int x, int y){
	return x+-y;
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
		return z+1;
	else
		return(divide(sub(x,y),y,z+1));


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

int menu(){
	int operation{0};
	std::cout << "Choose an operation\n";
	std::cout <<"--------------------------\n";
	std::cout <<"1) Addition\n";
	std::cout <<"2) Subtraction\n";
	std::cout <<"3) Multiplication\n";
	std::cout <<"4) Division\n";
	std::cout <<"5) Exponentiation\n";
	std::cout <<"--------------------------\n";
	std::cin >> 
	return 0;

}


int main(){
	std::cout << add(100,5) << '\n';
	std::cout << sub(100,5) << '\n';
	std::cout << mult(100,5) << '\n';
	std::cout << divide(100,7) << '\n';
	std::cout << pow(3,4) <<'\n';
	return 0;
}
