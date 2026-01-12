#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>

bool isPrime(int n){
    if(n<3)
        return true;
    if(n%2==0)
        return false;
    for(int i{3}; i<std::pow(n,(0.5))+1;i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

std::vector<int> primes(){
	std::vector<int> p{};
	std::ifstream file("primes.txt");
	std::cout << file <<'\n';
	return p;


int main(){

//TODO: get known prime list from text fileand rewrite it with extended list
//
	for(int i{17};i<999999999999999;i+=2){
    		if(isPrime(i))
        		std::cout << i << " is prime.\n";
	}

    return 0;
}
