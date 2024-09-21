#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
    std::string possible_palindrome;
    for (int i =text.length(); i>= 0; i--){
        possible_palindrome = possible_palindrome + text[i] ;
    }
    // std::cout <<text.length()<<std::endl;
    // std::cout<<possible_palindrome.erase(0,1).length()<<std::endl;
    // for (int i =0;i<=possible_palindrome.length();i++){
    //     std::cout << possible_palindrome[i]<<std::endl;
    // }
    if (text != possible_palindrome.erase(0,1)){
        return false;
    }else{
        return true;
    }
    
}


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}