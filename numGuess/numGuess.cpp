#include <iostream>
#include <random>
#include <chrono>

int main(){
	std::mt19937 mt(std::chrono::system_clock::now().time_since_epoch().count());

	std::uniform_int_distribution<int> dist{0,1000};
	int num{dist(mt)};

	std::cout << num;

	return 0;
}

