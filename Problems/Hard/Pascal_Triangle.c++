/*Problem type 1:

Given Row number and Column number to find out the element fo that location in pascal's triangle.
Explaination:

// Function to calculate the element at a specific row and column in Pascal's Triangle.
// Pascal's Triangle uses 1-based indexing for both rows and columns.
// The element at row r and column c is given by the binomial coefficient C(r-1, c-1).
// This is because the 0th row of Pascal's triangle corresponds to C(0, 0), C(0, 1), etc.

// Check for invalid inputs:
// - col > row is invalid (there is no such element).
// - row <= 0 or col <= 0 is invalid as Pascal's Triangle starts from 1.

// We compute C(n, r) = C(row-1, col-1) using an iterative method to avoid large factorials.
// Initialize result as 1 (C(n, 0) = 1).
// Use the multiplicative formula:
// C(n, r) = C(n, r-1) * (n - r + 1) / r
// Or in a loop:
// result = result * (n - i) / (i + 1), for i = 0 to r - 1

// The loop avoids overflow and is more efficient than computing factorials directly.


*/

#include<iostream>
using namespace std;

void ProblemType1(int row, int col){
    // using Combination formula 

    if (col > row || row <= 0 || col <= 0) {
        cout << "Invalid input";
        return;
    }

    long long result = 1;
    int n = row-1;
    int r = col-1;

    for(int i = 0 ; i < r; i++){
        result = result * (n - i);
        result = result / (i+1);
    }
    cout<<result<<endl;

}

int main(){
    int row,col;
    cin>>row;
    cin>>col;
    ProblemType1(row,col);
}