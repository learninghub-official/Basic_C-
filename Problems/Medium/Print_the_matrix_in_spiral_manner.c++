#include<iostream>
using namespace std;

void SpiralTraversalOfMatrixOptimal(vector<vector<int>> &arr, int n, int m){

}

int main(){
    int n , m ;
    cin>>n;
    cin>>m;

    // int arr[n][m];
    vector<vector<int>> arr(n, vector<int>(m));

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }


    // RotateArrayby90DegreesBrute(arr, n, m);
    SpiralTraversalOfMatrixOptimal(arr, n, m);

}
