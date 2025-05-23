#include <iostream>
using namespace std;

void MissingNumberBrute(int arr[], int n)
{

    // This does'nt work for unsorted array
    // int counter = 1;
    // for(int i = 0 ; i < n-1 ; i++){
    //     if(arr[i] != counter){
    //         cout<<"Missing Number: "<<counter<<endl;
    //         return;
    //     }
    //     counter += 1;
    // }
    // cout << "Missing Number: " << n << endl;

    // Other correct approach
    for (int i = 1; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i;
        }
    }
}

void MissingNumberBetter(int arr[], int n)
{
    // int hashArray[n+1] = {0};     //Not valid in standard C++
    // In standard C++, the size of an array must be known at compile time,
    // but n is only known at runtime — hence the error.

    vector<int> hashArray(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        hashArray[arr[i]] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (hashArray[i] == 0)
        {
            cout << "Missing Element: " << i << endl;
        }
    }
}

// In this code I missed the loop range
// void MissingNumberOptimized(int arr[], int n){
//     int xor1 = 0;
//     int xor2 = 0;
//     for(int i = 1; i<n; i++){
//         xor1 = xor1^i;
//     }
//     for(int i = 0; i<n-1;i++){
//         xor2 = xor2 ^ arr[i];
//     }
//     int ans = xor1 ^ xor2;;
//     cout<<ans<<endl;
// }

// This one is correct , and this is more optimized then
// number sum because it uses less space complexity
void MissingNumberOptimized(int arr[], int n)
{
    int xor1 = 0;
    int xor2 = 0;

    // XOR of all numbers from 1 to n
    // for(int i = 1; i <= n; i++){
    //     xor1 ^= i;
    // }

    // Instead of looping from 0->n we have more optimized approach which is :

    // XOR of all elements in the array (size n-1)
    for (int i = 0; i < n - 1; i++)
    {
        xor2 ^= arr[i];
        // xor1 ^ xor1^(i+1);
        xor1 ^= (i + 1); // Optimized XOR loop: avoids extra iteration
    }
    xor1 = xor1 ^ n;

    int ans = xor1 ^ xor2;
    cout << ans << endl;
}

// this apporach is less confusing 
// void MissingNumberOptimized(int arr[], int n)
// {

//     int xor1 = 0, xor2 = 0;
//     // int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         xor1 ^= i;
//         xor2 ^= arr[i];
//     }
//     xor1 ^= n;
//     int ans = xor1 ^ xor2;
//     cout << ans << endl;
// }

// Here is one more optimized approach for this

void MissingNumberOptimizedWithNumberSum(int arr[], int n)
{
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum2 += arr[i];
    }
    int ans = sum1 - sum2;
    cout << ans << endl;
}

void maxConsecutive(int arr[], int n){
    int maxC = 1;
    int counter = 1;

    for(int i = 1; i<n ;i++){
        if(arr[i] == arr[i-1]){
            counter +=1;
            // maxC = counter;
        }
        else{
            counter = 1;
        }
        if(counter>maxC){
            maxC = counter;
        }
    }
    cout<<maxC<<endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    // MissingNumberBrute(arr,n);
    // MissingNumberBetter(arr,n);
    // MissingNumberOptimized(arr, n);
    // MissingNumberOptimizedWithNumberSum(arr,n);
    maxConsecutive(arr,n);
    return 0;
}
