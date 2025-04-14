#include<iostream>
using namespace std;

void aloneNumberBrute(int arr[], int n){
    for(int i =0; i<n ;i++){
        int count = 0;
        for(int j =0; j<n ;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i];
        }
    }
}

// using hash 
int aloneNumberBetter(int arr[], int n){
    // int maxi = 0;
    // for(int i = 0; i<n; i++){
    //     maxi = max(maxi, arr[i]);
    // }
    // int hash[maxi+1] = {0};
    vector<int> hash = {0};

    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }
    for(int i = 0; i<n; i++){
        if(hash[arr[i]] == 1){
            return arr[i];
        }
    }
}

int aloneNumberOptimal(int arr[], int n){
    int xorr = 0;
    for(int i = 0 ; i < n ; i++){
        xorr = xorr^arr[i];
    }
    return xorr;
}

int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // aloneNumberBrute(arr,n);
    // aloneNumberBetter(arr,n);
    int result = aloneNumberOptimal(arr, n);  // capture returned value
    cout << result << endl;       
    return 0;
}