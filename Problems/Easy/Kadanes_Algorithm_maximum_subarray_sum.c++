#include<iostream>
#include <set>
using namespace std;

// Brute force approach 
void SumOfLongestSubArrayBrute(int arr[], int n ){
    int maxi = INT_MIN;
    for(int i = 0;i<n; i++){
        for(int j = i ; j<n ; j++){
            int sum = 0;
            for(int k = i; k<j; k++){ 
                sum += arr[k];
                maxi = max(sum , maxi);
            }
        }
    }
    cout<<maxi;
}

// Better force approach 
void SumOfLongestSubArrayBetter(int arr[], int n ){
    int maxi = INT_MIN;
    for(int i = 0;i<n; i++){
        int sum = 0;
        for(int j = i ; j<n ; j++){
            sum += arr[j];
            maxi = max(sum , maxi);
        }
    }
    cout<<maxi;
}

void SumOfLongestSubArrayOptimized(int arr[], int n ){
    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0 ; i< n ; i++){
        sum += arr[i];

        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    cout<<maxi;
}

void SumOfLongestSubArrayWithElementsOptimized(int arr[], int n) {
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int maxi = INT_MIN;
    int start;

    for (int i = 0; i < n; i++) {
        if (sum == 0) {
            start = i;
        }
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum Sum: " << maxi << endl;

    cout << "Elements of Longest Subarray with Maximum Sum: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout<<"Provide size of Array: "<<endl;
    int n;
    cin >> n;
    int arr[n];
    cout<<"Provide Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    // ZeroToEnd(arr, n);
    // UnionOf2Arrays(arr1,arr2, n1, n2);
    // SumOfLongestSubArrayBrute(arr, n);
    // SumOfLongestSubArrayBrute(arr, n);
    // SumOfLongestSubArrayOptimized(arr, n);
    SumOfLongestSubArrayWithElementsOptimized(arr, n);


    return 0;
}


/*
Provide size of Array: 
8
Provide Array: 
-2 -3 4 -1 -2 1 5 -3
7% 

*/





// Explained code:


// #include<iostream> // For input/output operations
// #include<set>      // Included but not used here
// using namespace std;

// // --------- Brute Force Approach (O(N^3)) ---------
// void SumOfLongestSubArrayBrute(int arr[], int n) {
//     int maxi = INT_MIN; // Initialize maximum sum with the smallest integer value

//     for (int i = 0; i < n; i++) { // Pick starting index
//         for (int j = i; j < n; j++) { // Pick ending index
//             int sum = 0; // Initialize sum for subarray (i to j)

//             for (int k = i; k < j; k++) { // Traverse each element between i and j-1
//                 sum += arr[k]; // Add current element to sum
//                 maxi = max(sum, maxi); // Update maximum if needed
//             }
//         }
//     }
//     cout << maxi; // Print maximum sum found
// }

// // --------- Better Approach (O(N^2)) ---------
// void SumOfLongestSubArrayBetter(int arr[], int n) {
//     int maxi = INT_MIN; // Initialize maximum sum

//     for (int i = 0; i < n; i++) { // Pick starting index
//         int sum = 0; // Reset sum for each new start index

//         for (int j = i; j < n; j++) { // Pick ending index
//             sum += arr[j]; // Add current element to running sum
//             maxi = max(sum, maxi); // Update maximum if required
//         }
//     }
//     cout << maxi; // Print maximum sum found
// }

// // --------- Optimized Approach (Kadane’s Algorithm - O(N)) ---------
// void SumOfLongestSubArrayOptimized(int arr[], int n) {
//     int sum = 0; // Running sum
//     int maxi = INT_MIN; // Initialize maximum sum

//     for (int i = 0; i < n; i++) { // Traverse each element
//         sum += arr[i]; // Add current element to running sum

//         if (sum > maxi) { // If running sum is greater than maximum, update maximum
//             maxi = sum;
//         }

//         if (sum < 0) { // If running sum becomes negative, reset it to 0
//             sum = 0;
//         }
//     }
//     cout << maxi; // Print maximum sum
// }

// // --------- Optimized Approach + Printing Subarray Elements ---------
// void SumOfLongestSubArrayWithElementsOptimized(int arr[], int n) {
//     int sum = 0; // Running sum
//     int ansStart = -1; // To store start index of max sum subarray
//     int ansEnd = -1;   // To store end index of max sum subarray
//     int maxi = INT_MIN; // Maximum sum
//     int start; // Temporary start index for current subarray

//     for (int i = 0; i < n; i++) { // Traverse each element
//         if (sum == 0) {
//             start = i; // Mark the potential start of a new subarray
//         }
//         sum += arr[i]; // Add current element to running sum

//         if (sum > maxi) { // Found a new maximum sum
//             maxi = sum;
//             ansStart = start; // Update final start index
//             ansEnd = i;       // Update final end index
//         }

//         if (sum < 0) { // If running sum becomes negative, reset it
//             sum = 0;
//         }
//     }

//     cout << "Maximum Sum: " << maxi << endl; // Print the maximum sum found

//     cout << "Elements of Longest Subarray with Maximum Sum: ";
//     for (int i = ansStart; i <= ansEnd; i++) { // Print elements from ansStart to ansEnd
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // --------- Main Function ---------
// int main() {
//     cout << "Provide size of Array: " << endl;
//     int n;
//     cin >> n; // Read the size of array

//     int arr[n]; // Declare array of size n

//     cout << "Provide Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i]; // Read each element into the array
//     }

//     // Uncomment any one function to test:
//     // SumOfLongestSubArrayBrute(arr, n);
//     // SumOfLongestSubArrayBetter(arr, n);
//     // SumOfLongestSubArrayOptimized(arr, n);
//     SumOfLongestSubArrayWithElementsOptimized(arr, n); // Call the function with elements printed

//     return 0; // Indicate successful program termination
// }

// /*
// Sample Input/Output:

// Provide size of Array: 
// 8
// Provide Array: 
// -2 -3 4 -1 -2 1 5 -3

// Output:
// Maximum Sum: 7
// Elements of Longest Subarray with Maximum Sum: 4 -1 -2 1 5 
// */
