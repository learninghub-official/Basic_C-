#include<iostream>
using namespace std;

void RotateArrayby90DegreesBrute(vector<vector<int>> &arr, int n, int m){
    vector<vector<int>> temp(m, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            temp[j][n - 1 - i] = arr[i][j]; 
        }
    }
    arr = temp;
}


void RotateArrayby90Degreesoptimal(vector<vector<int>> &arr, int n, int m){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    for(int i = 0 ; i<n ; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}

void PrintMatrix(const vector<vector<int>> &arr) {
    for (auto &row : arr) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
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
    RotateArrayby90Degreesoptimal(arr, n, m);

    cout << "Rotated Matrix:\n";
    PrintMatrix(arr);
}


/*

3 3
1 2 3
4 5 6
7 8 9
Rotated Matrix:
7 4 1 
8 5 2 
9 6 3 

*/