#include<iostream>
using namespace std;

void maxConsecutive(int arr[], int n){
    int maxC = 1;
    int counter = 1;

    for(int i = 1; i<n ;i++){
        if(arr[i] == arr[i-1]){
            counter +=1;
            // maxC = counter;
        }
        else{
            counter = 1;
        }
        if(counter>maxC){
            maxC = counter;
        }
    }
    cout<<maxC<<endl;
}

int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxConsecutive(arr,n);
    return 0;
}