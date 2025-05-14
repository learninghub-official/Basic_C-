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

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // int result = LongestConsecutiveSequenceBrute(arr, n);
    int result = LongestConsecutiveSequenceBetter(arr, n);
    cout << result << endl;

    return 0;
}


/*

9
102 4 100 1 101 3 2 1 1

4

*/



#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Brute-force linear search to check if a number exists in the array
bool linearSearch(const vector<int>& arr, int NumberToSearch){
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] == NumberToSearch){
            return true;  // Number found in the array
        }
    }
    return false;  // Number not found
}

// Brute-force approach to find the longest consecutive sequence
int LongestConsecutiveSequenceBrute(vector<int> &arr, int n) {
    int longest = 1;  // Initialize the maximum length

    // Loop through every element in the array
    for(int i = 0; i < n; i++) {
        int x = arr[i];     // Start with the current number
        int count = 1;      // Count current number as part of sequence

        // Keep checking if the next consecutive number exists
        while(linearSearch(arr, x + 1) == true) {
            x = x + 1;      // Move to next number
            count++;        // Increase the length of the current sequence
        }

        // Update the longest sequence found so far
        longest = max(longest, count);
    }

    return longest;  // Return the final longest sequence length
}

// Better approach using sorting
int LongestConsecutiveSequenceBetter(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());  // Sort the array to bring consecutive numbers together
    int longest = 1;               // Stores the longest sequence length
    int currentcount = 0;          // Tracks the current consecutive sequence length
    int lastSmaller = INT_MIN;     // Stores the last unique number in sequence

    // Loop through each element
    for(int i = 0 ; i < n ; i++){
        // If current number is exactly 1 greater than last, it's consecutive
        if(arr[i] -1 == lastSmaller){
            currentcount++;         // Extend the current sequence
            lastSmaller = arr[i];   // Update lastSmaller
        }
        // If it's not a duplicate but not consecutive either
        else if (arr[i] != lastSmaller){
            currentcount = 1;       // Restart count for a new sequence
            lastSmaller = arr[i];   // Update lastSmaller
        }
        // Update longest sequence found so far
        longest = max(longest, currentcount); 
    }

    return longest;  // Return the longest consecutive sequence length
}

int main() {
    int n;
    cin >> n;                    // Read number of elements
    vector<int> arr(n);          // Declare a vector of size n

    for (int i = 0; i < n; i++) {
        cin >> arr[i];          // Read array elements
    }

    // Call the optimized function to get the result
    // int result = LongestConsecutiveSequenceBrute(arr, n);
    int result = LongestConsecutiveSequenceBetter(arr, n);
    cout << result << endl;     // Print the result

    return 0;                   // End of program
}


/*

Sample Input:
9
102 4 100 1 101 3 2 1 1

Sample Output:
4

Explanation:
The longest consecutive sequence is: 1, 2, 3, 4 → length = 4

*/
