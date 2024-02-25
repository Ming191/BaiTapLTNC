#include<bits/stdc++.h>

using namespace std;

#define START 0
#define GOOD_GUESS 1
#define BAD_GUESS 2
#define MAX_BAD_GUESSES 5

struct Hangman
{
    string secretWord;
    string guessedWord;
    int badGuesses;
    int hiddenLetters;
    int status = START;

    void init(const string& s) {
        secretWord = s;
        guessedWord = string(secretWord.length(), '_');
        badGuesses = 0;
        hiddenLetters = secretWord.length();
    }
    void update(char input) {
        status = BAD_GUESS;
        for (int i = 0; i < secretWord.length(); i++) {
            if(guessedWord[i] == '_' && secretWord[i] == input) {
                guessedWord[i] = input;
                status = GOOD_GUESS;
                hiddenLetters--;
            }
        }
        if(status == BAD_GUESS) {
                badGuesses++;
        }
    }
    bool won() const {
        return hiddenLetters <= 0;
    }
    bool lost() const {
        return badGuesses > MAX_BAD_GUESSES;
    }
    bool isOver() const {
        return (won() || lost());
    }
    bool wannaContinue() {
        cout << "Do you wanna continue?" << endl;
        cout << "[Y/N]: ";
        char choice;
        cin >> choice;
        cin.ignore();
        status = START;
        return (choice == 'Y' || choice == 'y');
    }
};

void render(const Hangman& game) {

    cout << "---------------------------------------------------------------------" << endl;
    if(game.status == GOOD_GUESS) {
        cout << "Good Guess!" << endl;
    } else if (game.status == BAD_GUESS) {
        cout << "Bad Guess!" <<endl; 
    }
    cout << "Bad Guesses: " << game.badGuesses << endl;
    cout << "GuessedWord: " << game.guessedWord << endl;

    if(game.won()) cout << "You won!" << endl;
    if(game.lost()) cout << "You lost!" << endl;

    cout << "---------------------------------------------------------------------" << endl;
}

char getInput() {
    string input;
    cout << "Make a guess: ";
    cin >> input;
    return input[0];
}

vector<string> readWordFromFile(string path) {
    vector<string> temp;
    ifstream file(path);
    if(file.is_open()) {
        while(!file.eof()) {
            string word;
            getline(file,word);
            temp.emplace_back(word);
        }
        file.close();
    }
    return temp;
}
vector<string> WORD_LIST = readWordFromFile("input.txt");

const int WORD_COUNT = WORD_LIST.size();

string chooseWord() {
    int randomIndex = rand() % WORD_COUNT;
    string res = WORD_LIST[randomIndex];
    WORD_LIST.erase(WORD_LIST.begin()+randomIndex);
    return res;
}



int main(int argc, char** argv) {
    srand(time(0));
    Hangman game;
    bool firstGame = 1;
    bool Continue = 0;

    while(firstGame || Continue) {
        game.init(chooseWord());
        firstGame = 0;
        render(game);
        while(!game.isOver()) {
            char input = getInput();
            game.update(input);
            render(game);
        } ;
        if(game.lost()) cout << "The answer is: " << game.secretWord << endl; 
        Continue = game.wannaContinue();
    }
    return 0;
}