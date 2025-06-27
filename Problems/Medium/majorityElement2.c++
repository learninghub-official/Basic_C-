#include<iostream>
#include<vector>
using namespace std;

void Approach1BruteForce(int arr[], int n){
    vector<int> ls;
    for(int t = 0; t < n; t++){
        if(ls.size() == 0 || ls[0] != arr[t]){
            int cnt = 0;
            for(int i = 0 ; i < n; i++){
                if(arr[i] == arr[t]){
                    cnt++;
                }
            }
            if(cnt > n/3){
                ls.push_back(arr[t]);
            }
        }
        if(ls.size() == 2){
            break;
        }
    }
    for(auto it : ls){
        cout<<it<<endl;
    }
}

int main(){
    int n ;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    Approach1BruteForce(arr, n);
}

ok
teste