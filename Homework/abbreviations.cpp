#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>

using namespace std;

// Function to load abbreviations from the file into a map
unordered_map<string, string> load_abbreviations(const string& filename) {
    unordered_map<string, string> abbreviations;
    ifstream file(filename);

    if (!file) {
        cerr << "Error opening file!" << endl;
        return abbreviations;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string abbr, full_form;

        getline(ss, abbr, ',');
        getline(ss, full_form);

        abbr = abbr.substr(0, abbr.find_last_not_of(" \t") + 1);   // Trim trailing spaces/tabs
        full_form = full_form.substr(1, full_form.find_last_not_of(" \t") - 1); // Trim leading/trailing spaces

        abbreviations[abbr] = full_form;
    }
    file.close();
    return abbreviations;
}

// Function to replace abbreviations in the text
string replace_abbreviations(const string& text, const unordered_map<string, string>& abbreviations) {
    stringstream ss(text);
    string word, result;

    while (ss >> word) {
        if (abbreviations.find(word) != abbreviations.end()) {
            result += abbreviations.at(word) + " ";
        } else {
            result += word + " ";
        }
    }

    return result;
}

int main() {
    string filename = "abbreviations.txt";

    // Load abbreviations from the file
    unordered_map<string, string> abbreviations = load_abbreviations(filename);

    // Example text to replace abbreviations
    string sample_text = "lol idk if I can brb omg ttyl rofl";

    // Replace abbreviations in the text
    string replaced_text = replace_abbreviations(sample_text, abbreviations);

    // Output original and replaced text
    cout << "Original text: " << sample_text << endl;
    cout << "Replaced text: " << replaced_text << endl;

    return 0;
}
