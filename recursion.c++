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

int main(){
    int n;
    cin>>n;
    // printNos(n);
    // printcounting(1,n);
    printreversedcounting(n, n);
    return 0;
}