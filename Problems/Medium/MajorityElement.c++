#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

void MajorityElement(vector<int>& arr) {
    int n = arr.size();
    for(int i =0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if(count>n/2){
            cout<<arr[i];
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    MajorityElement(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}