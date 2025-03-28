#include<iostream>
using namespace std;

void printNos(int n) {
    if (n == 0) 
    return; // Base case

    printNos(n - 1); // Recursive call
    cout << n << " "; // Print the number
}

int main(){
    int n;
    cin>>n;
    printNos(n);
}