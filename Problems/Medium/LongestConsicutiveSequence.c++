#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Properly returns whether the number exists in the array
bool linearSearch(const vector<int>& arr, int NumberToSearch){
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] == NumberToSearch){
            return true;
        }
    }
    return false;
}

// Function to find the length of longest consecutive sequence
int LongestConsecutiveSequenceBrute(vector<int> &arr, int n) {
    int longest = 0;

    for(int i = 0; i < n; i++) {
        int x = arr[i];
        int count = 1;

        while(linearSearch(arr, x + 1)) {
            x = x + 1;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = LongestConsecutiveSequenceBrute(arr, n);
    cout << result << endl;

    return 0;
}


/*

9
102 4 100 1 101 3 2 1 1

4

*/