//This is from codecademy for if/else statements

#include <iostream>

int main(){
    double weight;
    int planet;
    double planetweight;
    std::cout << "What do you weigh on Earth?\n";
    std::cin >> weight;
    std::cout << "What planet would you like to find out your weight on?\n";
    std::cout << "1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neputne\n";
    std::cin >> planet;
    switch (planet)
    {
    case 1:
        planetweight = weight * 0.38;
        break;
    case 2:
        planetweight = weight * 0.91;
        break;
    case 3:
        planetweight = weight * 0.38;
        break;
    case 4:
        planetweight = weight * 2.34;
        break;
    case 5:
        planetweight = weight * 1.06;
        break;
    case 6:
        planetweight = weight * 0.92;
        break;
    case 7:
        planetweight = weight * 1.19;
        break;
    
    default:
        planetweight = weight;
        break;
    }
    std::cout << "Your weight on this planet is: " << planetweight << "\n";
}