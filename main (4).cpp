#include<iostream>  // Include the input-output stream header for standard I/O operations.

using namespace std;  // Use the standard namespace to simplify access to standard library components.

int main()  // The main function, the entry point of the program.
{
    int mynumbers[5] = {10, 20, 30, 40, 50};  // Declare an integer array named 'mynumbers' with a size of 5 and initialize it with values.

    cout << sizeof(mynumbers) << endl;  // Output the size (in bytes) of the 'mynumbers' array using the 'sizeof' operator, followed by a newline.

    cout << sizeof(int) << endl;  // Output the size (in bytes) of an integer using the 'sizeof' operator, followed by a newline.
}
