#include<iostream>
#include <set>
using namespace std;

// Brute force approach 
void LongestSubArrayWithGivenSumK(int arr1[], int n ){

}


int main() {
    cout<<"Provide size of Array: "<<endl;
    int n;
    cin >> n;
    int arr1[n];
    cout<<"Provide Array1: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }


    // ZeroToEnd(arr, n);
    // UnionOf2Arrays(arr1,arr2, n1, n2);
    LongestSubArrayWithGivenSumK(arr1, n);


    return 0;
}
