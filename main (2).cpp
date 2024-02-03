#include <iostream>
using namespace std;

int main() {
    // Declare an array of integers named "mynumbers" and initialize it with five values.
    int mynumbers[5] = { 10, 20, 30, 40, 50 };

    // Use a range-based for loop to iterate through the elements of the "mynumbers" array.
    // The loop automatically iterates over each element of the array.
    for (int i : mynumbers) {
        // Print the value of the current element followed by a newline.
        cout << i << "\n";
    }

    // Indicates that the program executed successfully.
    return 0;
}
