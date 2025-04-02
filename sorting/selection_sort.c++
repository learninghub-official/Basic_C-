#include<iostream>
using namespace std;

void selection_sorting(int arr[] , int n){
    int mini;
    for(int i =0 ; i<=n-2 ;i++){
        mini = i;
        for(int j=i; j<=n-1;j++){
            if (arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    
    

}

int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array : "<<endl;
    for(int i = 0; i<n; i++){
        cin >>arr[i];
    }
    selection_sorting(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

/*

Enter the size of array : 
6
Enter the array : 
13 46 24 52 20 9
9 13 20 24 46 52 %  

*/
