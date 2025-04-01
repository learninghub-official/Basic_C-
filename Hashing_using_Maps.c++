#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }


    // Pre-computation
    // map<key,value>
    map<int, int> mpp;
    for(int i = 0 ; i<n ; i++){       // incrementing key till n.
        mpp[arr[i]]++;        // counting the number of key and increasing value.
    }
    // Iterating in the map 

    for(auto it : mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // Fetch 
        cout<<mpp[number];
    }
}