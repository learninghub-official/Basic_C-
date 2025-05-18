#include<iostream>
#include<vector>
using namespace std;

void CountSubarraySumEqualsK(int arr[] , int n, int k){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int sum = 0;
            for(int b = i ; b = j ; b++){
                sum += arr[b];
            }
        }
    }
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
}