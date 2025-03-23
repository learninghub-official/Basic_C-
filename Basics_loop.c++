#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Taking input for all 5 elements correctly
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // Printing all elements of the array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
