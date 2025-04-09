#include<iostream>
using namespace std;

// this problem does not required any bruteforce or better approach so 
// here is the optimized approach.

void RotateByD(int arr[] , int n, int d){
    d = d%n;
    int temp[d];
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i<n ;i++){
        arr[i-d] = arr[i] ;    
    }
    
    for(int i = n-d; i<n ;i++){
        arr[i] = temp[i - (n-d)] ;    
    }
}

int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    RotateByD(arr, n,d);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
/* 
n = 5
1 2 3 4 5
2 3 4 5 1 %  


Time complexity: O(n)
Space Complixity: O(1)
*/