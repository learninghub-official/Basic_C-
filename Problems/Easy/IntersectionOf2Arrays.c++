#include<iostream>
#include <set>
using namespace std;


void IntersectionBrute(int arr1[],int arr2[], int n1 , int n2 ){

    vector<int> Ans;
    vector<int> visArray = {0};
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
            if(arr1[i] == arr2[j] && visArray[j] == 0){
                Ans.push_back(arr1[i]);
                visArray[j] = 1;
                break;
            }
            if(arr2[j]>arr1[i]) break;
        }
    }
    for(auto it: Ans){
        cout<<it<<" ";
    }
 
}

int main() {
    cout<<"Provide size of Array: "<<endl;
    int n1,n2;
    cin >> n1;
    cout<<"Provide size of Array: "<<endl;
    cin >> n2;
    // int* arr = new int[n];
    int arr1[n1];
    int arr2[n2];
    cout<<"Provide Array1: "<<endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout<<"Provide Array2: "<<endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }


    // ZeroToEnd(arr, n);
    IntersectionBrute(arr1,arr2, n1, n2);


    return 0;
}



/*

Provide size of Array: 
5
Provide size of Array: 
5
Provide Array1: 
1 2 2 3 3 
Provide Array2: 
2 3 3 4 5
2 3 3 %  

*/