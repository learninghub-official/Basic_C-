#include<iostream>
#include <set>
using namespace std;


void IntersectionBrute(int arr1[],int arr2[], int n1 , int n2 ){

    
    // return Unionarray;
    // for(auto it: Unionarray){
    //     cout<<Unionarray[it]<<" ";
    // }

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
