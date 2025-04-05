// Case	            Time Complexity
// Best Case	    O(n)
// Average Case	    O(n²)
// Worst Case	    O(n²)
// Space	        O(1)



#include<iostream>
using namespace std;

void insertion_sorting(int arr[] , int n){
    // int temp;
    for(int i =0 ; i<=n-1 ;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }        
    } 
}

int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array : "<<endl;
    for(int i = 0; i<n; i++){
        cin >>arr[i];
    }
    insertion_sorting(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

/*

Enter the size of array : 
6
Enter the array : 
13 46 24 52 20 9
9 13 20 24 46 52 %  

*/



// Explained

// #include<iostream>
// using namespace std;

// // Function to perform Insertion Sort on the array
// void insertion_sorting(int arr[] , int n){
//     // Loop from index 0 to n-1 (each iteration places arr[i] at its correct sorted position)
//     for(int i = 0; i <= n - 1; i++){
//         int j = i;

//         // Shift elements to the right until the correct position for arr[i] is found
//         while(j > 0 && arr[j - 1] > arr[j]){
//             // Swap arr[j] with arr[j-1] if they are in the wrong order
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;

//             // Move one position to the left
//             j--;
//         }        
//     } 
// }

// int main(){
//     // Declare variable to store the size of the array
//     int n;
//     cout << "Enter the size of array : " << endl;
//     cin >> n;

//     // Declare the array of size n
//     int arr[n];

//     // Take array input from the user
//     cout << "Enter the array : " << endl;
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     // Call the insertion sort function to sort the array
//     insertion_sorting(arr, n);

//     // Print the sorted array
//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }
