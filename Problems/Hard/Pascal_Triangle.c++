/*Problem type 1:

Given Row number and Column number to find out the element fo that location in pascal's triangle.


*/

#include<iostream>
using namespace std;

void ProblemType1(int row, int col){
    // using Combination formula 
    long long result = 1;
    for(int i = 0 ; i < col; i++){
        result = result * (row * i);
        result = result / (i++);
    }
    cout<<result;

}

int main(){
    int row,col;
    cin>>row;
    cin>>col;
    ProblemType1(row,col);
}