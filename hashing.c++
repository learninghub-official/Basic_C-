#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter Array: "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    //  Pre - Computing
    int hash[13] = {0};
    for(int i = 0 ; i<n ; i++){
        hash[arr[i]] += 1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter number of numbers: "<<endl;
        cin>>number;
        // fetching
        cout<<"Count of number \n"<<hash[number]<<endl;
    }
    return 0;
}


// Input: 

// 5
// 1 3 2 1 3
// 5
// 1 4 2 3 12

// Output: 

// 2
// 0


// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
//     return 0;
// }