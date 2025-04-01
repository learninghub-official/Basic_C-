#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;


    // Pre-computing
    int hash[26] = {0};
    for(int i=0 ; i<s.size(); i++){
        hash[s[i] - 'a']++;      // This is because if the question is said like we have only small letters , else there is no need to substract from 'a'.
    }

    int q;
    cin>>q;
    char c ;
    while(q--){
        
        cin>>c;
        // Fetch
        cout<<hash[c - 'a']<<endl;
    }
}