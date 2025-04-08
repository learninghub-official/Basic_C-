#include<iostream>
#include <set>
using namespace std;


// briteforce 
void removeDuplicates(int arr[], int n){
    set<int> temp;
    for(int i = 0; i<n ;i++){
        temp.insert(arr[i]);
    } 
    for(auto it:temp){
        cout<<it<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    removeDuplicates( arr, n);
    // return 0;
} 

