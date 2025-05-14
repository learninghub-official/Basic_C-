#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> LeaderInTheArrayBrute(vector<int> &arr, int n) {
    vector<int> leaders;

    // Brute-force approach: for each element, check if it's greater than all to its right
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader == true) {
            leaders.push_back(arr[i]);
        }
    }

    return leaders;
}

vector<int> LeaderInTheArrayOptimized(vector<int> &arr, int n){
    vector<int> ans;
    int maxi = INT_MIN;

    for(int i = n-1 ; i>=0 ;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = arr[i]; // instead of this 
        }
        // or 
        // maxi = max(maxi,arr[i]);
    }
    sort(ans.begin(), ans.end());  // if asked on this format
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // vector<int> result = LeaderInTheArrayBrute(arr, n);
    vector<int> result = LeaderInTheArrayOptimized(arr, n);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


/*
6
10 22 12 3 0 6
22 12 6
*/


// Explained version with comments:

// #include <iostream>
// #include <vector>
// #include <algorithm>  // For sort()
// using namespace std;

// // Brute-force approach to find leaders in the array
// vector<int> LeaderInTheArrayBrute(vector<int> &arr, int n) {
//     vector<int> leaders;  // To store the leader elements

//     // For each element, check if it's greater than all elements to its right
//     for (int i = 0; i < n; i++) {
//         bool isLeader = true;

//         // Compare with all elements to its right
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] < arr[j]) {
//                 isLeader = false;  // If any element to the right is greater, it's not a leader
//                 break;
//             }
//         }

//         // If current element is greater than all to its right, it's a leader
//         if (isLeader == true) {
//             leaders.push_back(arr[i]);
//         }
//     }

//     return leaders;  // Return the list of leader elements
// }

// // Optimized approach (O(n)) using right-to-left traversal
// vector<int> LeaderInTheArrayOptimized(vector<int> &arr, int n){
//     vector<int> ans;          // To store leader elements
//     int maxi = INT_MIN;       // Initialize the maximum from the right

//     // Traverse from right to left
//     for(int i = n - 1 ; i >= 0 ; i--){
//         // If current element is greater than all elements to its right (tracked via `maxi`)
//         if(arr[i] > maxi){
//             ans.push_back(arr[i]);  // It is a leader
//             maxi = arr[i];          // Update the maximum
//         }
//         // OR alternatively:
//         // maxi = max(maxi, arr[i]);
//     }

//     // Sort if the output is expected in ascending order (optional)
//     sort(ans.begin(), ans.end());

//     return ans;  // Return the leaders
// }

// int main() {
//     int n;
//     cin >> n;                // Read number of elements
//     vector<int> arr(n);      // Declare array of size n

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];       // Read array elements
//     }

//     // Choose one of the two methods
//     // vector<int> result = LeaderInTheArrayBrute(arr, n);
//     vector<int> result = LeaderInTheArrayOptimized(arr, n);

//     // Print the result
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }


// /*
// Sample Input:
// 6
// 10 22 12 3 0 6

// Sample Output:
// 6 12 22

// Explanation:
// Leaders are elements that are strictly greater than all elements to their right.
// In this case:
// - 22 > 12,3,0,6 ✔️
// - 12 > 3,0,6 ✔️
// - 6 has nothing to its right ✔️
// (10 and 3 are not leaders)
// Note: Output is sorted if needed.
// */
