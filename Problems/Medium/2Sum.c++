#include<iostream>
#include <set>
using namespace std;

// void TwoSum(int arr[], int n ,int k){
//     int Currsum = 0;
//     int j,i;
//     for(int i = 0 ;i<n ;i++){
//         for(j = 0 ; j<n ; j++){
//             Currsum = arr[j]+arr[i];
//             if(i== j){
//                 continue;
//             }
//             else if (Currsum == k){
//                 cout<<"True"<<endl;
//                 cout<<arr[i]<<endl;
//             }
//         }
//     }
// }

void TwoSum(int arr[], int n ,int k){
    int Currsum = 0;
    int j,i;
    for(int i = 0 ;i<n ;i++){
        for(j = 0 ; j<n ; j++){
            if(i == j){
                continue;
            }
            Currsum = arr[j] + arr[i];
            if (Currsum == k){
                cout<<"True"<<endl;
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
            }
        }
    }
}


int main() {
    cout<<"Provide size of Array: "<<endl;
    int n;
    cin >> n;
    int k;
    cout<<"Provide Sum: "<<endl;
    cin>>k;
    int arr[n];
    cout<<"Provide Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    TwoSum(arr, n,k);


    return 0;
}


/*
Provide size of Array: 
5
Provide Sum: 
14
Provide Array: 
2 6 5 8 11
True
6 + 8 = 14
True
8 + 6 = 14
*/