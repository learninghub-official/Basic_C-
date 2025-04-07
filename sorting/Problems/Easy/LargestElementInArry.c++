#include<iostream>
using namespace std;

// This is the brute force method for solving this problem :

// using vector because i just copy pasted it from GFG compiler. 
// class Solution {
//     public:
//       int largest(vector<int> &arr) {
//           int n = arr.size();
//           sort(arr.begin(),arr.end());
//           return arr[n-1];
//       }
//   };

// It does not have better version but it directly have optimized version which is below:

void LargestElement(int arr[], int n){
    int largest = arr[0];
    // int n = arr.size();
    for(int i = 0 ; i < n ;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    LargestElement(arr,n);
}