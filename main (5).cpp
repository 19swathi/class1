#include<iostream>  // Include the input-output stream header for standard I/O operations.

using namespace std;  // Use the standard namespace to simplify access to standard library components.

int main()  // The main function, the entry point of the program.
{
    string cars[5] = {"volvo", "toyota", "ford", "tesla", "honda"};  // Declare a string array named 'cars' with a size of 5 and initialize it with car brand names.

    int n = sizeof(cars) / sizeof(string);  // Calculate the number of elements in the 'cars' array by dividing the total size of the array by the size of an individual string.

    for(int i; i < n; i++)  // Iterate through each element in the 'cars' array using a for loop.
    {
        cout << cars[i] << "\n";  // Output the current car brand element followed by a newline.
    }
}
