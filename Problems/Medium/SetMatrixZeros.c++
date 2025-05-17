#include <iostream>
using namespace std;

const int MAX = 100; // max size for array

/*  
void markRow(int arr[][MAX], int n, int m, int row) {
    for (int j = 0; j < m; j++) {
        if (arr[row][j] != 0) {
            arr[row][j] = -1;
        }
    }
}

void markColumn(int arr[][MAX], int n, int m, int col) {
    for (int i = 0; i < n; i++) {
        if (arr[i][col] != 0) {
            arr[i][col] = -1;
        }
    }
}

void SetMatrixZerosBrute(int arr[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                markRow(arr, n, m, i);
                markColumn(arr, n, m, j);
            }
        }
    }
    
    // Change all -1 to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == -1) {
                arr[i][j] = 0;
            }
        }
    }
}

*/

// void SetMatrixZerosBetter(int arr[][MAX], int n, int m) {
//     // int row[n] = {0};
//     // int col[m] = {0};

//     vector<int> row(n, 0);
//     vector<int> col(m, 0);

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (arr[i][j] == 0) {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if(row[i] || col[j]){
//                 arr[i][j] = 0;
//             }
//         }
//     }
// }

void SetMatrixZerosOptimal(int arr[][MAX], int n, int m){
    //this apporach of Striver's is confusing, will understande later which is i don't know when will come 
}

void printMatrix(int arr[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int arr[MAX][MAX];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // SetMatrixZerosBrute(arr, n, m);
    // SetMatrixZerosBetter(arr, n, m);
    SetMatrixZerosOptimal(arr, n, m);

    printMatrix(arr, n, m);

    return 0;
}

/*


4 5
1 1 1 1 1
1 1 1 1 1
1 1 0 1 1
1 1 1 1 1

11011
11011
00000
11011

*/