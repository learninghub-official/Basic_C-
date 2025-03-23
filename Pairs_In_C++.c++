#include<iostream>
#include <utility>
using namespace std;

void explainPairs(){
    pair<int, int> p = {1,2};
    cout << "The pairs are: " <<p.first<<","<<p.second << endl;

    pair<int, pair<int,int>> k = {2,{3,4}};
    cout << "The pairs are: " <<k.first<<","<<k.second.first <<","<<k.second.second<< endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6},{7,8}};
    cout<< "The pairs in arrya are: " <<arr[0].first<<","<<arr[1].second<<","<<arr[2].first<<","<<arr[3].first<< endl;
} 

// void explainVectors(){
//     vector <int> v;
//     v.emplace_back(4);
//     v.push_back(3);

//     vector<pair<int,int>> vp;
//     vp.emplace_back(1,2);
//     vp.push_back({6,7});

//     vector<int> v(5,100);    // {100,100,100,100,100}
//     vector<int> v(5);
//     v.push_back(7);

//     vector<int> v1(5,20);
//     vector<int> v(v1);

//     vector<int>::iterator it = v.begin();
//     it++;
//     cout<< *(it)<< " ";
// }

void explainVectors() {
    // how to declare a vector

    vector<int> v(5,100); // {100,100,100,100,100}
    v.push_back(7);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    vector<pair<int, int>> vp;
    vp.emplace_back(1,2);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    // how to iterate a vector

    vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << " " <<endl;
    // it = it+2;
    // cout << *(it) << " " <<endl;

    // how to print a vector

    for(vector<int>::iterator it = v.begin() ; it != v.end(); it++){
        // cout<< *(it)<<" " <<endl;
    }

    // or 

    for(auto it = v.begin() ; it != v.end() ; it++){
        // cout<< *(it)<<" " <<endl;
    }

    // or   

    for(auto it: v){
        // cout<< it <<" " <<endl;
    } 

    // how to erase elements from a vector

    v.erase(v.begin() + 1);

    v.erase(v.begin()+1 , v.begin()+3);

    for(auto it: v){
        cout<< it <<" " <<endl;
    } 
}
int main(){
    // explainPairs();
    explainVectors();
}



