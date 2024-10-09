#include "fib.hpp"

//This could have all been done within one program but I wanted to practice using headers 
//its also cool to do recursion


int main(){
    /*
    fib(int iter, unsigned long long int start1=0, unsigned long long int start2=0)
    prints out iter many fibbonaci numbers starting with start1 and start2 
    */
    fib(20);
    fib(20, 2, 3);
    
    fib(500);
}