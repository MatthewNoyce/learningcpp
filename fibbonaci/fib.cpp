#include <iostream>

//Calculates the first N fibbonaci numbers using iteration
void fib(int iter, int start1=0, int start2=1){
    if (iter == 0){
        std::cout << start1 << std::endl;
    }
    else{
        std::cout << start1 << ", ";
        unsigned long long int newnum = start1 + start2;
        start1 = start2;
        start2 = newnum;
        fib(iter-1, start1, start2);
    }
}