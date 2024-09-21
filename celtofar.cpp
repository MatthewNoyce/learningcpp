#include <iostream>

int main(){
    double tempf = 0;
    double tempc = 0;
    std::cout << "Enter a temperature in farenheight:\n";
    std::cin >> tempf;
    tempc = (tempf - 32)/1.8;
    std::cout << "The temperature in celcius is: " << tempc << "\n";
    return 0;
}