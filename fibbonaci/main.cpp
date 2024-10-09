#include "fib.hpp"

//This could have all been done within one program but I wanted to practice using headers 
//its also cool to do recursion


int main(){
    /*
    fib(int iter, int start1=0, int start2=0)
    prints out iter many fibbonaci numbers starting with start1 and start2 
    */
    fib(20);
    fib(20, 2, 3);
    //500 doesnt work with int
    //going to try long
    //long long int doesnt seem to work either 
    //same for unsigned long long int
    //unsigned long long int should work up to 8bytes and this is not going that high.
    //something might be faulty with the logic but it seems to get the first lot okay 
    fib(300);
}