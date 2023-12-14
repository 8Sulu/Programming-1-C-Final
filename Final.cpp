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

int getValidIntegerInput(bool negative) {
    int input;
    
    while (true) {
        try {
            cin >> input;

            if (cin.fail() || cin.peek() != '\n' || (input <= 0 && negative)) {
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
    cout << "Enter the size of the vector: ";
    int size = getValidIntegerInput(1);

    vector <int> myVector(size);

    cout << "Enter elements of the vector:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        myVector[i] = getValidIntegerInput(0);
    }

    cout << "Original Vector: ";
    for (int i = 0; i < size; ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    reverseVector(myVector, size);

    cout << "Reversed Vector: ";
    for (int i = 0; i < size; ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
