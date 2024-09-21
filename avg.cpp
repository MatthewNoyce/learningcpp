#include <iostream>

double average(double num1, double num2){
    double total;
    total = (num1+num2)/2;
    return total;
}

int main(){
    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";
}