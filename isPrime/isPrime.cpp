#include <iostream>

bool isPrime(int n){
    if(n<3)
        return true;
    for(int i{2}; i<((n^(1/2))+1);i+=2){
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
