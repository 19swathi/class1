#include <iostream>
using namespace std;

// Function to demonstrate array manipulation in C++
int main()
{
    // Declare and initialize an array of car brands
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};

    // Modify the first element in the array
    cars[0] = "Tata";

    // Display the modified array using a for loop
    cout << "Updated Array Contents:\n";
    for (int i = 0; i < 4; i++)
        cout << i << "=" << cars[i] << "\n";

    // Display the first element separately
    cout << "First Element after Modification: " << cars[0] << "\n";

    return 0;
}
