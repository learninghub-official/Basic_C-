#include<iostream>
#include <set>
#include <map>
using namespace std;

void SellandBuy(int arr[], int n){
    int mini = arr[0];
    int profit = 0;
    int cost;
    for(int i = 1 ; i<n ; i++){
        cost = arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini, arr[i]);
    }
    cout<<"Profit: "<<profit;
}
int main() {
    cout<<"Provide size of Array: "<<endl;
    int n;
    cin >> n;
    int arr[n];
    cout<<"Provide Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SellandBuy(arr, n);


    return 0;
}


/*

Provide size of Array: 
6
Provide Array: 
7 1 5 3 6 4
Profit: 5% 

*/