#include<iostream>
using namespace std;

void MissingNumberBrute(int arr[], int n){
    // int counter = 1;
    // for(int i = 0 ; i < n-1 ; i++){
    //     if(arr[i] != counter){
    //         cout<<"Missing Number: "<<counter<<endl;
    //         return;
    //     }
    //     counter += 1;
    // }
    // cout << "Missing Number: " << n << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n-1; i++){
        cin >> arr[i];
    }

    MissingNumberBrute(arr,n);
    return 0;
}
