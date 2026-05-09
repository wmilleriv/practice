#include <iostream>
int comp(x,y){
	return x==y;
} 

int add(int x, int y){
	return x+y;
}

int sub(int x, int y){
	return x+-y;
}

int mult(int x, int y, int z=0){
	if(comp(z,0)
		z=x;
	if(comp(y,1))
		return x;
	else
		return(mult(x+z,y-1),z);
}

int div(int x, int y, int z=0){
	if(comp(x,0)
			return ;
}



int menu(){
	std::cout << "";
	return 0;

}


int main(){
	std::cout << add(100,5) << '\n';
	std::cout << sub(100,5) << '\n';
	std::cout << mult(100,5) << '\n';
	return 0;
}
