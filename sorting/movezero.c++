#include <iostream>
#include <vector>
using namespace std;

// Function to push all zeros to the end of the array (in-place)
void pushZerosToEnd(vector<int>& arr) {
    int count = 0; // Position to place the next non-zero element

    // Move all non-zero elements to the beginning
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill the rest of the array with zeros
    while (count < arr.size()) {
        arr[count++] = 0;
    }
}

// #hello

void tozero(vector<int> &arr){
    sort(arr.begin(), arr.end(), greater<int>());
    for(auto it: arr){
        cout<<arr[it]<<" ";
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    pushZerosToEnd(arr);
    // tozero(arr);

    cout << "After pushing zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
