#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num){
    int tp;
    tp = pow(num, 10);
    return tp;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}