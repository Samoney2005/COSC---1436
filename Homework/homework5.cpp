// Samone Cook
// Homework #5
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("lotto.txt");
    if (!fin)  // Check if the file opened successfully
    {
        cerr << "Error: Could not open the file." << endl;
        return 1;  // Exit with an error code
    }

    int Num, totalNumbers = 0, total_sum = 0;
    int frequency[55] = {};  // Array to track frequencies for numbers 1-54

    while (fin >> Num)  // Read numbers until end of file
    {
        if (Num >= 1 && Num <= 54)  // Ensure valid range
        {
            totalNumbers++;       // Increment total numbers
            total_sum += Num;     // Add to total sum
            frequency[Num]++;     // Increment frequency of the number
        }
    }

    fin.close();  // Close the file after reading all data

    // Printing the values
    cout << "Statistics for Lotto Texas (1992 - present)\n";
    cout << "Total numbers: " << totalNumbers << endl;
    cout << "Sum of these numbers: " << total_sum << endl;
    cout << "Average of these numbers: " << static_cast<double>(total_sum) / totalNumbers << endl;

    cout << "Frequency of lotto numbers: \n";
    for (int i = 1; i <= 54; i++)
    {
        cout << "Lotto Number: " << i << ", Frequency: " << frequency[i] << endl;
    }

    return 0;
}
