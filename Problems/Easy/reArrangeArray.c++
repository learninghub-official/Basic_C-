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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " integers (positive and negative): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = rearrangeArrayBrute(nums);

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

Sample Input:
Enter the number of elements: 6
Enter 6 integers (positive and negative): 3 1 -2 -5 2 -4

Sample Output:
Rearranged array: 3 -2 1 -5 2 -4
*/
