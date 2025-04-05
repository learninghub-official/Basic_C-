#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; ++i) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {5, 2, 8, 4, 1};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}


// Original array: 5 2 8 4 1 
// Sorted array: 1 2 4 5 8 

// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to merge two sorted subarrays:
// // arr[low..mid] and arr[mid+1..high] into a single sorted array
// void merge(vector<int>& arr, int low, int mid, int high) {
//     vector<int> temp;       // Temporary array to store merged result
//     int left = low;         // Pointer for left subarray
//     int right = mid + 1;    // Pointer for right subarray

//     // Merge elements from both subarrays in sorted order
//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left++]);
//         } else {
//             temp.push_back(arr[right++]);
//         }
//     }

//     // Copy remaining elements from the left subarray (if any)
//     while (left <= mid) {
//         temp.push_back(arr[left++]);
//     }

//     // Copy remaining elements from the right subarray (if any)
//     while (right <= high) {
//         temp.push_back(arr[right++]);
//     }

//     // Copy the merged elements back to the original array
//     for (int i = low; i <= high; ++i) {
//         arr[i] = temp[i - low];  // Adjust index to match the original array
//     }
// }

// // Recursive function to divide the array and sort it
// void mergeSort(vector<int>& arr, int low, int high) {
//     if (low >= high) return;  // Base case: array of size 1 is already sorted

//     int mid = (low + high) / 2;

//     // Recursively sort the left half
//     mergeSort(arr, low, mid);

//     // Recursively sort the right half
//     mergeSort(arr, mid + 1, high);

//     // Merge the two sorted halves
//     merge(arr, low, mid, high);
// }

// int main() {
//     // Initialize the array to be sorted
//     vector<int> arr = {5, 2, 8, 4, 1};

//     // Display the original array
//     cout << "Original array: ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     // Call mergeSort on the entire array
//     mergeSort(arr, 0, arr.size() - 1);

//     // Display the sorted array
//     cout << "Sorted array: ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;
// }
