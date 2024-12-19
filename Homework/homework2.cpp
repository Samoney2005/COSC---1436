// Samone Cook
// Homework #2
// This program performs three tasks:
// 1. Prints ASCII art of an elephant.
// 2. Calculates the sum and product of three numbers provided by the user.
// 3. Calculates the area of a circle, volume of a sphere, and surface area of a sphere given a radius input by the user.
#include <iostream>
using namespace std;

int main()
{
    // Program 1
    cout << "Program 1 - ASCII elephant\n";
    cout << "           /  \\~~~/  \\    \n";
    cout << "     ,----(     ..    )    \n";
    cout << "    /      \\__     __/      \n";
    cout << "   /|         (\\  |( \n";
    cout << "  ^ \\   /___\\  /\\ |   hjw  \n";
    cout << "     |__|   |__|-\"    `97  \n\n";
    // Program 2
    cout << "Program 2\n";
    float N1, N2, N3;
    cout << "This program calculates the sum and product of three numbers.\n";
    cout << "Enter the first number: ";
    cin >> N1;
    cout << "Enter the second number: ";
    cin >> N2;
    cout << "Enter the third number: ";
    cin >> N3;
    cout << "The sum is " << N1 + N2 + N3 << endl << endl;
    // Program 3
    const float Pi = 3.1416;
    cout << "Program 3\n";
    cout << "This calculates the area of a circle, volume of a sphere, and surface area of a sphere.\n";
    cout << "Enter a radius: ";
    float Radius;
    cin >> Radius;
    float CircleArea = Pi * Radius * Radius;
    float SphereVolume = (4.0 / 3.0) * Pi * Radius * Radius * Radius;
    float SphereSurfaceArea = 4 * Pi * Radius * Radius;
    cout << "Area of a circle is " << CircleArea << " square inches\n";
    cout << "Volume of a sphere is " << SphereVolume << " cubic inches\n";
    cout << "Surface area of a sphere is " << SphereSurfaceArea << " square inches\n";


    return 0;
}
