// Samone Cook
// Homework #3

#include <iostream>
using namespace std;

int main()
{
    // Program 1: Logical operations and comparisons
    short int A = 5, B = -8, C = 18, D = 0;

    cout << "1. (A > B): " << ((A > B) ? "true" : "false") << endl; // Check if A is greater than B
    cout << "2. (B <= 0): " << ((B <= 0) ? "true" : "false") << endl; // Check if B is less than or equal to 0
    cout << "3. (D != 0): " << ((D != 0) ? "true" : "false") << endl; // Check if D is not equal to 0
    cout << "4. (C = 17): " << (((C = 17), true) ? "true" : "false") << endl; // Assignment operation
    cout << "5. (A > B && C > D): " << ((A > B && C > D) ? "true" : "false") << endl; // Check if both conditions are true
    cout << "6. (C != (B + 28)): " << ((C != (B + 28)) ? "true" : "false") << endl; // Check if C is not equal to B+28
    cout << "7. (D >= C || A == B): " << ((D >= C || A == B) ? "true" : "false") << endl; // Check if either condition is true
    cout << "8. ((C + 1) == (D + 19)): " << (((C + 1) == (D + 19)) ? "true" : "false") << endl; // Compare C+1 and D+19
    cout << "9. (B == 0 || C == 0 || D == 0): " << ((B == 0 || C == 0 || D == 0) ? "true" : "false") << endl; // Check if any of B, C, or D is 0
    cout << "10. (A == 0 && (B > 1 || C > 1)): " << ((A == 0 && (B > 1 || C > 1)) ? "true" : "false") << endl; // Check if A is 0 and one of B or C is greater than 1
    cout << "11. (!(A = 5) || !(C = 8)): " << ((!((A = 5)) || !((C = 8))) ? "true" : "false") << endl; // Assignment operation with logical negation
    cout << "12. (A > (B + C) && A < (D + B)): " << ((A > (B + C) && A < (D + B)) ? "true" : "false") << endl; // Check both conditions

    // Program 2: User input and donut count
    int numDonuts;

    // Ask the user for the number of donuts they plan to eat
    cout << "Enter how many donuts you are going to eat: "; // Request user input
    cin >> numDonuts;

    // Calculate the number of dozens and remaining donuts
    int dozen = numDonuts / 12; // Find how many full dozens of donuts
    int single = numDonuts % 12; // Find the leftover single donuts

    // Output the total number of dozens and leftover donuts
    cout << "This is " << dozen << " dozen plus " << single << " donuts." << endl; // Display result of the calculation

    // Output a message based on the number of donuts
    if (numDonuts == 0) {
        cout << "Taking a break from sweets?" << endl; // Comment for no donuts
    } else if (numDonuts >= 1 && numDonuts <= 2) {
        cout << "Not too many, huh?" << endl; // Comment for 1-2 donuts
    } else if (numDonuts >= 3 && numDonuts <= 6) {
        cout << "A little snack to start with?" << endl; // Comment for 3-6 donuts
    } else if (numDonuts >= 7 && numDonuts <= 9) {
        cout << "Is there a donut party happening?" << endl; // Comment for 7-9 donuts
    } else if (numDonuts >= 10 && numDonuts <= 12) {
        cout << "Donut enthusiast alert!" << endl; // Comment for 10-12 donuts
    } else {
        cout << "You must really love donuts!" << endl; // Comment for more than 12 donuts
    }

    return 0;
}
