// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of Fibonacci terms: ";
//     cin >> n;  // Take input for number of terms

//     int a = 0, b = 1, fibonacci;

//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < n; i++) {
//         if (i <= 1) {
//             fibonacci = i;  // First two terms are 0 and 1
//         } else {
//             fibonacci = a + b;  // Calculate next term
//             a = b;  // Shift values
//             b = fibonacci;
//         }
//         cout << fibonacci << " ";  // Print Fibonacci number
//     }

//     return 0;
// }



// #include <iostream>

// using namespace std;

// int fibonacci(int n) {
//     if (n == 1 || n == 2) return 1; // Base cases

//     int a = 1, b = 1, next_fib; // First two Fibonacci numbers

//     for (int i = 3; i <= n; i++) { // Start from the 3rd Fibonacci number
//         next_fib = a + b; // Compute the next Fibonacci number
//         a = b; // Shift 'a' to the next
//         b = next_fib; // Shift 'b' to the next
//     }

//     return next_fib; // Return the n-th Fibonacci number
// }

// int main() {
//     int n;
//     cin >> n; // Take user input

//     cout << fibonacci(n) << endl; // Print the result

//     return 0;
// }

// #include <iostream>

// using namespace std;

// void fibonacci(int n) {
//     if (n < 1) return; // Handle invalid input
    
//     int fib[n]; // Declare an array of size 'n'
//     fib[0] = 1; // First Fibonacci number
//     if (n > 1) fib[1] = 1; // Second Fibonacci number

//     // Generate Fibonacci series
//     for (int i = 2; i < n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2]; // Sum of last two numbers
//     }

//     // Print the Fibonacci series
//     for (int i = 0; i < n; i++) {
//         cout << fib[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n; // Take user input

//     fibonacci(n); // Print the full series

//     return 0;
// }


#include <iostream>

using namespace std;

int f(int n) {
    int a = 1, b = 1, fab = 1; // Initialize Fibonacci numbers

    for (int i = 2; i < n; i++) { // Loop from the 3rd Fibonacci number
        fab = a + b; // Compute next Fibonacci number
        a = b; // Move 'a' forward
        b = fab; // Move 'b' forward
    }

    return fab; // Return the n-th Fibonacci number
}

int main() {
    int n;
    cin >> n; // Take input

    cout << f(n) << endl; // Print the n-th Fibonacci number

    return 0;
}
