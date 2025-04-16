#include<iostream>
#include <set>
using namespace std;

// Brute force approach 
void LongestSubArrayWithGivenSumK(int arr[], int n ,int k){
    int lenght = 0;
    for(int i = 0; i<n ;i++){
        int s = 0;
        for(int j =i; j<n ;j++){
            s +=arr[j];
            if(s == k) lenght = max(lenght, j-i+1);
        }
    }
    cout<<lenght<<endl;
}


int main() {
    cout<<"Provide size of Array: "<<
    int n;
    cin >> n;
    int k;
    cout<<"Provide Sum: "<<endl;
    cin>>k;
    int arr[n];
    cout<<"Provide Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    // ZeroToEnd(arr, n);
    // UnionOf2Arrays(arr1,arr2, n1, n2);
    LongestSubArrayWithGivenSumK(arr, n,k);


    return 0;
}


// 1 2 3 1 1 1 1 4 2 3