#include<iostream>
using namespace std;

void RotateByOne(int arr[] , int n){
    int temp = arr[0];
    for(int i = 0; i<n ;i++){
        arr[i-1] = arr[i] ;    
    }
    arr[n-1] = temp;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    RotateByOne(arr, n);

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