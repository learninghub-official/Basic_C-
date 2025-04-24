#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;


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