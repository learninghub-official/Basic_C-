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

int main(){
    int n;
    cin>> n;
    // extractionOfDigits();
    Count_digits(n);
}
