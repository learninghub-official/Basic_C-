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
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    SecondLargest( arr, n);
} 


// 1 2 3 4 5 5

// Second largest = 4
