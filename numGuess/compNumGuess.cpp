#include <iostream>
#include <random>
#include <chrono>
int main(){std::mt19937 mt(std::chrono::system_clock::now().time_since_epoch().count());std::uniform_int_distribution<int> dist{0,1000};int num{dist(mt)};int guess{};std::cout << "Enter an Integer between 0 and 1000: \n";std::cin >> guess;while(guess!=num){if(guess>num){std::cout << "Too high. Guess again: \n";}if(guess<num){std::cout << "Too Low. Guess again: \n";}std::cin >> guess;}std::cout << "Congratulations! You win!\n";return 0;}

