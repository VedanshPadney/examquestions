#include <iostream>
#include <cctype> // for isalpha and tolower

int main() {
  char str[100] = "An Advantage";
  char dest[100] = {};
  char* vowelPart = dest; // Pointer for the vowel part
  char* nonVowelPart = dest; // Pointer for the non-vowel part

  // Iterate through the input string
  for (char* p = str; *p; ++p) {
    char c = *p;
    char lc = tolower(c); // Convert to lowercase for easier vowel check

    if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') {
      // Character is a vowel
      *vowelPart = c;
      ++vowelPart;
    } else if (isalpha(c) || c == ' ') {
      // Character is a non-vowel (letter or space)
      *nonVowelPart = c;
      ++nonVowelPart;
    }
    // Ignore other characters (symbols, digits, etc.)
  }

  // Add the pipe character to separate parts
  *vowelPart = '|';
  ++vowelPart; // Move past the pipe character

  std::cout << dest << std::endl;

  return 0;
}