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

/*

| Method             | Extra Space Used   | Works on Non-square? | Speed   | Notes                              |
| ------------------ | ------------------ | -------------------- | ------- | ---------------------------------- |
| Brute Force        | ✅ Yes (temp\[]\[]) | ✅ Yes                | Fast    | Easy to understand                 |
| Optimal (In-place) | ❌ No (in-place)    | ❌ No (square only)   | Fastest | Requires transposing and reversing |


*/

// Explained here  

// #include<iostream>
// #include<vector>
// #include<algorithm> // For reverse()
// using namespace std;

// // 🔁 Brute Force Method: Uses extra space
// void RotateArrayby90DegreesBrute(vector<vector<int>> &arr, int n, int m){

//     /* HERE: Brute Force Logic
//        1. Create a temporary matrix of size m x n (flipped dimensions).
//        2. Place each element of the original matrix in its new rotated position.
//           Rule: arr[i][j] goes to temp[j][n - 1 - i]
//           This means the row becomes column, and the column becomes reversed row.
//        3. Copy the rotated temp matrix back to original arr.
//     */

//     vector<vector<int>> temp(m, vector<int>(n));  // Step 1: Create temp matrix

//     for(int i = 0; i < n; i++){                  // Step 2: Traverse original matrix
//         for(int j = 0 ; j < m ; j++){
//             temp[j][n - 1 - i] = arr[i][j];      // Rotate element to new position
//         }
//     }

//     arr = temp;  // Step 3: Update original matrix with rotated one
// }

// // 🔁 Optimal Method: In-place rotation for square matrix
// void RotateArrayby90Degreesoptimal(vector<vector<int>> &arr, int n, int m){

//     /* HERE: Optimal Logic (Only for square matrices)
//        Step 1: Transpose the matrix
//           - Flip the matrix over its diagonal.
//           - Swap arr[i][j] with arr[j][i] for i < j.

//        Step 2: Reverse each row
//           - After transpose, each row is reversed to complete the 90° rotation.

//        Example: 3x3 matrix
//        Original:        After Transpose:     After Reverse Each Row:
//        1 2 3            1 4 7                7 4 1
//        4 5 6   --->     2 5 8        --->    8 5 2
//        7 8 9            3 6 9                9 6 3
//     */

//     // Step 1: Transpose the matrix
//     for(int i = 0 ; i < n-1 ; i++){
//         for(int j = i+1 ; j < n ; j++){
//             swap(arr[i][j], arr[j][i]); // Swap upper triangle with lower triangle
//         }
//     }

//     // Step 2: Reverse each row
//     for(int i = 0 ; i < n ; i++){
//         reverse(arr[i].begin(), arr[i].end()); // Reverse all elements in row i
//     }
// }

// // 🖨️ Function to print the matrix
// void PrintMatrix(const vector<vector<int>> &arr) {
//     for (auto &row : arr) {
//         for (auto val : row) {
//             cout << val << " ";
//         }
//         cout << "\n";
//     }
// }

// // 🧠 Main Function
// int main(){
//     int n, m;
//     cin >> n >> m;  // Input number of rows and columns

//     // Create 2D vector and take input
//     vector<vector<int>> arr(n, vector<int>(m));
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < m ; j++){
//             cin >> arr[i][j];
//         }
//     }

//     // Uncomment one of the below based on method you want to test:

//     // Brute Force Rotation
//     // RotateArrayby90DegreesBrute(arr, n, m);

//     // Optimal In-Place Rotation (Only works for square matrices)
//     RotateArrayby90Degreesoptimal(arr, n, m);

//     // Output the rotated matrix
//     cout << "Rotated Matrix:\n";
//     PrintMatrix(arr);

//     return 0;
// }
