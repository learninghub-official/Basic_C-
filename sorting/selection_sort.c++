#include<iostream>
using namespace std;

void selection_sorting(int arr[] , int n){
    int mini;
    for(int i =0 ; i<=n-2 ;i++){
        mini = i;
        for(int j=i; j<=n-1;j++){
            if (arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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
    selection_sorting(arr, n);
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


#include<iostream>
using namespace std;

// Function to perform Selection Sort on the array
void selection_sorting(int arr[], int n) {
    int mini;  // Variable to hold index of the minimum element

    // Outer loop moves the boundary of the unsorted part
    for(int i = 0; i <= n - 2; i++) {
        mini = i;  // Assume the current index is the minimum

        // Inner loop finds the smallest element in the unsorted part
        for(int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;  // Update index of the new minimum
            }
        }

        // Swap the smallest found element with the element at index i
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;

    // Ask the user to input the size of the array
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int arr[n];  // Declare array of size n

    // Input the elements of the array
    cout << "Enter the array : " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call selection sort function
    selection_sorting(arr, n);

    // Print the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
