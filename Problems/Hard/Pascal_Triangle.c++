// #include<iostream>
// using namespace std;

// /*Problem type 1:

// Given Row number and Column number to find out the element fo that location in pascal's triangle.
// Explaination:

// // Function to calculate the element at a specific row and column in Pascal's Triangle.
// // Pascal's Triangle uses 1-based indexing for both rows and columns.
// // The element at row r and column c is given by the binomial coefficient C(r-1, c-1).
// // This is because the 0th row of Pascal's triangle corresponds to C(0, 0), C(0, 1), etc.

// // Check for invalid inputs:
// // - col > row is invalid (there is no such element).
// // - row <= 0 or col <= 0 is invalid as Pascal's Triangle starts from 1.

// // We compute C(n, r) = C(row-1, col-1) using an iterative method to avoid large factorials.
// // Initialize result as 1 (C(n, 0) = 1).
// // Use the multiplicative formula or Combination Formula: 
// // C(n, r) = C(n, r-1) * (n - r + 1) / r
// // Or in a loop:
// // result = result * (n - i) / (i + 1), for i = 0 to r - 1

// // The loop avoids overflow and is more efficient than computing factorials directly.


// */



// void ProblemType1(int row, int col){
//     // using Combination formula 

//     if (col > row || row <= 0 || col <= 0) {
//         cout << "Invalid input";
//         return;
//     }

//     long long result = 1;
//     int n = row-1;
//     int r = col-1;

//     for(int i = 0 ; i < r; i++){
//         result = result * (n - i);
//         result = result / (i+1);
//     }
//     cout<<result<<endl;

// }

// int main(){
//     int row,col;
//     cin>>row;
//     cin>>col;
//     ProblemType1(row,col);
// }



// ________________________________________________________

/*
    Program: Print the nth Row of Pascal's Triangle
    Description:
    - Efficiently prints the entire nth row (0-based index) of Pascal's Triangle.
    - Uses combinatorial logic to compute binomial coefficients without factorials.

    Logic:
    - C(n, 0) = 1
    - C(n, i) = C(n, i-1) * (n - i) / i
    - This approach avoids recalculating factorials and is time-efficient.

    Example:
    Input: 5
    Output: 1 5 10 10 5 1   // 5th row of Pascal's Triangle (0-indexed)

    Usage:
    - Takes a single integer `n` as input from the user.
    - Prints the entire nth row (0-based index) of Pascal’s Triangle.
*/

// #include<iostream>
// using namespace std;

// void ProblemType2(int n){
//     long long res = 1;
//     cout << res << " ";  // C(n, 0) is always 1

//     for(int i = 1 ; i < n; i++){
//         res = res * (n - i );  // Equivalent to res *= (n - i)
//         res = res / i;            // Divide by i (to get C(n, i))
//         cout << res << " ";
//     }

//     cout << endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     ProblemType2(n);
// }


// ______________________________________________________________
// Problem type 3

/*
    Program: Pascal's Triangle Generator
    Description:
    - Generates Pascal's Triangle up to N rows using a combinatorial approach.
    - Each row is built based on the formula:
        C(n, r) = C(n, r-1) * (n - r) / r
    - This avoids calculating factorials and is more efficient.

    Key Functions:
    1. generateRow(int row):
       - Generates a single row of Pascal's Triangle using the above formula.
       - Uses long long to avoid overflow during intermediate multiplication.

    2. pascalTriangle(int N):
       - Calls generateRow() from 1 to N to build the full triangle.

    Usage:
    - Takes integer input N from the user.
    - Outputs Pascal's Triangle with N rows.
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to generate a specific row in Pascal's Triangle
vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);  // First element is always 1

    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }

    return ansRow;
}

// Function to generate the entire Pascal's Triangle up to row N
vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;

    for (int i = 1; i <= N; i++) {
        ans.push_back(generateRow(i));
    }

    return ans;
}

// Driver code to test the function
int main() {
    int N;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> N;

    vector<vector<int>> triangle = pascalTriangle(N);

    for (const auto& row : triangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
