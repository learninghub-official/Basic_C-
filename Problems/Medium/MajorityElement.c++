#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

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
    bool found = false;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > n / 2) {
            cout << "Majority element is: " << arr[i] << endl;
            found = true;
            break; // No need to check further once found
        }
    }

    // if (!found) {
    if(found == false){
        cout << "No majority element found!" << endl;
    }
}

void MajorityElementBetter(int arr[], int n){
    bool Found;
    unordered_map<int, int> countMap;
    for(int i =0; i<n ;i++){
        countMap[arr[i]];
    }
    for(auto it: countMap){
        if(it.second > n / 2){
            cout << "Majority element is: " << it.first << endl;
            Found = true;
            break;
        }
    }
    if(!Found){
        cout<<"No Majority Element Found!"<<endl;
    }
    
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