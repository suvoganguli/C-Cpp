#include "main.h"


int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    //get the numbers from the user
    for(int i = 0; i < 3; i++)
    {
        std::cout << "Enter a number: ";
        scanf("%d", &userInput);
        std::cout << userInput << "\n";

        if(userInput > maxNumber)
        {//the biggest number entered so far is the max number
            maxNumber = userInput;
        }
        if(userInput < minNumber)
        {//the lowest number entered so far is the min number
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    //std::cout << sumTotal << "\n";
    average = float(sumTotal) / 3;
    std::cout << "Average = " << average << "\n";
    //std::cout << 1.325;
    return 0;
}
