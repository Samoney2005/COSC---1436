// Samone Cook
#include <iostream>
#include <time.h>
using namespace std;

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));  // Seed the random number generator

    int Num1, Num2, Num3, Num4, Num5, Num6;

    // Generate unique random numbers for Num1 to Num6
    Num1 = rand() % 50 + 1;
    Num2 = rand() % 50 + 1;
    while (Num2 == Num1)  // Avoid duplicate
        Num2 = rand() % 50 + 1;

    Num3 = rand() % 50 + 1;
    while (Num3 == Num1 || Num3 == Num2)  // Avoid duplicate
        Num3 = rand() % 50 + 1;

    Num4 = rand() % 50 + 1;
    while (Num4 == Num1 || Num4 == Num2 || Num4 == Num3)  // Avoid duplicate
        Num4 = rand() % 50 + 1;

    Num5 = rand() % 50 + 1;
    while (Num5 == Num1 || Num5 == Num2 || Num5 == Num3 || Num5 == Num4)  // Avoid duplicate
        Num5 = rand() % 50 + 1;

    Num6 = rand() % 50 + 1;
    while (Num6 == Num1 || Num6 == Num2 || Num6 == Num3 || Num6 == Num4 || Num6 == Num5)  // Avoid duplicate
        Num6 = rand() % 50 + 1;

    // Print the Lotto quick pick
    cout << "Your lotto quick pick is " << Num1 << "," << Num2 << "," << Num3 << "," << Num4 << "," << Num5 << "," << Num6 << endl;

    // Random statement
    int R = rand() % 5 + 1;
    if (R == 1)
        cout << "Fortune favors the bold!\n";
    if (R == 2)
        cout << "Why don't we ever win? Because it's all random!\n";
    if (R == 3)
        cout << "You miss 100% of the shots you don't take!\n";
    if (R == 4)
        cout << "Keep dreaming, you could be the next big winner!\n";
    if (R == 5)
        cout << "Good luck, the numbers are in your favor today!\n";

    return 0;
}

