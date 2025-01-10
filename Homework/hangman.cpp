// Homework #7
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayIntroduction() {
    // ASCII art and introduction
    cout << " Welcome to Ocean Quest Adventure!" << endl;
    cout << " by Samone Cook " << endl;
    cout << R"(

         .
        ":"
      ___:____     |"\/"|
    ,'        `.    \  /
    |  O        \___/  |
    ~^~^~^~^~^~^~^~^~^~^~^~^~

)" << endl;
}

void displayWinningScreen() {
    cout << "Congratulations! You've successfully explored the ocean word!" << endl;
    cout << "You Win!" << endl;
    cout << R"(


           .'|_.-
         .'  '  /_
      .-"    -.   '>
   .- -. -.    '. /    /|_
  .-.--.-.       ' >  /  /
 (o( o( o )       \_."  <
  '-'-''-'            ) <
(       _.-'-.   ._\.  _\
 '----"/--.__.-) _-  \|
      "V""    "V"

)" << endl;
}
void displayLosingScreen() {
    cout << "Sorry, you've run out of attempts. The ocean word remains unexplored." << endl;
    cout << "You Lose!" << endl;
    cout << R"(

 _________         .    .
(..       \_    ,  |\  /|
 \       O  \  /|  \ \/ /
  \______    \/ |   \  /
     vvvv\    \ |   /  |
     \^^^^  ==   \_/   |
      \_   ===    \.   |
      / /\_   \ /      |
      |/   \_  \|      /
             \________/

)" << endl;
}

void displayGraphics(int badGuesses) {
    // Display ASCII art based on the number of bad guesses
    // Add more graphics for each incorrect guess

    if (badGuesses > 0) {
        cout << "   _________         .    . " << endl;
        cout << "  (..       \\_    ,  |\\  /| " << endl;
        cout << "   \\       O  \\  /|  \\ \\/ / " << endl;
    }

    if (badGuesses > 1) {
        cout << "    \\______    \\/ |   \\  / " << endl;
    }

    if (badGuesses > 2) {
        cout << "       vvvv\\    \\ |   /  | " << endl;
        cout << "       \\^^^^  ==   \\_/   | " << endl;
    }

    if (badGuesses > 3) {
        cout << "        \\_   ===    \\.   | " << endl;
    }

    if (badGuesses > 4) {
        cout << "        / /\\_   \\ /      | " << endl;
        cout << "        |/   \\_  \\|      / " << endl;
    }

    if (badGuesses > 5) {
        cout << "              \\________/ " << endl;

        // ASCII art for the shark
        cout << R"(
             _________         .    .
            (..       \_    ,  |\  /|
             \       O  \  /|  \ \/ /
              \______    \/ |   \  /
                 vvvv\    \ |   /  |
                 \^^^^  ==   \_/   |
                  \_   ===    \.   |
                  / /\_   \ /      |
                  |/   \_  \|      /
                         \________/
        )" << endl;
    }

    cout << endl;
}

void displayLettersRemaining(string lettersRemaining) {
    cout << "Letters Remaining: " << lettersRemaining << endl;
}

void displayGuessPhrase(string guessPhrase) {
    cout << "Secret Phrase: " << guessPhrase << endl;
}

bool isGameWon(string guessPhrase, string secretPhrase) {
    return guessPhrase == secretPhrase;
}

bool isGameLost(int badGuesses) {
    return badGuesses == 6;
}

int main() {
    // Set up seed
    srand(time(0));

    // Array of sample phrases for testing
    string phrases[] = {"treasure", "mermaid", "reef", "shipwreck", "whirlpool"};
    string secretPhrase = phrases[rand() % 5];

    string guessPhrase(secretPhrase.size(), '.');
    int badGuesses = 0;
    string lettersRemaining = "abcdefghijklmnopqrstuvwxyz";

    displayIntroduction();

    while (!isGameWon(guessPhrase, secretPhrase) && !isGameLost(badGuesses)) {
        displayGraphics(badGuesses);
        displayLettersRemaining(lettersRemaining);
        displayGuessPhrase(guessPhrase);

        // User input
        cout << "Enter a letter: ";
        string letter;
        cin >> letter;

        // Remove the guessed letter from the remaining letters
        size_t pos = lettersRemaining.find(letter);
        if (pos != string::npos) {
            lettersRemaining.erase(pos, 1);
        }

        // Check if the letter is in the secret phrase
        size_t location = secretPhrase.find(letter);
        if (location == string::npos) {
            badGuesses++;
        } else {
            // Replace periods with the correct letter in the guess phrase
            while (location != string::npos) {
                guessPhrase.replace(location, 1, letter);
                location = secretPhrase.find(letter, location + 1);
            }
        }
    }
    // Display winning or losing screen
    if (isGameWon(guessPhrase, secretPhrase)) {
        displayWinningScreen();
    } else {
        displayLosingScreen();
    }

    return 0;
}
