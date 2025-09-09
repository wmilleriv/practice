#include <iostream>
#include <cmath>

bool isPrime(int n){
    if(n<3)
        return true;
    if(n%2==0)
        return false;
    for(int i{3}; i<std::pow(n,0.5)+1;i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){

    int in{0};
    std::cout << "Enter an integer: ";
    std::cin >> in;

    if(isPrime(in))
        std::cout << in << " is prime.\n";
    else
        std::cout << in << " is not prime. \n";

    return 0;
}
