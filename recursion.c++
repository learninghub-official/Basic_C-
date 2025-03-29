#include<iostream> // Include the standard input-output library
using namespace std; // Use the standard namespace to avoid prefixing with std::

// Function to print numbers from 1 to n using recursion
void printNos(int n) {
    if (n == 0)  
        return; // Base case: If n reaches 0, return and stop recursion

    printNos(n - 1); // Recursive call to print numbers from 1 to n-1
    cout << n << " "; // Print the number after recursive call
}

// Function to print counting from `i` to `n`
void printcounting(int i, int n) {
    if(i > n) return; // Base case: If `i` exceeds `n`, stop recursion

    cout << i << endl; // Print the current value of `i`

    printcounting(i + 1, n); // Recursive call with `i+1` to continue counting
}

// Function to print numbers from `i` down to 1 (reverse counting)
void printreversedcounting(int i, int n) {
    if(i < 1) return; // Base case: If `i` is less than 1, stop recursion

    cout << i << endl; // Print the current value of `i`

    printreversedcounting(i - 1, n); // Recursive call with `i-1` to continue decrementing
}

// Function to compute the sum of numbers from 1 to `i` using recursion
void PrintSum(int i, int sum) {
    if(i < 1) { // Base case: When `i` reaches 0
        cout << sum << endl; // Print the accumulated sum
        return; // Stop recursion
    }

    PrintSum(i - 1, sum + i); // Recursive call, adding `i` to `sum`
}

// Function to compute and print the factorial of `n` using recursion
void PrintFactorial(int n, int fact = 1) { // Default `fact` value is set to 1
    if (n == 0) { // Base case: when `n` becomes 0
        cout << fact << endl; // Print the computed factorial value
        return; // Exit the function
    }

    PrintFactorial(n - 1, fact * n); // Recursive call with `n-1` and updated factorial value
}

int main() {
    int n;
    cin >> n; // Take input from the user

    // Uncomment the function you want to execute:

    // printNos(n); // Print numbers from 1 to `n`
    // printcounting(1, n); // Print numbers from 1 to `n`
    // printreversedcounting(n, 0); // Print numbers from `n` to 1
    // PrintSum(n, 0); // Print sum of numbers from 1 to `n`
    PrintFactorial(n); // Print factorial of `n`

    return 0; // Return 0 indicating successful program execution
}
