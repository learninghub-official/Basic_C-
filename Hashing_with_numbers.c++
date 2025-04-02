// How Hashing Works in This Code
// Precomputing:

// The hash[] array stores the frequency of each number in the input array.

// If arr[i] = x, then hash[x] is incremented.

// Query Processing:

// Each query asks "How many times does X appear?"

// The answer is fetched in O(1) time using hash[number].

/*
Problem Statement: Counting Frequency Using Hashing
Description:
You are given an array of N integers where each element is in the range 0 to 12. Your task is to count the frequency of each element using hashing and efficiently answer multiple queries asking for the count of specific numbers.

Input Format:
An integer N – the size of the array.

N space-separated integers – the elements of the array.

An integer Q – the number of queries.

Q space-separated integers – each representing a number whose frequency needs to be found.

Output Format:
For each query, print the frequency of the given number in the array.

*/


// #include<iostream>
// using namespace std;
// // We can go only till hash size of 10^7 inside the main 
// // int hashh[10000000];
// int main(){
//     int n;
//     cout<<"Enter the size of Array"<<endl;
//     cin >> n;
//     int arr[n];  // Declare an array to store 'n' elements

//     cout<<"Enter Array: "<<endl;
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];  // Input array elements
//     }

//     //  **Pre-Computing using Hashing**  // We can go only till hash size of 10^6 inside the main 
//     int hashh[13] = {0};  // Initialize a hash array with size 13 (Assuming max value in arr ≤ 12) 
//     // int hash[1000000] = {0};
//     // **Building the Hash Table** (Frequency Array)
//     for(int i = 0 ; i<n ; i++){
//         hashh[arr[i]] += 1;  // Increase the count of the element in the hash table
//     }

//     int q;  
//     cin>>q;  // Input number of queries
    
//     while(q--){
//         int number;
//         cout<<"Enter number of numbers: "<<endl;
//         cin>>number;  // Input the number to check its frequency
        
//         // **Fetching from the Hash Table** (O(1) Time Complexity)
//         cout<<"Count of number \n"<<hashh[number]<<endl;  // Output frequency of 'number'
//     }

//     return 0;
// }


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




// Frequencies in a Limited Array



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array"<<endl;
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }

//     int hashh[n] ;
//     for(int i = 0 ; i<n ; i++){
//         hashh[i] = 0;
//         hashh[arr[i]++];
//     }
    
//     for(int i = 0 ; i<n ; i++){
//         cout<<"Count of Element:"<<hashh[i];
//     }


//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);  // Dynamic array
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // int maxElement = *max_element(arr.begin(), arr.end());  // Get the max element
    vector<int> hashh(n + 1, 0);  // Hash array with size based on max element

    // Count occurrences
    for(int i = 0; i < n; i++){
        hashh[arr[i]]++;  
    }

    // Print frequency of each element
    cout << "Element frequencies:\n";
    for(int i = 0; i <= n; i++){
        if(hashh[i] > 0)
            cout << "Element " << i << " appears " << hashh[i] << " times.\n";
    }

    return 0;
}
