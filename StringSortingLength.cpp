#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    char input[][50] = {
        "Little bigger than medium",
        "Small",
        "This is the longest string of all",
        "Medium string"
    };

    // Sort the strings based on their lengths
    sort(begin(input), end(input), [](const char* a, const char* b) {
        return strlen(a) < strlen(b);
    });

    // Create a 2D array and copy the sorted strings to it
    char result[4][50];
    for (int i = 0; i < 4; ++i) {
        strncpy(result[i], input[i], sizeof(result[i]));
    }

    // Print the result
    for (int i = 0; i < 4; ++i) {
        cout << result[i] << endl;
    }

    return 0;
}
