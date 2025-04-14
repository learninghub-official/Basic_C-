#include<iostream>
using namespace std;

void aloneNumber(int arr[], int n){
    for(int i =0; i<n ;i++){
        int count = 0;
        for(int j =0; j<n ;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i];
        }
    }
}

int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    aloneNumber(arr,n);
    return 0;
}