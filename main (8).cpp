#include<iostream>  // Include the input-output stream header for standard I/O operations.

using namespace std;  // Use the standard namespace to simplify access to standard library components.

int main()  // The main function, the entry point of the program.
{
    // Boolean array to represent the presence of ships on a 4x4 grid
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };

    // Variables to track hits and turns
    int hits = 0;
    int numberOfTurns = 0;

    // Game loop - continue until all ships are hit
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column]) {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Inform the player about the successful hit and the remaining ships
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        } else {
            // Inform the player about the miss
            cout << "Miss\n\n";
   
