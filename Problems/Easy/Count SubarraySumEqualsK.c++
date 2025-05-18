#include<iostream>
#include<vector>
using namespace std;

void CountSubarraySumEqualsK(int arr[] , int n, int k){
    int count = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            for(int b = i ; b = j ; b++){
                sum += arr[b];
            }
        }
        if(sum == k){
            count++;
        }
    }
    cout<<count;
}

int main (){
    int n ;
    cout<<"First Enter Size of Array and then enter SUM"<<endl; 
    cin>>n;
    int k; 
    cin>>k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    CountSubarraySumEqualsK(arr, n , k);
}