// #include<iostream>
// #include<vector>
// using namespace std;

// void CountSubarraySumEqualsK(int arr[] , int n, int k){
//     int count = 0;
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = i ; j < n ; j++){
//             for(int b = i ; b = j ; b++){
//                 sum += arr[b];
//             }
//         }
//         if(sum == k){
//             count++;
//         }
//     }
//     cout<<count;
// }

// int main (){
//     int n ;
//     cout<<"First Enter Size of Array and then enter SUM"<<endl; 
//     cin>>n;
//     int k; 
//     cin>>k;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }
    
//     CountSubarraySumEqualsK(arr, n , k);
// }


#include <iostream>
#include <vector>
using namespace std;


void CountSubarraySumEqualsKBrute(int arr[], int n, int k) {
    int count = 0;

    // Loop for all subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;  // Reset sum for every subarray (i to j)

            // Sum the elements from index i to j
            for (int b = i; b <= j; b++) {
                sum += arr[b];
            }

            // If subarray sum equals k, increment count
            if (sum == k) {
                count++;
            }
        }
    }

    // Print total count of such subarrays
    cout << count << endl;
}

void CountSubarraySumEqualsKBetter(int arr[], int n, int k) {
    int count = 0;

    // Traverse all possible subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;  // Reset sum for each starting index i
        for (int j = i; j < n; j++) {
            sum += arr[j];  // Add current element to subarray sum

            if (sum == k) {
                count++;  // Found a subarray with sum = k
            }
        }
    }

    cout << "Number of subarrays with sum " << k << " is: " << count << endl;
}

void CountSubarraySumEqualsKOptimal(int arr[], int n, int k){

} 

int main() {
    int n, k;
    cout << "First enter the size of array and then enter the sum to search for:" << endl;
    cin >> n >> k;

    int arr[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // CountSubarraySumEqualsKBrute(arr, n, k);
    // CountSubarraySumEqualsKBetter(arr, n, k);
    CountSubarraySumEqualsKOptimal(arr, n, k);
}
hey i

/*

Input:
10
3
Enter 10 elements of the array:
1 2 3 -3 1 1 1 4 2 -3 

Output: 
Number of subarrays with sum 3 is: 8
*/