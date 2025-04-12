#include<iostream>
#include <set>
using namespace std;

// Brute force approach 
void UnionOf2Arrays(int arr1[],int arr2[], int n1 , int n2 ){
    set<int> temp;
    for(int i =0;i<n1;i++){
        temp.insert(arr1[i]);
    }
    
    for(int i =0;i<n2;i++){
        temp.insert(arr2[i]);
    }

    for(auto it:temp){
        cout<<it<<" ";
    }
    

}

// Optimized approach 
void UnionOf2ArraysOptimized(int arr1[],int arr2[], int n1 , int n2 ){
    int i = 0;
    int j = 0;
    vector<int> Unionarray;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if (Unionarray.size() == 0 || Unionarray.back() != arr1[i]){
                Unionarray.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if (Unionarray.size() == 0 || Unionarray.back() != arr2[j]){
                Unionarray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if (Unionarray.size() == 0 || Unionarray.back() != arr2[j]){
            Unionarray.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n2){
        if (Unionarray.size() == 0 || Unionarray.back() != arr1[i]){
            Unionarray.push_back(arr1[i]);
        }
        i++;
    }

    // return Unionarray;
    for(auto it: Unionarray){
        cout<<Unionarray[it]<<" ";
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
    // UnionOf2Arrays(arr1,arr2, n1, n2);
    UnionOf2ArraysOptimized(arr1,arr2, n1, n2);


    return 0;
}
