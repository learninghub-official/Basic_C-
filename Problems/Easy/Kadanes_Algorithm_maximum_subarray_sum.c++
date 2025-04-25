#include<iostream>
#include <set>
using namespace std;

// Brute force approach 
void SumOfLongestSubArray(int arr[], int n ){
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
    SumOfLongestSubArray(arr, n);


    return 0;
}


// 1 2 3 1 1 1 1 4 2 3