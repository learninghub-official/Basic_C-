#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> LeaderInTheArrayBrute(vector<int> &arr, int n) {
    vector<int> leaders;

    // Brute-force approach: for each element, check if it's greater than all to its right
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader == true) {
            leaders.push_back(arr[i]);
        }
    }

    return leaders;
}

vector<int> LeaderInTheArrayOptimized(vector<int> &arr, int n){

}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // vector<int> result = LeaderInTheArrayBrute(arr, n);
    vector<int> result = LeaderInTheArrayOptimized(arr, n);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


/*
6
10 22 12 3 0 6
22 12 6
*/