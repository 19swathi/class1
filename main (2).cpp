#include <iostream>  // Include the input-output stream header for standard I/O operations.

using namespace std;  // Use the standard namespace to simplify access to standard library components.

int main()  // The main function, the entry point of the program.
{
   int mynumbers[5] = {10, 20, 30, 40, 50};  // Declare an integer array named mynumbers with five elements and initialize them with values.

   for (int i : mynumbers)  // Iterate over each element 'i' in the mynumbers array using a range-based for loop.
   {
       cout << i << "\n";  // Output the current element 'i' followed by a newline character.
   }
    
    return 0;  // Indicate the successful completion of the program.
}
