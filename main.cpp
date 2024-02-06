#include <iostream>  // Include the input-output stream header for standard I/O operations.

using namespace std;  // Use the standard namespace to simplify access to standard library components.

int main()  // The main function, the entry point of the program.
{
    string cars[4] = {"Volvo", "BMW", "Tesla", "Ford"};  // Declare a string array named 'cars' and initialize it with four car brand names.

    for(int i; i < 4; i++)  // Loop to iterate through each element of the 'cars' array.
    {
        cout << cars[i] << ",\n";  // Output the current car brand followed by a comma and a newline.
    }

    return 0;  // Indicate the successful completion of the program.
}
