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

// optimised 

void removeDuplicatedOptimised (int arr[], int n){
    int i  = 0;
    int j ;
    for(j = 1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<i+1<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    // removeDuplicates( arr, n);
    removeDuplicatedOptimised( arr, n);
    
    // return 0;
} 

