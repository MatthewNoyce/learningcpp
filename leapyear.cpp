//simple leap year checker script

#include <iostream>

int main(){
    int year;
    std::cout << "Enter the year you would like to check for a leap year\n";
    std::cin >> year;
    if (year % 4 == 0){
        if (year % 400 ==0){
            std::cout << year << " is a leap year\n";
        }
        else if (year % 100 == 0){
            std::cout << year << " is not a leap year\n";
        }
    }
    else{
        std::cout << year << " is not a leap year\n";
    }
    
}