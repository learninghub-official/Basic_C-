#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

void MajorityElement(int arr[], int n) {
    for(int i =0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if (arr[j] == arr[i]) {
                count++;
            }
        }
    if(count>n/2){
        cout<<arr[i];
    }
    else cout << "No majority element found!" << endl; return;
    
    }
    

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    MajorityElement(arr,n);

    return 0;
}