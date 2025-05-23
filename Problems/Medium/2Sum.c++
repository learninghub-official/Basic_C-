#include<iostream>
#include <set>
#include <map>
using namespace std;

void TwoSumBruteForce1(int arr[], int n ,int k){
    int Currsum = 0;
    int j,i;
    for(int i = 0 ;i<n ;i++){
        for(j = 0 ; j<n ; j++){       // This approach is O(n^2)
            if(i == j){
                continue;
            }
            Currsum = arr[j] + arr[i];
            // cout<<"Check here"<<Currsum<<endl;
            if (Currsum == k){
                cout<<"True"<<endl;
                cout<<arr[i]<<" at: "<<i<<" + "<<arr[j]<<" at: "<<j<<" = "<<k<<endl;
                return;
            }
        }
    }
}

void TwoSumBruteForce2(int arr[], int n ,int k){
    int Currsum = 0;
    int j,i;
    for(int i = 0 ;i<n ;i++){
        for(j = i+1 ; j<n ; j++){      // This approach is slightly lesser than O(n^2)
            // if(i == j){
            //     continue;
            // }
            Currsum = arr[j] + arr[i];
            // cout<<"Check here"<<Currsum<<endl;
            if (Currsum == k){
                cout<<"True"<<endl;
                cout<<arr[i]<<" at: "<<i<<" + "<<arr[j]<<" at: "<<j<<" = "<<k<<endl;
                return;
            }
        }
    }
}


void TwoSumBetter(int arr[], int n, int k) {
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int a = arr[i];
        int more = k - a;
        if(mpp.find(more) != mpp.end()) {
            cout << "True" << endl;
            cout << "Indexes are: " << mpp[more] << ", " << i << endl;
            return; // optional: if you want to stop after finding one pair
        }
        mpp[a] = i;
    }
    cout << "False" << endl;
}

// Explaination 
/*
// Function to check if any two numbers in the array sum up to 'k'
void TwoSumBetter(int arr[], int n, int k) {
    map<int, int> mpp;  // Create a map to store array values and their indices

    for(int i = 0; i < n; i++) {     // Loop through the array
        int a = arr[i];              // Current element
        int more = k - a;            // The number needed to form the sum 'k' with current element

        // Check if the required number 'more' already exists in the map
        if(mpp.find(more) != mpp.end()) {
            cout << "True" << endl;  // If found, print True
            // Print the indices of the pair that adds up to 'k'
            cout << "Indexes are: " << mpp[more] << ", " << i << endl;
            return;                  // Exit the function after finding a valid pair
        }

        // If 'more' is not found, store the current element and its index in the map
        mpp[a] = i;
    }

    // If loop completes without finding a pair, print False
    cout << "False" << endl;
}

*/


void TwoSumOptimized(int arr[], int n, int k){
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == k){
            cout<<"YES"<<endl;
            return;
        }
        else if (sum < k){
            left++;
        }
        else {
            right--;
        }
    }
    cout<<"No";
}
int main() {
    cout<<"Provide size of Array: "<<endl;
    int n;
    cin >> n;
    int k;
    cout<<"Provide Sum: "<<endl;
    cin>>k;
    int arr[n];
    cout<<"Provide Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // TwoSumBruteForce1(arr, n,k);
    // TwoSumBruteForce2(arr, n,k);
    // TwoSumBetter(arr, n,k);
    TwoSumOptimized(arr, n,k);


    return 0;
}


/*
Provide size of Array: 
5
Provide Sum: 
14
Provide Array: 
2 6 5 8 11
True
6 + 8 = 14
*/

/*  Explaination of the above code */

// #include<iostream>      // For input/output operations
// #include <set>          // Included but not used in this code
// using namespace std;

// // Function to check if any two different elements in the array sum up to k
// void TwoSum(int arr[], int n ,int k){
//     int Currsum = 0;    // Variable to store the sum of two elements
//     int j, i;           // Loop counters (declared but 'i' is re-declared in the loop)
    
//     // Outer loop to iterate over each element in the array
//     for(int i = 0 ; i < n ; i++){
        
//         // Inner loop to pair the current element with every other element
//         for(j = 0 ; j < n ; j++){

//             // Skip the case where we are pairing the same element (same index)
//             if(i == j){
//                 continue;   // Continue to the next iteration
//             }

//             // Calculate the sum of the pair
//             Currsum = arr[j] + arr[i];

//             // Print current sum for debugging
//             cout << "Check here" << Currsum << endl;

//             // If the sum equals the target 'k'
//             if (Currsum == k){
//                 cout << "True" << endl;  // Indicate that a matching pair is found
//                 cout << arr[i] << " + " << arr[j] << " = " << k << endl;  // Print the pair
//                 return;  // Exit the function after finding the first matching pair
//             }
//         }
//     }
// }
// int main() {
//     cout << "Provide size of Array: " << endl;
//     int n;          // Variable to hold size of the array
//     cin >> n;       // Read size from user

//     int k;          // Variable to hold the required sum
//     cout << "Provide Sum: " << endl;
//     cin >> k;       // Read target sum from user

//     int arr[n];     // Declare array of size 'n'

//     cout << "Provide Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];  // Read each array element from user
//     }

//     TwoSum(arr, n, k);  // Call the function to check for pair with sum = k

//     return 0;       // Exit the program
// }


/*
🧮 Time Complexity:
Outer loop runs n times.

Inner loop runs n times for each outer loop.

But you skip i == j, so total comparisons are roughly n * (n - 1).

Worst-case Time Complexity: O(n^2)

Because it compares every pair of elements in a nested loop.

🧠 Space Complexity:
You use only a few variables (int Currsum, i, j) and the input array arr[n].

Space Complexity: O(n) for the input array only.

You are not using any additional space like maps or sets to store values, so it's quite minimal.
*/




