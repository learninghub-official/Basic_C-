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


    RotateArrayby90DegreesBrute(arr, n, m);

    cout << "Rotated Matrix:\n";
    PrintMatrix(arr);
}