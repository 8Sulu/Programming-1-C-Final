#include <iostream>
#include <limits>

using namespace std;

const int THRESHOLD = 100;

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int arraySize = 5;
    int numbers[arraySize];

    cout << "Enter " << arraySize << " numbers:" << endl;

    for (int i = 0; i < arraySize; ++i) {
        cout << "Number " << i + 1 << ": ";
        while (!(cin >> numbers[i])) {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    int result = calculateSum(numbers, arraySize);

    cout << "Sum of the numbers: " << result << endl;

    if (result > THRESHOLD) {
        cout << "The sum is greater than the threshold." << endl;
    } else {
        cout << "The sum is not greater than the threshold." << endl;
    }

    return 0;
}
