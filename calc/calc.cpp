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
		return(mult(x+z,y-1,z));
}

int divide(int x, int y, int z=0){	
	if(lessThan(x,y))
		return z;
	if(comp(x,0))
		return z+1;
	else
		return(divide(x-y,y,z+1));


}



int menu(){
	std::cout << "";
	return 0;

}


int main(){
	std::cout << add(100,5) << '\n';
	std::cout << sub(100,5) << '\n';
	std::cout << mult(100,5) << '\n';
	std::cout << divide(100,7) << '\n';
	return 0;
}
