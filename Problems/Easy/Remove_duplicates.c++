#include<iostream>
#include <set>
using namespace std;


// bruteforce approach
void removeDuplicates(int arr[], int n){
    set<int> temp;
    for(int i = 0; i<n ;i++){
        temp.insert(arr[i]);
    } 
    for(auto it:temp){
        cout<<it<<" ";
    }
}

// optimised approach

void removeDuplicatedOptimised (int arr[], int n){
    int i  = 0;
    int j ;
    for(j = 1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<i+1<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    // removeDuplicates( arr, n);
    removeDuplicatedOptimised( arr, n);
    
    // return 0;
} 


/*   

// Detailed explaination 

#include<iostream>  // Includes the input/output stream library for using cin and cout
#include <set>      // Includes the set library to use the STL set container
using namespace std; // So we don’t have to write std:: before cin, cout, etc.


// Bruteforce approach to remove duplicates using set
void removeDuplicates(int arr[], int n){
    set<int> temp; // A set to automatically remove duplicates and store unique elements
    for(int i = 0; i < n; i++){ 
        temp.insert(arr[i]); // Inserts each element into the set (duplicates are ignored)
    } 
    for(auto it : temp){ // Iterates over the set (which is sorted automatically)
        cout << it << " "; // Prints each unique element
    }
}


// Optimised approach to remove duplicates from a sorted array in-place
void removeDuplicatedOptimised(int arr[], int n){
    int i = 0; // Pointer to track the index of the last unique element
    int j;
    for(j = 1; j < n; j++){ // Start from the second element
        if(arr[i] != arr[j]){ // If a new unique element is found
            arr[i + 1] = arr[j]; // Place it next to the last unique element
            i++; // Move the pointer to the next position
        }
    }
    cout << i + 1 << endl; // Print the number of unique elements
}


int main(){
    int n;
    cin >> n; // Read size of the array
    int arr[n]; // Declare an array of size n
    for(int i = 0; i < n; i++){
        cin >> arr[i]; // Read each element into the array
    }

    // removeDuplicates(arr, n); // Call the bruteforce method (commented out)
    removeDuplicatedOptimised(arr, n); // Call the optimized method on the input array

    // return 0; // Optional return statement (not necessary in modern C++)
}


*/
