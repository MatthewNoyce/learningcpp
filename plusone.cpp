/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/
#include <vector>
#include <iostream>

void plus_one(std::vector<int> digits){
    int temp = digits.size();
    std::cout << digits[temp];
    digits[temp] +=1;
    for (int i=0; i<=digits.size(); i++){
        std::cout << digits[i];
    }
}

//No idea how this has happened but its made an absolute meal of it 
int main(){
    std::vector v1({4,3,2,1});
    plus_one(v1);
}

