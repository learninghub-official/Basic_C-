#include <iostream>
#include <vector>
#include <unordered_map> // for better approach
using namespace std;

void MajorityElementBrute(int arr[], int n) {
    bool found = false;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > n / 2) {
            cout << "Majority element is: " << arr[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No majority element found!" << endl;
    }
}

void MajorityElementBetter(int arr[], int n) {
    bool found = false;
    unordered_map<int, int> countMap;

    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }

    for (auto it : countMap) {
        if (it.second > n / 2) {
            cout << "Majority element is: " << it.first << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No majority element found!" << endl;
    }
}

int MajorityElementOptimized(int arr[], int n) {
    int cnt = 0;
    int el = -1;

    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        } else if (arr[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) {
            cnt++;
        }
    }

    if (cnt > n / 2) {
        cout << "Majority element is: " << el << endl;
        return el;
    } else {
        cout << "No majority element found!" << endl;
        return -1;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Uncomment the one you want to test:
    // MajorityElementBrute(arr, n);
    // MajorityElementBetter(arr, n);
    MajorityElementOptimized(arr, n);

    return 0;
}











// #include <iostream>              // For input and output
// #include <unordered_map>        // For hash map used in Better approach

// using namespace std;

// /*
//     ✅ BRUTE-FORCE APPROACH
//     - Time Complexity: O(n^2)
//     - Space Complexity: O(1)
//     - This method checks each element and counts how many times it appears.
//     - If any element appears more than n/2 times, it's printed as the majority element.
// */
// void MajorityElementBrute(int arr[], int n) {
//     bool found = false;  // Flag to track if we find a majority element

//     for (int i = 0; i < n; i++) {          // Loop through each element in array
//         int count = 0;                     // Reset count for current element

//         for (int j = 0; j < n; j++) {      // Count how many times arr[i] appears
//             if (arr[j] == arr[i]) {
//                 count++;
//             }
//         }

//         if (count > n / 2) {               // Check if it appears more than n/2 times
//             cout << "Majority element is: " << arr[i] << endl;
//             found = true;                  // Set flag as found
//             break;                         // Exit loop after finding majority
//         }
//     }

//     if (!found) {                          // If no majority element found
//         cout << "No majority element found!" << endl;
//     }
// }

// /*
//     ✅ BETTER APPROACH using Hash Map
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
//     - It uses a hash map to store the frequency of each element.
// */
// void MajorityElementBetter(int arr[], int n) {
//     bool found = false;                         // Flag to track if we find a majority element
//     unordered_map<int, int> countMap;           // Create a map to count frequency of each element

//     for (int i = 0; i < n; i++) {
//         countMap[arr[i]]++;                     // Increment count of arr[i] in map
//     }

//     for (auto it : countMap) {                  // Loop through map entries
//         if (it.second > n / 2) {                // Check if frequency is more than n/2
//             cout << "Majority element is: " << it.first << endl;
//             found = true;                       // Set flag as found
//             break;                              // Exit loop after finding majority
//         }
//     }

//     if (!found) {                               // If no majority element found
//         cout << "No Majority Element Found!" << endl;
//     }
// }

// /*
//     ✅ OPTIMIZED APPROACH: Boyer-Moore Voting Algorithm
//     - Time Complexity: O(n)
//     - Space Complexity: O(1)
//     - Step 1: Find a candidate which could be majority.
//     - Step 2: Verify the candidate by counting its actual occurrences.
// */
// void MajorityElementOptimized(int arr[], int n) {
//     int count = 0;       // Counter for current candidate
//     int candidate = -1;  // Variable to store potential majority candidate

//     // Phase 1: Finding the candidate
//     for (int i = 0; i < n; i++) {
//         if (count == 0) {           // If count is 0, set new candidate
//             candidate = arr[i];
//             count = 1;
//         } else if (arr[i] == candidate) {
//             count++;                // Increment if current element matches candidate
//         } else {
//             count--;                // Decrement otherwise
//         }
//     }

//     // Phase 2: Verifying the candidate
//     count = 0;                      // Reset count
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == candidate) {
//             count++;                // Count how many times candidate appears
//         }
//     }

//     if (count > n / 2) {
//         cout << "Majority element is: " << candidate << endl;
//     } else {
//         cout << "No majority element found!" << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;                        // Input the number of elements in the array
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];              // Input each element
//     }

//     // Uncomment one of the following lines to test that approach

//     // MajorityElementBrute(arr, n);     // Brute force method
//     // MajorityElementBetter(arr, n);    // Better method using map
//     MajorityElementOptimized(arr, n);    // Optimized Boyer-Moore method

//     return 0;
// }
