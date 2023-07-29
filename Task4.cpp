#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// Function to count the number of words in a given text
int countWordsInText(const string& text) {
    istringstream iss(text);
    string word;
    int count = 0;

    while (iss >> word) {
        count++;
    }

    return count;
}

// Function to read text from a file
string readTextFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error: Unable to open the file: " << filename << endl;
        return "";
    }

    string text;
    string line;
    while (getline(file, line)) {
        text += line + " "; // Add a space after each line to account for words spanning multiple lines
    }

    return text;
}

int main() {
    string filename;
    cout << "Enter the file name: ";
    getline(cin, filename);

    string text = readTextFromFile(filename);
    if (text.empty()) {
        return 1; // Return a non-zero value to indicate an error
    }

    int wordCount = countWordsInText(text);

    cout << "Total number of words in the file: " << wordCount << endl;

    return 0;
}
