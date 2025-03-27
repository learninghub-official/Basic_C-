#include<iostream>
using namespace std;

void extractionOfDigits(){
    int n = 7789;
    cout<<n<<endl;
    // int lastDigit; 
    // lastDigit = n%10;
    // cout << "Last digit: "<<lastDigit << endl;
    // n = n/10;
    // int Lastsecond = n%10;
    // cout << "last second digit: "<<Lastsecond << endl;
    // n = n/10;
    // int LastThird = n%10;
    // cout<<"Last third digit: "<<LastThird<<endl;
    // n = n/10;
    // int LastFourth = n%10;
    // cout<<"Last fourth digit: "<<LastFourth<<endl;

    // or  

    while(n>0){
        int lastdigit = n%10;
        cout<<lastdigit<<endl;
        n = n/10;
    }

}

void Count_digits(int n){
    // only valid for 10 digit numbers 
    // int count = 0;
    // while(n>0){
    //     // int lastone = n%10;   
    //     count = count+1;
    //     // count++;
    //     n = n/10;                      
    // }
    // cout<<"Number of digits: "<<count<<endl;


    // using log 

    int count = int(log10(n)+1);
    cout<<"Number of digits: "<<count<<endl;

}

// Given a positive integer n, count the number of digits in n that divide n 
// evenly (i.e., without leaving a remainder). Return the total number of such digits.

// A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
// Digits of n should be checked individually. If a digit is 0, 
// it should be ignored because division by 0 is undefined.

// Input: n = 12
// Output: 2
// Explanation: 1, 2 when both divide 12 leaves remainder 0.

// Input: n = 2446
// Output: 1
// Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

// void Count_Digits1(int n){
//     int count = 0;
    
//     while(n > 0){
//         int lastdigit = n % 10;  // Extract last digit
//         cout << "Last digit: " << lastdigit << endl;
        
//         // Mistake: Checking divisibility with the modified 'n' instead of the original number.
//         // Once 'n' is modified in the loop, it does not represent the original number anymore.
//         // Fix: Store the original number before the loop and use it for the divisibility check.
//         if (lastdigit != 0 && n % lastdigit == 0){
//             count = count + 1;
//         }
//         n = n / 10;  // Remove last digit
//         // Unnecessary commented-out code
//         // else cout<<"0"<<endl;
//     }
//     cout << "Divisor Count: " << count << endl;
// }

void Count_Digits1(int n) {
    int original = n; // Store original number
    int count = 0;

    while (n > 0) {
        int lastdigit = n % 10; // Extract last digit

        // Check divisibility while avoiding division by zero
        if (lastdigit != 0 && original % lastdigit == 0) {
            count++;
        }

        n /= 10; // Remove last digit
    }

    cout << "Divisor Count: " << count << endl;
}

int main(){
    int n;
    cin>> n;
    // extractionOfDigits();
    // Count_digits(n);
    Count_Digits1(n);
}
