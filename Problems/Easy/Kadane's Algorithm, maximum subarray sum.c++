#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

// issue in Handling no majority element code 
// void MajorityElement(int arr[], int n) {
//     for(int i =0;i<n;i++){
//         int count = 0;
//         for(int j = 0;j<n;j++){
//             if (arr[j] == arr[i]) {
//                 count++;
//             }
//         }
//     if(count>n/2){
//         cout<<arr[i];
//     }
//     // else cout << "No majority element found!" << endl; 
//     }
// }

// handled if no majority element exist 

void MajorityElementBrute(int arr[], int n) {

}

void MajorityElementBetter(int arr[], int n){

}    

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    // MajorityElementBrute(arr,n);
    MajorityElementBetter(arr,n);

    return 0;
}