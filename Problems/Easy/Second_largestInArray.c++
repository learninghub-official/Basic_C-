// brute force case 

#include<iostream>
using namespace std;

// Brute force approach 
void SecondLargest(int arr[], int n){

    int largest = arr[0];
    // int n = arr.size();
    for(int i = 0 ; i < n ;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest: "<<largest<<endl;
    int Slargest;
    for(int i =n-2 ; i >=0; i--){
        if(arr[i] != largest){
            Slargest = arr[i];
            break;
        }
    }
    cout<<"Second Largest: "<<Slargest<<endl;
}

// Better solution  O(2n)
void SecondLargestBetter(int arr[], int n){

    int largest = arr[0];            
    // int n = arr.size();
    for(int i = 0 ; i < n ;i++){        // O(n)
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int Slargest = -1;
    for(int i = 0;i<n ;i++){                // O(n)
        if(arr[i]>Slargest && arr[i] != largest){
            Slargest = arr[i];
        }
    }
    cout<<"Second Largest: "<<Slargest<<endl;  
}

void SecondLargestOptimised(int arr[], int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i = 1; i<n ;i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i>sLargest]){
            sLargest = arr[i];
        }
    }
    cout<<"Second Largest: "<<sLargest<<endl;  
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // SecondLargest( arr, n);
    // SecondLargestBetter( arr, n);
    SecondLargestOptimised( arr, n);
} 


// 1 2 3 4 5 5

// Second largest = 4
