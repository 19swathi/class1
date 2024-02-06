#include<iostream>  // Include the input-output stream header for standard I/O operations.

using namespace std;  // Use the standard namespace to simplify access to standard library components.

int main ()  // The main function, the entry point of the program.
{
    string letters[2][2][2] = {{{"A", "B"}, {"C", "D"}}, {{"E", "F"}, {"G", "H"}}};  // Declare a three-dimensional string array named 'letters' with dimensions 2x2x2 and initialize it with letters.

    for (int i = 0; i < 2; i++) {  // Outer loop for the first dimension (2 elements)
        for (int j = 0; j < 2; j++) {  // Middle loop for the second dimension (2 elements)
            for (int k = 0; k < 2; k++) {  // Inner loop for the third dimension (2 elements)
                cout << letters[i][j][k] << "\n";  // Output the current element at the specified indices, followed by a newline.
            }
        }
    }

    return 0;  // Indicate the successful completion of the program.
}
