#include <iostream>
#include <vector>
using namespace std;

// Function to rearrange the array

vector<int> rearrangeArrayBrute(vector<int>& nums) {
    vector<int> posArr;
    vector<int> negArr;
    vector<int> finalArr(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            posArr.push_back(nums[i]);
        } else {
            negArr.push_back(nums[i]);
        }
    }

    int idx = 0;
    for (int i = 0; i < posArr.size(); i++) {
        finalArr[idx++] = posArr[i];
        finalArr[idx++] = negArr[i];
    }

    return finalArr;
}


// wrong approach with this output
// Enter the number of elements: 6
// Enter 6 integers (positive and negative): 3 1 -2 -5 2 -4
// Rearranged array: 0 0 0 0 0 0 0 0 0 0 0 0 3 -2 1 -5 2 -4 
// vector<int> rearrangeArrayBrute(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> posArr(n/2, 0);
//     vector<int> negArr(n/2, 0);
//     vector<int> finalArr(n, 0);


//     for(int i = 0 ; i < n ; i++){
//         if(nums[i]>0){
//             posArr.push_back(nums[i]);
//         }
//         else{
//             negArr.push_back(nums[i]);
//         }
//     }
//     for(int i = 0 ; i < n ; i++){
//         finalArr.push_back(posArr[i]);
//         finalArr.push_back(negArr[i]);

//     }
//     return finalArr;
// }
vector<int> rearrangeArrayoptimized(vector<int>& nums) {
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

    // vector<int> result = rearrangeArrayoptimized(nums);
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
