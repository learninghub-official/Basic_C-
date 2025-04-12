#include<iostream>
#include <set>
using namespace std;


void IntersectionBrute(int arr1[], int arr2[], int n1, int n2) {
    vector<int> Ans;
    vector<int> visArray(n2, 0); // Correctly create a vector of size n2 with all 0s

    // vector<int> visArray = {0};         //This creates a vector with only one element, initialized to 0.
                                           // So when your code tries to access visArray[j] for j > 0, it will 
                                        //    cause undefined behavior or a crash.So when your code tries to access 
                                        //    visArray[j] for j > 0, it will cause undefined behavior or a crash.

    for(int i = 0 ; i < n1 ; i++) {
        for(int j = 0 ; j < n2 ; j++) {
            if(arr1[i] == arr2[j] && visArray[j] == 0) {
                Ans.push_back(arr1[i]);
                visArray[j] = 1;
                break;
            }
            if(arr2[j] > arr1[i]) break; // only valid if arrays are sorted
        }
    }

    for(auto it : Ans) {
        cout << it << " ";
    }
    cout << endl;
}

void IntersectionOptimized(int arr1[], int arr2[], int n1, int n2){
    int i = 0;
    int j = 0;
    vector<int> Ans;
    while (i<n1 && j<n2)
    {
        // if(arr1[i] == arr2[j]){
        //     Ans.push_back(arr1[i]);
        //     i++;
        //     j++;
        // }
        // else{
        //     i++;        i = 1 → arr1[1] = 2, arr2[1] = 4 → not equal
        //     j++;         // You again do i++ and j++ → i = 2, j = 2
                            // 🚨 Now you skipped checking arr2[0] (2) when arr1[1] was 2
                            // You’ve missed the intersection value 2
        // }


        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else{
            Ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto it : Ans) {
        cout << it << " ";
    }
    cout << endl;
    
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
    // IntersectionBrute(arr1,arr2, n1, n2);
    IntersectionOptimized(arr1,arr2, n1, n2);


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