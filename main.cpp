//Nickholas Gherman


#include <iostream>
using namespace std;

int findCharacter(string string1, char character);
int findSubstring(string string1, string substring);

int main() {
    string stringOne;
    string subStringToFind;
    char characterToFind;

    cout << "Enter a sentence: " << endl;
    getline(cin, stringOne); //Using this because cin >> didnt work

    cout << "Now enter a character you wish to find:" << endl;
    cin >> characterToFind;

    cout << "Now enter a substring you wish to find:" << endl;
    cin >> subStringToFind;

    cout << "Finding the character: " << characterToFind << " at index " << findCharacter(stringOne, characterToFind) << endl;
    cout << "Finding the substring: " << subStringToFind << " at index " << findSubstring(stringOne, subStringToFind) << endl;

    return 0;
}

int findCharacter(string string1, char character) {
    for(int i = 0; i < string1.length(); i++) {
        if(string1[i] == character) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int findSubstring(string string1, string substring) {
    for(int i = 0; i <= string1.length() - substring.length(); i++) {
        bool matches = true;

        for(int j = 0; j < substring.length(); j++) {
            if(string1[i + j] != substring[j]) {
                matches = false;
                break;
            }
        }
        if(matches) {
            return i;
        }
    }
    return -1;
}
