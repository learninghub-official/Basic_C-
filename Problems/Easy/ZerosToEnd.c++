#include<iostream>
#include<vector>
using namespace std;

// Brute force apporach
void ZeroToEnd(int arr[], int n){
    vector<int> temp;
    for(int i = 0;i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0;i<temp.size(); i++){
        arr[i] = temp[i];
    }

    for(int i = temp.size() ; i<n ; i++){
        arr[i] = 0;
    }

}

// optimal approach 

void ZeroToEndOptimal(int arr[], int n){
    int j = -1;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if (j == -1) return;
    for(int i = j+1 ; i<n ; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

}

int main() {
    int n;
    cin >> n;
    // int* arr = new int[n];
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // ZeroToEnd(arr, n);
    ZeroToEndOptimal(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
