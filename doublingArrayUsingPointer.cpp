#include <iostream>

int main() {
    int arr[] = { 10, 21, 13, 34, 50, 65, 72 };
    int* p = arr; // Assign p to point to arr

    for (int i = 0; i < 7; ++i) {
        if (*p % 2 == 0) // Check if p points to an even number
            *p *= 2; // If so, double it using p
        std::cout << *p << ' '; // Display the number using p
        ++p; // Let p point to the next element of arr
    }

    return 0;
}

/*
    Q10) 
            cont * int cp1  = &i;
            int cp2 = &j;
*/
