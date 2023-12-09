#include <iostream>
#include <limits> 
#include <vector>

using namespace std;

void reverseVector(vector<int> &vec, int size) {
    int start = 0;
    int end = vec.size() - 1;

    while (start < end) {
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;

        ++start;
        --end;
    }
}

int getValidIntegerInput() {
     int input;

    while (true) {
        try {
            cin >> input;

            if (cin.fail() || cin.peek() != '\n') {
                throw runtime_error("Invalid input. Please enter a valid integer");
            } else {
                break;
            }
        } catch (const exception& e) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << e.what() << ": ";
        }
    }

    return input;
}

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    vector <int> myVector(size);

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        myVector[i] = getValidIntegerInput();
    }

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    reverseVector(myVector, size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
