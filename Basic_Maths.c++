#include<iostream>
#include <cctype>  // For tolower() and isalpha()
#include <algorithm> // For reverse()
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
void Reverse_number(int n){
    int final = 0;
    while(n>0){          //7789
        int lastdigit = n % 10;          // here lastdigit = 9
        final = final * 10 + lastdigit;   // here final = 9
        n /= 10;
    }
    cout<<final<<endl;
    
}
void CheckPalindrom(int n){
    int original = n;
    int final = 0;
    while(n>0){          //7789
        int lastdigit = n % 10;          // here lastdigit = 9
        final = final * 10 + lastdigit;   // here final = 9
        n /= 10;
    }
    if (final == original){
        cout<<"Number is Palindrome"<<endl;
    }
    else cout<<"Number is not Palindrome"<<endl;
    // cout<<final<<endl;
    
}
void Armstrong_Number(int n){
    int original = n;
    int sum = 0;
    int lastdigit;
    
    // Count number of digits
    int countDigits = 0, temp = n;
    while (temp > 0) {
        temp /= 10;
        countDigits++;
    }

    // Compute sum of digits raised to the power of countDigits
    temp = n; // Reset temp to original n
    while (temp > 0) {
        lastdigit = temp % 10;
        sum += pow(lastdigit, countDigits);  // Corrected calculation
        temp /= 10;
    }

    cout << "Total: " << sum << endl;

    if (sum == original) {
        cout << "Number is Armstrong" << endl;
    } else {
        cout << "Number is not Armstrong" << endl;
    }
}

void Print_divisors(int n){
    for(int i =1; i<=n;i++){
        if(n%i == 0){
            cout<<i<<endl;
        }
    }
}

void Print_divisors_usingVectors(int n){
    vector<int> v;
    // for(int i =1; i*i<=n;i++){        //other way to loop till squareroot
    for(int i =1; i<=sqrt(n);i++){
        if(n%i == 0){
            v.push_back(i);
            if((n/i) != i){         // This condition eleminate the repeatation of factors to be pushed.
                v.push_back(n/i);
            }
            // cout<<i<<endl;
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v){
        cout<<it<<" ";
    }
}

void Sum_Of_divisors(int n){
    int sum = 0;
    int final_sum = 0;
    for(int i = 1; i<=n;i++){
        // cout<<i;
        for(int j =1; j<= n ; j++){
            if(i%j == 0){
                // cout<<"i = "<<i<<endl;
                // cout<<"j = "<<j<<endl;
                sum = sum+j;
                
            }
        cout<<"Current sum = "<<sum<<endl;
        }
    }
    cout<<"Sum = "<<sum<<endl;
}

void Prime_number(int n){
    int original = n;
    int count = 0;  
    for(int i =1; i*i<=n; i++){             //running loop till Square root of n to reduce the time complexity. else we can loop till n , which is also fine.
        if(n%i == 0){
            count++;
            if((n/i) != 0){                 // This condition eleminate the repeatation of factors to be pushed.
                count++;
            }
        }
    }
    if (count == 2){
        cout<<original<<" It is a prime number"<<endl;
    }
    else{
        cout<<original<<" It is not a prime number"<<endl;
    }
    cout<<"Number of factors of "<<original<<" are "<<count<<endl;
    
}

void HCF_GCD(int n){           // Highest common factor or Greatest common divisor
    int a = n;
    int b;
    cin>>b;

    // This is wrong, I am just testing my logic
    // int big;
    // if(n1>n2){
    //     big = n1;
    // }
    // else big = n2;
    // for (int i =1 ;i<=big; i++){
    //     if(n1%i == 0 && n2%i == 0){
    //         cout<<i;
    //     }

    // }

    // Usign Euclidean Algorithm 

    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if (a==0) cout<<b;
    cout<<a;
}

void reverse_array(int n , int arr[] , int i){
    // This one pointer method is exceeding time limit, use 2 pointer instead.
    if (i >= n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_array(i+1,arr,n);
}
void InputAndOutput_for_reverse_array(int n){
    int arr[n];
    int i;
    for (i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    reverse_array(n,arr,0);
    for (i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
// Wrong approach 
// void CheckPalindrom(string str , int i ,int n) {  
//     if(i >= n/2) { 
//         return;  
//     }

//     swap(str[i], str[n - i - 1]);  // ❌ Mistake 1: Swapping changes the string instead of checking palindrome.

//     CheckPalindrom(str, i + 1, n); // ❌ Mistake 2: `str` is passed by value, so changes do NOT affect the original string.
// }

// void InputandOutput_for_CheckPalindrom() {
//     string str;
//     cin >> str;
//     int n = str.size();
    
//     CheckPalindrom(str, 0, n); // ❌ Mistake 3: Function modifies a copy of `str`, but original `str` remains unchanged.

//     for(int i = 0; i < n; i++) {
//         cout << str[i]; // ❌ Mistake 4: This prints `str`, but since `str` was not modified, it outputs the original input.
//     }

//     string finalstr;
//     finalstr = str; // ❌ Mistake 5: `finalstr` is just a copy of `str`, which is unchanged.
    
//     if(finalstr == str) // ❌ Mistake 6: This comparison is meaningless because `str` was never reversed in the original variable.
//         cout << "True" << endl;
//     else 
//         cout << "False" << endl;
// }

bool CheckPalindrom(string &str, int i, int n) {  
    if (i >= n / 2) return true; // ✅ Base case: If we reach the middle, it's a palindrome.

    if (str[i] != str[n - i - 1]) return false; // ✅ Correctly checking if characters match.

    return CheckPalindrom(str, i + 1, n); // ✅ Recursive call without modifying `str`.
}

void InputandOutput_for_CheckPalindrom() {
    string str;
    cin >> str;
    int n = str.size();
    
    if (CheckPalindrom(str, 0, n)) 
        cout << "True" << endl;
    else 
        cout << "False" << endl;
}

int Fabonaaci(int n){
    if(n<=1) return n;
    int last = Fabonaaci(n-1);
    int slast = Fabonaaci(n-2);
    return last + slast;
}

void checkPalindromPhrase(string s){
    string progresses_string = "";
    for (char ch : s) {
        if (isalpha(ch)) {
            progresses_string += tolower(ch);
        }
    }

    string reversed_str = progresses_string;
    cout<<progresses_string;
    reverse(reversed_str.begin(),reversed_str.end());
    if(progresses_string == reversed_str){
        cout<<"It is a palindrome"<<endl;
    }
    else cout<<"It is not a palindrome"<<endl;
}


void InputOutput_checkPalindromPhrase(){
    string s ;
    getline(cin,s);
    checkPalindromPhrase(s);
}
int main(){
    // int n;
    // cin>> n;
    // extractionOfDigits();
    // Count_digits(n);
    // Count_Digits1(n);
    // Reverse_number(n);
    // CheckPalindrom(n);
    // Armstrong_Number(n);
    // Print_divisors(n);
    // Print_divisors_usingVectors(n);
    // Sum_Of_divisors(n);
    // Prime_number(n);
    // HCF_GCD(n);
    // InputAndOutput_for_reverse_array(n);
    // InputandOutput_for_CheckPalindrom();
    // cout<< Fabonaaci(n);
    InputOutput_checkPalindromPhrase();
    return 0;

}
