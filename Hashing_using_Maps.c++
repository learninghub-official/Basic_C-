#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }


    // Pre-computation
    // map<key,value>
    map<int, int> mpp;
    for(int i = 0 ; i<n ; i++){       // incrementing key till n.
        mpp[arr[i]]++;        // counting the number of key and increasing value.
    }
    // Iterating in the map 

    for(auto it : mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // Fetch 
        cout<<mpp[number];
    }
}


// The time Complexity is (log n) in all case , worst , best and average. 



// #include <iostream>  // Include the input-output stream library for reading and writing
// #include <map>       // Include the map library to use the map data structure
// using namespace std; // Use the standard namespace to avoid writing std:: before functions

// int main(){
//     int n; // Declare an integer variable to store the number of elements
//     cin >> n; // Take input from the user for the number of elements

//     int arr[n]; // Declare an array of size 'n' (Note: Variable-length arrays are not standard in C++)
    
//     // Take 'n' elements as input from the user and store them in the array
//     for(int i = 0; i < n; i++){
//         cin >> arr[i]; // Input each element into the array
//     }

//     // Pre-computation: Creating a map to store the frequency of each number
//     // A map stores data in key-value pairs, where the key is the number, and the value is its count
//     map<int, int> mpp;

//     // Loop through the array to count the frequency of each number
//     for(int i = 0; i < n; i++){       
//         mpp[arr[i]]++; // Increment the count of the number in the map
//     }

//     // Iterating through the map and printing each key-value pair
//     for(auto it : mpp){
//         cout << it.first << " -> " << it.second << endl; 
//         // 'it.first' is the number (key), and 'it.second' is the frequency (value)
//     }

//     int q; // Declare an integer to store the number of queries
//     cin >> q; // Take input for the number of queries

//     // Process each query
//     while(q--){
//         int number; // Declare an integer variable to store the query number
//         cin >> number; // Take input for the number to be searched

//         // Fetch the count of the number from the map and print it
//         // If the number is present, it prints its frequency, otherwise it prints 0
//         cout << mpp[number] << endl;
//     }
// }
