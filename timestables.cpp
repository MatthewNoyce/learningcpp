#include <iostream>
#include <vector>

// Define first_three_multiples() here:

std::vector<int> times_tables(int num){
    std::vector<int> tt;
    for (int i =1; i<13; i++){
        tt.push_back(num*i);
    }
    return tt;
}

int main() {
  
  for (int element : times_tables(8)) {
    std::cout << element << "\n";
  }
  
}