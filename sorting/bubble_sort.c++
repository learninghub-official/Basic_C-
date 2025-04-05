// Quick Reminder:
// Bubble Sort compares adjacent elements and bubbles up the largest element to the end in each pass.

// The ok flag helps optimize the sort by stopping early if the array is already sorted.

#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    for(int i = n-1; i>=1; i--){
        int ok = 0;
        for(int j = 0;j<=i-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                ok = 1;
            }
        }
        if(ok == 0){
            break;
        }
        cout<<"Runs"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// 12 4 3 54 23 1


// #include<iostream>
// using namespace std;

// // Function to perform Bubble Sort on the array
// void bubble_sort(int arr[], int n) {
//     // Outer loop runs from the end of the array towards the beginning
//     for(int i = n - 1; i >= 1; i--) {
//         int ok = 0; // Flag to check if any swap happened in the current pass

//         // Inner loop compares adjacent elements and swaps if needed
//         for(int j = 0; j <= i - 1; j++) {
//             // If the current element is greater than the next, swap them
//             if(arr[j] > arr[j + 1]) {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//                 ok = 1; // Mark that a swap has occurred
//             }
//         }

//         // If no swaps occurred in this pass, the array is already sorted
//         if(ok == 0) {
//             break;
//         }

//         // Optional: print a message after each outer loop pass to track progress
//         cout << "Runs" << endl;
//     }
// }

// int main() {
//     int n;
    
//     // Take the size of the array as input
//     cin >> n;

//     // Declare the array of size n
//     int arr[n];

//     // Take array elements as input
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Call the Bubble Sort function to sort the array
//     bubble_sort(arr, n);

//     // Print the sorted array
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }
