#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Properly returns whether the number exists in the array
bool linearSearch(const vector<int>& arr, int NumberToSearch){
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] == NumberToSearch){
            return true;
        }
    }
    return false;
}

// Function to find the length of longest consecutive sequence
int LongestConsecutiveSequenceBrute(vector<int> &arr, int n) {
    int longest = 1;

    for(int i = 0; i < n; i++) {
        int x = arr[i];
        int count = 1;

        while(linearSearch(arr, x + 1) == true) {
            x = x + 1;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int LongestConsecutiveSequenceBetter(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    int longest = 1 , currentcount = 0, lastSmaller = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] -1 == lastSmaller){
            currentcount++;
            lastSmaller = arr[i];
        }
        else if (arr[i] != lastSmaller){
            currentcount = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, currentcount); 
    }
    return longest;
    
}

int LongestConsecutiveSequenceOptimized(vector<int> &arr, int n){
    unordered_set<int> st;
    int longest = 1;
    if(n == 0) return 0;
    for(int i = 0 ; i < n ; i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt +=1;
            }
            longest = max(longest , cnt);
        }
    }
    return longest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // int result = LongestConsecutiveSequenceBrute(arr, n);
    // int result = LongestConsecutiveSequenceBetter(arr, n);
    int result = LongestConsecutiveSequenceOptimized(arr, n);
    cout << result << endl;

    return 0;
}


/*

9
102 4 100 1 101 3 2 1 1

4

*/



// // Explained version with comments:
// #include <iostream>         // For input and output operations
// #include <vector>           // For using the vector container
// #include <unordered_set>    // For using the unordered_set container (hash set)
// using namespace std;

// // Function to perform a linear search to check if a number exists in the array
// bool linearSearch(const vector<int>& arr, int NumberToSearch){
//     for(int i = 0 ; i < arr.size(); i++){      // Loop through the entire array
//         if(arr[i] == NumberToSearch){          // If the number is found
//             return true;                       // Return true
//         }
//     }
//     return false;                              // Return false if not found
// }

// // Brute-force method to find the longest consecutive sequence
// int LongestConsecutiveSequenceBrute(vector<int> &arr, int n) {
//     int longest = 1;                           // Start with minimum length 1

//     for(int i = 0; i < n; i++) {               // Iterate over each element
//         int x = arr[i];                        // Store current element
//         int count = 1;                         // Sequence starts with one element

//         // Keep checking next consecutive numbers
//         while(linearSearch(arr, x + 1) == true) {
//             x = x + 1;                         // Move to next number
//             count++;                           // Increment the sequence length
//         }

//         longest = max(longest, count);         // Update longest if current is greater
//     }

//     return longest;                            // Return the result
// }

// // Improved method using sorting to avoid repeated search
// int LongestConsecutiveSequenceBetter(vector<int> &arr, int n){
//     sort(arr.begin(), arr.end());             // Sort the array
//     int longest = 1;                          // Minimum possible sequence
//     int currentcount = 0;                     // Current sequence count
//     int lastSmaller = INT_MIN;                // Track the previous unique element

//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] - 1 == lastSmaller){        // Check if current is consecutive
//             currentcount++;                   // Continue the current sequence
//             lastSmaller = arr[i];             // Update lastSmaller
//         }
//         else if (arr[i] != lastSmaller){      // If new non-duplicate number
//             currentcount = 1;                 // Start new sequence
//             lastSmaller = arr[i];             // Update lastSmaller
//         }
//         longest = max(longest, currentcount); // Update longest if needed
//     }
//     return longest;                           // Return the result
// }

// // Most efficient method using a hash set
// int LongestConsecutiveSequenceOptimized(vector<int> &arr, int n){
//     unordered_set<int> st;                    // Create a hash set
//     int longest = 1;                          // Initialize longest to 1

//     if(n == 0) return 0;                      // If array is empty, return 0

//     for(int i = 0 ; i < n ; i++){
//         st.insert(arr[i]);                    // Insert all elements into the set
//     }

//     // Iterate over each element in the set
//     for(auto it: st){
//         // Check if it is the start of a sequence
//         if(st.find(it - 1) == st.end()){      // If no previous number exists
//             int cnt = 1;                      // Start a new sequence
//             int x = it;                       // Store current starting number

//             // Count consecutive numbers in the sequence
//             while(st.find(x + 1) != st.end()){
//                 x = x + 1;                    // Move to next number
//                 cnt += 1;                     // Increment count
//             }

//             longest = max(longest , cnt);     // Update longest sequence length
//         }
//     }

//     return longest;                           // Return the longest sequence length
// }

// // Main function
// int main() {
//     int n;
//     cin >> n;                                  // Input the number of elements
//     vector<int> arr(n);                        // Declare a vector of size n

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];                         // Input elements into the array
//     }

//     // Uncomment any one of the below to test different versions
//     // int result = LongestConsecutiveSequenceBrute(arr, n);
//     // int result = LongestConsecutiveSequenceBetter(arr, n);
//     int result = LongestConsecutiveSequenceOptimized(arr, n);  // Use optimized version
//     cout << result << endl;                    // Output the result

//     return 0;                                  // End of program
// }

// /*
// Sample Input:
// 9
// 102 4 100 1 101 3 2 1 1

// Sample Output:
// 4

// Explanation:
// The longest consecutive sequence is: 1, 2, 3, 4 → length = 4
// This is identified by the Optimized version using hash set.
// */
