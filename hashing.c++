// How Hashing Works in This Code
// Precomputing:

// The hash[] array stores the frequency of each number in the input array.

// If arr[i] = x, then hash[x] is incremented.

// Query Processing:

// Each query asks "How many times does X appear?"

// The answer is fetched in O(1) time using hash[number].

#include<iostream>
using namespace std;
// We can go only till hash size of 10^7 inside the main 
// int hashh[10000000];
int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin >> n;
    int arr[n];  // Declare an array to store 'n' elements

    cout<<"Enter Array: "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];  // Input array elements
    }

    //  **Pre-Computing using Hashing**  // We can go only till hash size of 10^6 inside the main 
    int hashh[13] = {0};  // Initialize a hash array with size 13 (Assuming max value in arr ≤ 12) 
    // int hash[1000000] = {0};
    // **Building the Hash Table** (Frequency Array)
    for(int i = 0 ; i<n ; i++){
        hashh[arr[i]] += 1;  // Increase the count of the element in the hash table
    }

    int q;  
    cin>>q;  // Input number of queries
    
    while(q--){
        int number;
        cout<<"Enter number of numbers: "<<endl;
        cin>>number;  // Input the number to check its frequency
        
        // **Fetching from the Hash Table** (O(1) Time Complexity)
        cout<<"Count of number \n"<<hashh[number]<<endl;  // Output frequency of 'number'
    }

    return 0;
}


// Input: 

// 5
// 1 3 2 1 3
// 5
// 1 4 2 3 12

// Output: 

// 2
// 0


// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
//     return 0;
// }