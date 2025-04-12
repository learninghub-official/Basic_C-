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

void MissingNumberBetter(int arr[], int n){
    // int hashArray[n+1] = {0};     //Not valid in standard C++
                                     // In standard C++, the size of an array must be known at compile time, 
                                     // but n is only known at runtime — hence the error.

    vector<int> hashArray(n + 1, 0);
    for(int i = 0 ;i<n-1 ; i++){
        hashArray[arr[i]] =1;
    }
    for(int i = 1 ;i<n ; i++){
        if(hashArray[i] == 0){
            cout<<"Missing Element: "<<i<<endl;
        }
    }
}

void MissingNumberOptimized(int arr[], int n){
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n-1; i++){
        cin >> arr[i];
    }

    // MissingNumberBrute(arr,n);
    MissingNumberBetter(arr,n);
    // MissingNumberOptimized(arr,n);
    return 0;
}
