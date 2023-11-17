#include <iostream>

using namespace std;

const int THRESHOLD = 10;

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {

}

int main() {
    const int arraySize = 5;
    int numbers[arraySize];

    // Populate the array with user input
    cout << "Enter " << arraySize << " numbers:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];

        /*
        if (invalid input) {
            cout << "Invalid input. Please enter a number: ";
            cin >> numbers[i];
        } 
        */
    }

    // Calculate the sum using the function
    int result = calculateSum(numbers, arraySize);

    // If the sum is greater than the threshold, print a message
    if (result > THRESHOLD) {
    
    }

    return 0;
}
