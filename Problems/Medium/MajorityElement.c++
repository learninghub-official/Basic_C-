#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

// issue in Handling no majority element code 
// void MajorityElement(int arr[], int n) {
//     for(int i =0;i<n;i++){
//         int count = 0;
//         for(int j = 0;j<n;j++){
//             if (arr[j] == arr[i]) {
//                 count++;
//             }
//         }
//     if(count>n/2){
//         cout<<arr[i];
//     }
//     // else cout << "No majority element found!" << endl; 
//     }
// }

// handled if no majority element exist 

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
            break; // No need to check further once found
        }
    }

    // if (!found) {
    if(found == false){
        cout << "No majority element found!" << endl;
    }
}

void MajorityElementBetter(int arr[], int n){
    bool Found = false;
    unordered_map<int, int> countMap;
    for(int i =0; i<n ;i++){
        countMap[arr[i]]++;
    }
    for(auto it: countMap){
        if(it.second > n / 2){
            cout << "Majority element is: " << it.first << endl;
            Found = true;
            break;
        }
    }
    if(!Found){
        cout<<"No Majority Element Found!"<<endl;
    }
    
}    

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    // MajorityElementBrute(arr,n);
    MajorityElementBetter(arr,n);

    return 0;
}


















// #include <iostream>
// #include <vector>
// #include <algorithm> // for swap (currently unused, but included if needed later)
// #include <unordered_map> // Needed for the better approach

// using namespace std;

// /*
//     ❌ ISSUE WITH THIS FUNCTION:
//     The function below checks each element and counts its frequency,
//     but doesn't properly handle the case when no majority element exists.
//     Also, it may print the same element multiple times if repeated.
// */
// // void MajorityElement(int arr[], int n) {
// //     for(int i = 0; i < n; i++) {
// //         int count = 0;
// //         for(int j = 0; j < n; j++) {
// //             if (arr[j] == arr[i]) {
// //                 count++;
// //             }
// //         }
// //         if(count > n/2){
// //             cout << arr[i];
// //         }
// //         // else cout << "No majority element found!" << endl; 
// //     }
// // }

// /*
//     ✅ FIXED: Brute-force approach with proper handling for 'no majority element' case.
//     - Time Complexity: O(n^2)
//     - Space Complexity: O(1)
//     - We check each element's count and if it crosses n/2, we print it and stop.
//     - If no such element is found, we display a message accordingly.
// */
// void MajorityElementBrute(int arr[], int n) {
//     bool found = false;  // To track if majority element is found

//     for (int i = 0; i < n; i++) {
//         int count = 0;

//         // Count occurrences of arr[i]
//         for (int j = 0; j < n; j++) {
//             if (arr[j] == arr[i]) {
//                 count++;
//             }
//         }

//         // If count exceeds n/2, it's a majority element
//         if (count > n / 2) {
//             cout << "Majority element is: " << arr[i] << endl;
//             found = true;
//             break; // Exit early once found
//         }
//     }

//     // If loop completes without finding any majority element
//     if (found == false) {
//         cout << "No majority element found!" << endl;
//     }
// }

// /*
//     ✅ OPTIMIZED: Uses unordered_map to store frequencies of each element.
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
//     - Map stores count of each element.
//     - After counting, we loop through the map to check if any element > n/2.
// */
// void MajorityElementBetter(int arr[], int n){
//     bool Found = false;  // Flag to track if a majority element was found
//     unordered_map<int, int> countMap;

//     // Count frequency of each element in array
//     for (int i = 0; i < n; i++) {
//         countMap[arr[i]]++;  // Increment count of arr[i] in the map
//     }

//     // Check if any element has frequency > n/2
//     for (auto it : countMap) {
//         if (it.second > n / 2) {
//             cout << "Majority element is: " << it.first << endl;
//             Found = true;
//             break; // Exit loop after finding majority element
//         }
//     }

//     // If no element meets majority condition
//     if (!Found) {
//         cout << "No Majority Element Found!" << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n; // Input size of array
//     int arr[n];

//     // Input array elements
//     for (int i = 0 ; i < n ; i++) {
//         cin >> arr[i];
//     }

//     // You can test either function below:
//     // MajorityElementBrute(arr, n); // O(n^2) approach
//     MajorityElementBetter(arr, n);  // O(n) approach with hash map

//     return 0;
// }
