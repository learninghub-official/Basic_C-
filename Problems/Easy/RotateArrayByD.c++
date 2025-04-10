#include<iostream>
using namespace std;

// this problem does not required any bruteforce or better approach so 
// here is the optimized approach.
// Left rotation 
void RotateByD(int arr[], int n, int d) {
    d = d % n;
    int* temp = new int[d]; // use dynamic array instead of VLA

    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }

    delete[] temp; // free memory
}

// or

void RotateByDReversemethod(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}


int main() {
    int n, d;
    cin >> n >> d;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // RotateByD(arr, n, d);
    RotateByDReversemethod(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}


/*

Input:
7 3
1 2 3 4 5 6 7

Output:
4 5 6 7 1 2 3

*/