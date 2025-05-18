#include<iostream>
#include<vector>
using namespace std;

void SpiralTraversalOfMatrixOptimal(vector<vector<int>> &arr, int n, int m) {
    int left = 0, right = m - 1, top = 0, bottom = n - 1;
    vector<int> ans;

    while (top <= bottom && left <= right) {
        // Traverse from Left to Right (Top row)
        for (int i = left; i <= right; i++) {
            ans.push_back(arr[top][i]);
        }
        top++;

        // Traverse from Top to Bottom (Right column)
        for (int i = top; i <= bottom; i++) {
            ans.push_back(arr[i][right]);
        }
        right--;

        // Traverse from Right to Left (Bottom row)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        // Traverse from Bottom to Top (Left column)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }

    // Print the result
    cout << "Spiral Traversal:\n";
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    SpiralTraversalOfMatrixOptimal(arr, n, m);

    return 0;
}


/*

3 3
1 2 3
4 5 6
7 8 9


*/


// #include<iostream>
// #include<vector>
// using namespace std;

// /* 
//     Function: SpiralTraversalOfMatrixOptimal
//     Purpose: Print the matrix elements in spiral (clockwise) order.
// */
// void SpiralTraversalOfMatrixOptimal(vector<vector<int>> &arr, int n, int m) {

//     // Initialize four pointers to represent the boundaries of the matrix
//     int left = 0, right = m - 1, top = 0, bottom = n - 1;

//     // Vector to store the elements in spiral order
//     vector<int> ans;

//     // Loop until all layers (or boundaries) of the matrix are covered
//     while (top <= bottom && left <= right) {

//         // 1️⃣ Traverse from Left to Right along the top row
//         // Example: If top = 0, left = 0, right = 2 → add arr[0][0], arr[0][1], arr[0][2]
//         for (int i = left; i <= right; i++) {
//             ans.push_back(arr[top][i]);
//         }
//         top++;  // Move the top boundary downward (next inner row)

//         // 2️⃣ Traverse from Top to Bottom along the rightmost column
//         // Example: If right = 2, top = 1, bottom = 2 → add arr[1][2], arr[2][2]
//         for (int i = top; i <= bottom; i++) {
//             ans.push_back(arr[i][right]);
//         }
//         right--;  // Move the right boundary leftward (next inner column)

//         // 3️⃣ Traverse from Right to Left along the bottom row (only if rows remain)
//         // Check is necessary because after updating 'top', the matrix might be empty row-wise
//         // Example: If bottom = 2, right = 1, left = 0 → add arr[2][1], arr[2][0]
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--) {
//                 ans.push_back(arr[bottom][i]);
//             }
//             bottom--;  // Move the bottom boundary upward
//         }

//         // 4️⃣ Traverse from Bottom to Top along the leftmost column (only if columns remain)
//         // Check is necessary because after updating 'right', matrix might be empty column-wise
//         // Example: If left = 0, bottom = 1, top = 1 → add arr[1][0]
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--) {
//                 ans.push_back(arr[i][left]);
//             }
//             left++;  // Move the left boundary rightward
//         }
//     }
//     // Print the spiral order result
//     cout << "Spiral Traversal:\n";
//     for (int val : ans) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     // Declare and read the matrix
//     vector<vector<int>> arr(n, vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Perform spiral traversal
//     SpiralTraversalOfMatrixOptimal(arr, n, m);

//     return 0;
// }
