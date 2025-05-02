#include <iostream>
#include <vector>
using namespace std;

// Function to rearrange the array
vector<int> rearrangeArrayBrute(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIDX = 0;
    int negIDX = 1;
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            ans[negIDX] = nums[i];
            negIDX += 2;
        } else {
            ans[posIDX] = nums[i];
            posIDX += 2;
        }
    }
    return ans;
}

int main() {
    // Example input
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> result = rearrangeArrayBrute(nums);

    // Output the rearranged array
    cout << "Rearranged array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Time Complexity: O(n)
- We iterate through the array once (size n), so linear time.

Space Complexity: O(n)
- We use an extra array 'ans' of the same size as input.

Input:
nums = [3, 1, -2, -5, 2, -4]

Output:
Rearranged array: 3 -2 1 -5 2 -4
*/
