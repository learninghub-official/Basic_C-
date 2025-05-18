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