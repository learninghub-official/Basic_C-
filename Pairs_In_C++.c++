#include<iostream>
#include <utility>
using namespace std;

void explainPairs(){
    pair<int, int> p = {1,2};
    cout << "The pairs are: " <<p.first<<" , "<<p.second << endl;

    pair<int, pair<int,int>> k = {2,{3,4}};
    cout << "The pairs are: " <<k.first<<" , "<<k.second.first <<","<<k.second.second<< endl;
}

int main(){
    explainPairs();
}



