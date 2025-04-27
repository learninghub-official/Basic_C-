#include<iostream>
#include <set>
#include <map>
using namespace std;

void TwoSumOptimized(int arr[], int n, int k){
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == k){
            cout<<"YES"<<endl;
            return;
        }
        else if (sum < k){
            left++;
        }
        else {
            right--;
        }
    }
    cout<<"No";
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

    // TwoSumBruteForce1(arr, n,k);
    // TwoSumBruteForce2(arr, n,k);
    // TwoSumBetter(arr, n,k);
    TwoSumOptimized(arr, n,k);


    return 0;
}
