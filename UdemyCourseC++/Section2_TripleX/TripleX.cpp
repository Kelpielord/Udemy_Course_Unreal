#include <iostream>

void PrintIntro(int Difficulty) 
{
    //Print welcome message to the terminal
    std::cout << "\n\nA dryad has been waylaid by playful faeries and it has to find it's way out of the level " << Difficulty << " forest, but the faeries put up magical barriers!\n";
    std::cout << "You need to enter the correct numbers to break the magical barrier and move forward...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntro(Difficulty);
    const int CodeNumA = 2;
    const int CodeNumB = 3;
    const int CodeNumC = 4;

    const int CodeSum = CodeNumA + CodeNumB + CodeNumC;
    const int CodeProduct = CodeNumA * CodeNumB * CodeNumC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers on the barrier\n";
    std::cout << "\n+ The numbers add up to: " << CodeSum;
    std::cout << "\n+ The numbers multiply to give: " << CodeProduct << std::endl;

    //Store player guess
    int GuessOne, GuessTwo, GuessThree;
    std::cin >> GuessOne >> GuessTwo >> GuessThree;

    int GuessSum = GuessOne + GuessTwo + GuessThree;
    int GuessProduct = GuessOne * GuessTwo * GuessThree;

    //Check if player input is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "You managed to destroy the barrier!";
        return true;
    }
    else 
    {
        std::cout << "You didn't destroy the barrier...";
        return false;
    }
}

int main() 
{
    int LevelDifficulty = 1;
    const int maxDifficulty = 5;
    while (LevelDifficulty <= maxDifficulty)
    {
        bool BLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (BLevelComplete)
        {
            LevelDifficulty++;
        }
        
    }
    
    return 0;
}