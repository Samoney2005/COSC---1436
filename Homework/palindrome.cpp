// Samone Cook
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string Word, Reverse;
    cout << "Enter a word to test if palindrome: ";
    cin >> Word;
    for(int i=Word.size()-1; i>=0; i--)
    {
     Reverse += Word[i];
    }
    cout << "Your word in reverse: " << Reverse << endl;

    // Check if the word is a palindrome
    if (Word == Reverse)
    {
        cout << "The word is a palindrome!" << endl;
    }
    else
    {
        cout << "The word is not a palindrome." << endl;
    }


    return 0;

}
