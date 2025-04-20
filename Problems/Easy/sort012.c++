/*
    Dutch National Flag Algorithm Explanation:

    This algorithm sorts an array containing only 0s, 1s, and 2s in one pass.

    Pointers:
    - low: boundary for 0s
    - mid: current index
    - high: boundary for 2s

    Logic:
    - Swap 0 to the beginning, move low and mid forward
    - Leave 1 in the middle, just move mid forward
    - Swap 2 to the end, move high backward

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

void sortColors(vector<int>& arr) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// implimentation of this problem using class 

// #include <iostream>
// #include <vector>
// #include <algorithm> // for swap

// using namespace std;

// class Solution {
// public:
//     void sortColors(vector<int>& arr) {
//         int low = 0;
//         int mid = 0;
//         int high = arr.size() - 1;

//         while (mid <= high) {
//             if (arr[mid] == 0) {
//                 swap(arr[low], arr[mid]);
//                 low++;
//                 mid++;
//             }
//             else if (arr[mid] == 1) {
//                 mid++;
//             }
//             else { // arr[mid] == 2
//                 swap(arr[mid], arr[high]);
//                 high--;
//             }
//         }
//     }
// };

// int main() {
//     vector<int> nums = {2, 0, 2, 1, 1, 0};

//     Solution sol;
//     sol.sortColors(nums);

//     cout << "Sorted colors: ";
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
