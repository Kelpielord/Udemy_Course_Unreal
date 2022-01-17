#include <iostream>

int main() 
{
    //Print welcome message to the terminal
    std::cout << "A dryad has been waylaid by playful faeries and it has to find it's way out of the forest, but the faeries put up magical barriers!";
    std::cout << std::endl;
    std::cout << "You need to enter the correct numbers to break the magical barrier and move forward..." << std::endl;

    const int CodeNumA = 2;
    const int CodeNumB = 3;
    const int CodeNumC = 4;

    const int CodeSum = CodeNumA + CodeNumB + CodeNumC;
    const int CodeProduct = CodeNumA * CodeNumB * CodeNumC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers on the barrier" << std::endl;
    std::cout << "+ The numbers add up to: " << CodeSum << std::endl;
    std::cout << "+ The numbers multiply to give: " << CodeProduct << std::endl;

    int n;
    int GuessOne, GuessTwo, GuessThree;

    std::cin >> GuessOne;
    std::cin >> GuessTwo;
    std::cin >> GuessThree;
    
    int GuessSum = GuessOne + GuessTwo + GuessThree;
    int GuessProduct = GuessOne * GuessTwo * GuessThree;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "You win!";
    }
    else 
    {
        std::cout << "You lose!";
    }

    return 0;
}