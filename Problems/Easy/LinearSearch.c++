#include<iostream>
#include<vector>
using namespace std;

void linearSearch(int arr[], int n , int NumberToSearch){
    bool found = false;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == NumberToSearch){
            cout<<"Number is at the index: "<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"-1"<<endl;
    }
}

int main() {
    cout<<"Provide size of Array: "<<endl;
    int n,NumberToSearch;
    cin >> n;
    // int* arr = new int[n];
    int arr[n];
    cout<<"Provide Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Provide number to search"<<endl;
    cin>>NumberToSearch;

    // ZeroToEnd(arr, n);
    linearSearch(arr, n, NumberToSearch);

    return 0;
}
