#include<iostream>
#include <set>
using namespace std;

// Brute force approach 
void SumOfLongestSubArrayBrute(int arr[], int n ){
    int maxi = INT_MIN;
    for(int i = 0;i<n; i++){
        for(int j = i ; j<n ; j++){
            int sum = 0;
            for(int k = i; k<j; k++){
                sum += arr[k];
                maxi = max(sum , maxi);
            }
        }
    }
    cout<<maxi;
}

// Better force approach 
void SumOfLongestSubArrayBetter(int arr[], int n ){
    int maxi = INT_MIN;
    for(int i = 0;i<n; i++){
        int sum = 0;
        for(int j = i ; j<n ; j++){
            sum += arr[j];
            maxi = max(sum , maxi);
        }
    }
    cout<<maxi;
}

void SumOfLongestSubArrayOptimized(int arr[], int n ){

}

int main() {
    cout<<"Provide size of Array: "<<endl;
    int n;
    cin >> n;
    int arr[n];
    cout<<"Provide Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    // ZeroToEnd(arr, n);
    // UnionOf2Arrays(arr1,arr2, n1, n2);
    // SumOfLongestSubArrayBrute(arr, n);
    // SumOfLongestSubArrayBrute(arr, n);
    SumOfLongestSubArrayOptimized(arr, n);


    return 0;
}


/*
Provide size of Array: 
8
Provide Array: 
-2 -3 4 -1 -2 1 5 -3
7% 

*/