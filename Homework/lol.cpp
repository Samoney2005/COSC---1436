//Samone Cook
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

// Function that replaces abbreviations in the sentence with proper words
string LOLSpeak(string S, string Abbr, string Translation) {
    size_t pos = 0;
    while ((pos = S.find(Abbr, pos)) != string::npos) {
        S.replace(pos, Abbr.length(), Translation);
        pos += Translation.length(); // Move past the replacement
    }
    return S;
}

int main() {
    // Array of abbreviations and their translations
    vector<pair<string, string>> abbreviations = {
        {" u ", " you "},
        {" lol ", " laughing out loud "},
        {" brb ", " be right back "},
        // Add 7 more abbreviations of your choice
        {" omg ", " oh my god "},
        {" ttyl ", " talk to you later "},
        {" idk ", " I don't know "},
        {" btw ", " by the way "},
        {" fyi ", " for your information "},
        {" rofl ", " rolling on the floor laughing "},
        {" gtg ", " got to go "}
    };

    // Get sentence from user
    string S;
    cout << "This program will correct your lolspeak abbreviations." << endl;
    cout << "Enter a sentence: ";
    getline(cin, S);  // Using getline to capture the entire sentence

    // Replace abbreviations in the sentence
    for (const auto& abbr : abbreviations) {
        S = LOLSpeak(S, abbr.first, abbr.second);
    }

    // Output the corrected sentence
    cout << "\nThe corrected sentence:\n";
    cout << S << endl;

    return 0;
}
