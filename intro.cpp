//THis isnt working, it is supposed to take users input of a name and output the name in a james bond style
// for some reason I cannot get the string to split where I can use both first name and last name 
// easy fix would be to just take first and last name seperately 

#include <iostream>
#include <sstream>
#include <vector>
#include <string>


void introduction(std::string first_name, std::string last_name){
    std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}

int main(){
    std::string first_name;
    std::string last_name;
    std::string name;
    std::cout << "Enter your full name\n";
    std::cin >> name;
    
    std::string str;
    std::stringstream ss(name); 

    // Use while loop to check the getline() function condition.  
    while (getline(ss, str, ' ')) 
        // `str` is used to store the token string while ' ' whitespace is used as the delimiter.
        std::cout << str << std::endl;
    // for (auto i : v) std::cout << i << std::endl;
    // introduction(v[0], v[1]);

}