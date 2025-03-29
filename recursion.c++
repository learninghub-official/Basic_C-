#include<iostream>
using namespace std;

void printNos(int n) {
    if (n == 0) 
    return; // Base case

    printNos(n - 1); // Recursive call
    cout << n << " "; // Print the number
}
void printcounting(int i, int n) {
   
   // Base Condition.
   if(i>n) return;
   cout<<i<<endl;

   // Function call to print i till i increments to n.
   printcounting(i+1,n);

}
void printreversedcounting(int i, int n) {
   
   // Base Condition.
   if(i<1) return;
   cout<<i<<endl;

   // Function call to print i till i Decrement to n.
   printreversedcounting(i-1,n);

}

// Parameterized way to sum till n, using Recursion 

void PrintSum(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    PrintSum(i-1,sum+i);
}
// void PrintFactorial(int n) {
//     if(n == 0)
//     {
//         return;
//     }
 
//     // Problem broken down into 2 parts and then combined.
//     cout<<n*PrintFactorial(n-1);
//  }

void PrintFactorial(int n, int fact = 1) { // Default `fact` value is set to 1 for initial call
    if (n == 0) { // Base case: when `n` becomes 0
        cout << fact << endl; // Print the computed factorial value
        return; // Exit the function
    }
    PrintFactorial(n - 1, fact * n); // Recursive call with `n-1` and updated factorial value
}

int main(){
    int n;
    cin>>n;
    // printNos(n);
    // printcounting(1,n);
    // printreversedcounting(n,0);
    // PrintSum(n,0);
    PrintFactorial(n); // Call the function with `num` as an argument
    return 0; // Return 0 indicating successful program execution
}