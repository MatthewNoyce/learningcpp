//program to find the sum of even and odd numbers in a vector 

#include <iostream>
#include <vector>

int main(){
    int total_even = 0;
    int total_odd = 0;
    std::vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for (int i =0; i<nums.size(); i++){
        if (nums[i] % 2 == 0){
            total_even += nums[i];
        }
        else{
            total_odd += nums[i];
        }
    }
    std::cout << "Sum of even numbers is: " << total_even << "\n";
    std::cout << "Sum of odd numbers is: " << total_odd << "\n";
}