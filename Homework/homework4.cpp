// Samone Cook
// Homework #4

#include <iostream>
#include <iomanip> // Include this header for set precision.

using namespace std;

// Program 1: Conversion Menu and Patterns
// Function to print the menu
void printMenu() {
    cout << "1 = Convert Fahrenheit to Celsius" << endl;
    cout << "2 = Convert Miles to Kilometers" << endl;
    cout << "3 = Convert Pounds to Kilograms" << endl;
    cout << "4 = Calculate value of coins" << endl;
    cout << "5 = Print for loop patterns" << endl;
    cout << "6 = Exit" << endl;
}

int main() {
    int choice; // User's menu choice

    // Infinite loop until the user chooses to exit
    while (true) {
        // Display the menu
        printMenu();

        // Get the user's choice
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        // Variables for calculations
        double fahrenheit, celsius, miles, kilometers, pounds, kilograms;
        int quarters, dimes, nickels, pennies;

        // Handle the user's choice
        if (choice == 1) {
            // Fahrenheit to Celsius
            cout << "\nEnter the temperature in Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            cout << "This is " << celsius << " Celsius" << endl;

        } else if (choice == 2) {
            // Miles to Kilometers
            cout << "\nEnter the number of Miles: ";
            cin >> miles;
            kilometers = miles * 1.60934;
            cout << "This is " << kilometers << " Kilometers" << endl;

        } else if (choice == 3) {
            // Pounds to Kilograms
            cout << "\nEnter the number of Pounds: ";
            cin >> pounds;
            kilograms = pounds * 0.453592;
            cout << "This is " << kilograms << " Kilograms" << endl;

        } else if (choice == 4) {
            // Calculate the value of coins
            cout << "\nEnter the number of Quarters: ";
            cin >> quarters;
            cout << "Enter the number of Dimes: ";
            cin >> dimes;
            cout << "Enter the number of Nickels: ";
            cin >> nickels;
            cout << "Enter the number of Pennies: ";
            cin >> pennies;

            double total = quarters * 0.25 + dimes * 0.10 + nickels * 0.05 + pennies * 0.01;
            cout << fixed << setprecision(2); // Format output to 2 decimal places
            cout << "The total value is $" << total << endl;

            // Additional feedback based on total value
            if (total < 0.5) {
                cout << "You need to search for some pennies.\n";
            } else if (total >= 0.5 && total < 2) {
                cout << "You can barely buy a soda.\n";
            } else if (total >= 2 && total < 5) {
                cout << "You can eat at McDonald's!\n";
            } else if (total >= 5) {
                cout << "All these coins must be heavy.\n";
            }

        } else if (choice == 5) {
            // Print for loop patterns
            cout << "\nPattern 1:" << endl;
            for (int i = 1; i <= 5; ++i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }

            cout << "\nPattern 2:" << endl;
            for (int i = 5; i >= 1; --i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }

        } else if (choice == 6) {
            // Exit Program 1 and move to Program 2
            cout << "Exiting Program 1...\n";
            break;  // Exit the while loop and start Program 2

        } else {
            // Invalid choice
            cout << "Invalid choice, please try again." << endl;
        }

        // Add a blank line for readability
        cout << endl;
    }

    // Program 2: Coin Value Calculator
    int p, n, d, q;
    float sum = 0.0;

    cout << "How many pennies do you have? ";
    cin >> p; // read pennies
    cout << "How many nickels do you have? ";
    cin >> n; // read nickels
    cout << "How many dimes do you have? ";
    cin >> d; // read dimes
    cout << "How many quarters do you have? ";
    cin >> q; // read quarters

    sum = (p + n * 5 + d * 10 + q * 25) * 0.01; // converting into the dollar value

    cout << "\nThe dollar value is $" << sum << endl;

    // Feedback based on total value
    if (sum < 0.5) {
        cout << "You need to some monay bro." << endl;
    } else if (sum >= 0.5 && sum < 2) {
        cout << "You can barely buy some candy." << endl;
    } else if (sum >= 2 && sum < 5) {
        cout << "You can get a burger and fries!" << endl;
    } else if (sum >= 5) {
        cout << "You must be ballin." << endl;
    }

    // Program 3: Patterns

    // Pattern 1: Print every 5th number from 105 to 500 with 20 numbers per line
    cout << "~~ Pattern 1 ~~" << endl;
    for (int i = 105; i <= 500; i += 5) {
        cout << i << " ";
        if ((i - 105) / 5 % 20 == 19) {
            cout << endl;
        }
    }
    cout << endl;

    // Pattern 2: Print asterisks with 1 on the first line, 2 on the second line, ..., 10 on the tenth line
    cout << "~~ Pattern 2 ~~" << endl;
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: Print dollar signs with 10 on the first line, 9 on the second line, ..., 1 on the last line
    cout << "~~ Pattern 3 ~~" << endl;
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "$ ";
        }
        cout << endl;
    }

    return 0;
}
