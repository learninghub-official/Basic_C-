#include <iostream>
#include <vector>
#include <unordered_map> // for better approach
using namespace std;

void MajorityElementBrute(int arr[], int n) {
    bool found = false;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > n / 2) {
            cout << "Majority element is: " << arr[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No majority element found!" << endl;
    }
}

void MajorityElementBetter(int arr[], int n) {
    bool found = false;
    unordered_map<int, int> countMap;

    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }

    for (auto it : countMap) {
        if (it.second > n / 2) {
            cout << "Majority element is: " << it.first << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No majority element found!" << endl;
    }
}

int MajorityElementOptimized(int arr[], int n) {
    int cnt = 0;
    int el = -1;

    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        } else if (arr[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) {
            cnt++;
        }
    }

    if (cnt > n / 2) {
        cout << "Majority element is: " << el << endl;
        return el;
    } else {
        cout << "No majority element found!" << endl;
        return -1;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Uncomment the one you want to test:
    // MajorityElementBrute(arr, n);
    // MajorityElementBetter(arr, n);
    MajorityElementOptimized(arr, n);

    return 0;
}











