#include<iostream>
using namespace std;

void insertion_sorting(int arr[] , int n){
    // int temp;
    for(int i =0 ; i<=n-1 ;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }        
    } 
}

int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array : "<<endl;
    for(int i = 0; i<n; i++){
        cin >>arr[i];
    }
    insertion_sorting(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

/*

Enter the size of array : 
6
Enter the array : 
13 46 24 52 20 9
9 13 20 24 46 52 %  

*/
