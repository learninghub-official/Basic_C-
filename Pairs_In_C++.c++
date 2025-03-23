#include<iostream>
#include <utility>
using namespace std;

void explainPairs(){
    pair<int, int> p = {1,2};
    cout << "The pairs are: " <<p.first<<" , "<<p.second << endl;
}

int main(){
    explainPairs();
}



