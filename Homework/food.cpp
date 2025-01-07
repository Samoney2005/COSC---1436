// Samone Cook
#include <iostream>
#include "geometry.h"

int main() {
    int numApples, numPizzas, numDonuts, numIceCreamCones;

    // Getting input from the user
    std::cout << "How many apples will you eat? ";
    std::cin >> numApples;

    std::cout << "How many pizzas will you eat? ";
    std::cin >> numPizzas;

    std::cout << "How many donuts will you eat? ";
    std::cin >> numDonuts;

    std::cout << "How many ice cream cones will you eat? ";
    std::cin >> numIceCreamCones;

    // Calculating the total volume of food
    double totalVolume = numApples * VolSphere(3.0) +
                         numPizzas * VolCylinder(0.5, 12.0) +
                         numDonuts * VolDonut(1.5, 0.5) +
                         numIceCreamCones * VolCone(5.0, 2.0);

    // Displaying the result
    std::cout << "The total volume of food you will eat is: " << totalVolume << " cubic inches." << std::endl;

    return 0;
}
