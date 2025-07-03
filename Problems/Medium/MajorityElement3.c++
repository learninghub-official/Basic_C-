#include<iostream>
#include<vector>
#include<map>
using namespace std;

// Brute Force Approach
vector<int> majorityElementBrute(vector<int> v) {
    int n = v.size();
    vector<int> ls;
    for (int i = 0; i < n; i++) {
        if (ls.size() == 0 || (ls.size() == 1 && ls[0] != v[i])) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (v[j] == v[i]) cnt++;
            }
            if (cnt > n / 3) ls.push_back(v[i]);
        }
        if (ls.size() == 2) break;
    }
    return ls;
}

// Hash Map Approach
vector<int> majorityElementHashMap(vector<int> v) {
    int n = v.size();
    vector<int> ls;
    map<int, int> mpp;
    int mini = n / 3 + 1;

    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
        if (mpp[v[i]] == mini) {
            ls.push_back(v[i]);
        }
        if (ls.size() == 2) break;
    }
    return ls;
}

// Boyer-Moore Voting Algorithm (Optimized)
vector<int> majorityElementBoyerMoore(vector<int> v) {
    int n = v.size();
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && v[i] != el2) {
            cnt1 = 1;
            el1 = v[i];
        }
        else if (cnt2 == 0 && v[i] != el1) {
            cnt2 = 1;
            el2 = v[i];
        }
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
    }

    // Final count check
    cnt1 = cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el1) cnt1++;
        if (v[i] == el2) cnt2++;
    }

    vector<int> ls;
    int mini = n / 3 + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini && el2 != el1) ls.push_back(el2);

    return ls;
}

int main() {
    vector<int> arr = {11, 33, 33, 11, 33, 11};

    // cout << "Brute Force: ";
    // for (int x : majorityElementBrute(arr)) cout << x << " ";
    // cout << "\n";

    // cout << "Hash Map: ";
    // for (int x : majorityElementHashMap(arr)) cout << x << " ";
    // cout << "\n";

    cout << "Boyer-Moore Voting: ";
    for (int x : majorityElementBoyerMoore(arr)) cout << x << " ";
    cout << "\n";

    return 0;
}


// this c