#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nextpermutationBrute(vector<int> &arr, int n) {
    int ind = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }

    if (ind == -1) {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    for (int i = n - 1; i > ind; i--) {
        if (arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    reverse(arr.begin() + ind + 1, arr.end());
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = nextpermutationBrute(arr, n);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// #include <iostream>     // For standard input/output
// #include <vector>       // To use the vector container
// #include <algorithm>    // To use reverse() and swap()
// using namespace std;

// // Function to find the next lexicographical permutation
// vector<int> nextpermutationBrute(vector<int> &arr, int n) {
//     int ind = -1;  // Index of the first number from the end that violates the increasing order

//     // Step 1: Find the breakpoint where arr[i] < arr[i+1] from the right
//     for (int i = n - 2; i >= 0; i--) {
//         if (arr[i] < arr[i + 1]) {
//             ind = i;   // Store the index of the breakpoint
//             break;     // Break since we found the first such index from the right
//         }
//     }

//     // Step 2: If no such breakpoint is found, that means the array is in descending order
//     if (ind == -1) {
//         reverse(arr.begin(), arr.end());  // Just reverse it to get the smallest permutation
//         return arr;
//     }

//     // Step 3: Find the next larger element to swap with arr[ind] (from the right)
//     for (int i = n - 1; i > ind; i--) {
//         if (arr[i] > arr[ind]) {
//             swap(arr[i], arr[ind]);  // Swap to move to the next permutation
//             break;
//         }
//     }

//     // Step 4: Reverse the suffix starting after the swapped index
//     reverse(arr.begin() + ind + 1, arr.end());  // This ensures it's the next immediate permutation

//     return arr;  // Return the result
// }

// int main() {
//     int n;  // Number of elements
//     cin >> n;  // Input size

//     vector<int> arr(n);  // Create vector of size n

//     // Take input elements
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Get the next permutation of the array
//     vector<int> result = nextpermutationBrute(arr, n);

//     // Print the result
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;  // Indicate successful execution
// }


// 🔁 Example Flow for [1, 2, 3]
// Find breakpoint: 2 < 3 → index = 1.

// Find next larger: 3 > 2 → swap 2 and 3 → [1, 3, 2]

// Reverse from index 2 to end (already sorted) → [1, 3, 2]