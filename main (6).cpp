#include<iostream>  // Include the input-output stream header for standard I/O operations.

using namespace std;  // Use the standard namespace to simplify access to standard library components.

int main()  // The main function, the entry point of the program.
{
    string letters[2][4] = {{"A", "B", "C", "D"}, {"E", "F", "G", "H"}};  // Declare a two-dimensional string array named 'letters' with 2 rows and 4 columns, and initialize it with letters.

    cout << letters[0][2];  // Output the element at the intersection of the first row and third column of the 'letters' array.
}
