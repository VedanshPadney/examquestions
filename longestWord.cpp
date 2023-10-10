#include <iostream>

size_t FindLongestWord(const char* s) {
    size_t longestWordLength = 0;
    size_t currentWordLength = 0;

    while (*s) {
        if (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\0') {
            // Found a word delimiter, check if the current word is longer
            if (currentWordLength > longestWordLength) {
                longestWordLength = currentWordLength;
            }
            currentWordLength = 0; // Reset the current word length
        } else {
            // Character belongs to the current word
            currentWordLength++;
        }

        s++; // Move to the next character
    }

    // Check for the last word in case the input string doesn't end with a delimiter
    if (currentWordLength > longestWordLength) {
        longestWordLength = currentWordLength;
    }

    return longestWordLength;
}

int main() {
    const char* text = "This is a sample sentence with some long words";
    size_t longestLength = FindLongestWord(text);
    std::cout << "Length of the longest word: " << longestLength << std::endl;

    return 0;
}
