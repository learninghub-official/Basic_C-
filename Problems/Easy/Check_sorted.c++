#include<iostream>
using namespace std;

int CheckSorted(int arr[], int n){
    for(int i = 1 ; i < n ; i++){
        if(arr[i] >= arr[i-1]){
            // do nothing
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    if(CheckSorted(arr, n)){
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }

    return 0;
}
