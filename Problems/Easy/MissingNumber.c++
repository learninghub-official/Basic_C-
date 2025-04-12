#include<iostream>
using namespace std;

void MissingNumberBrute(int arr[], int n){

    // This does'nt work for unsorted array 
    // int counter = 1;
    // for(int i = 0 ; i < n-1 ; i++){
    //     if(arr[i] != counter){
    //         cout<<"Missing Number: "<<counter<<endl;
    //         return;
    //     }
    //     counter += 1;
    // }
    // cout << "Missing Number: " << n << endl;

    // Other correct approach 
    for(int i = 1; i<n;i++){
        int flag = 0;
        for(int j = 0; j<n-1; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<i;
        }
    }
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
