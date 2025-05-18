#include<iostream>
using namespace std;

void SpiralTraversalOfMatrixOptimal(vector<vector<int>> &arr, int n, int m){
    int  left = 0, right = m-1 , top = 0, bottom = n-1;
    vector<int> ans;
    while(top <= bottom && left <= right){
        for(int i = left ; i<right ; i++){
            ans.push_back(arr[top][i]);
        }
        top ++;
        for(int i = top ; i<bottom ; i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right ; i<left ; i++){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom ; i<top ; i++){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    // return
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
