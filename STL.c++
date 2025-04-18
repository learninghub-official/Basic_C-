// STL (C++):
// The Standard Template Library is a software library for the C++ programming language. 
// It provides a set of generic algorithms, containers, functors, and iterators. 
// The STL is designed to be efficient and flexible, allowing developers to work with various 
// data structures and algorithms without having to implement them from scratch. 



#include<iostream>
#include <utility>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
// #include <functional>      

using namespace std;

// Here we are studing Container 


// Container is a collection of elements
// Container is a class that can hold a collection of elements
// Container is a class that can hold a collection of elements of same data type
// Container is a class that can hold a collection of elements of different data type
// Container is a class that can hold a collection of elements of different data type and size


// 1. Pairs


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

// 2. Vectors 

void explainVectors() {
    // how to declare a vector

    // vector<int> v(5,100); // {100,100,100,100,100}
    vector<int> v;
    v.push_back(7);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    vector<pair<int, int>> vp;
    // vp.emplace_back(1,2);

    // vector<int> v1(5,20);
    // vector<int> v2(v1);

    // how to iterate a vector

    // vector<int>::iterator it = v.begin();
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

    // v.erase(v.begin() + 1);

    // v.erase(v.begin()+1 , v.begin()+3);

    for(auto it: v){
        cout<< it <<" " <<endl;
    } 


    // how to insert in the vector
    cout<<"After Insertion in vector"<<endl;
    v.insert(v.begin()+1,23);  // insertion for single element 
    v.insert(v.begin()+1,2,45);  // insertion for multiple elements

    // how to copy a vector and paste into another vector

    vector<int> copy(2,20);
    v.insert(v.begin(), copy.begin(), copy.end());

    // How to check the size of a vector 

    cout<<v.size();

    // How to pop the last element from the vector 

    v.pop_back();

    // How to swap two vectors 
    vector<int> v2;
    v.push_back(12);
    v.push_back(13);

    v.swap(v2);

    // How to erase the entire vector 

    v.clear();

    // How to check it the vector is empty or not

    cout<<v.empty();

    for(auto it: v){
        cout<< it <<" " <<endl;
    } 
}

// 3. Lists 

void explainList(){
    // How to declair a list 
    list<int> ls;

    // pushback
    ls.push_back(10);
    // emplace back 
    ls.emplace_back(20);
    // push front 
    ls.push_front(5);
    // emplace front
    ls.emplace_front(15);

    for(auto it: ls){
        cout<< it <<" " <<endl;
    } 

    // Rest function are same a vectors 
    // begin , end , rebegin , rend , clear , insert , size , swap , empty.
}

// 3. Dequeue


void explainDequeue(){
    // How to declair a dequeue
    deque<int> dq;

    // Push 
    dq.push_back(10);

    // Emplace 
    dq.emplace_back(20);
    // Push front
    dq.push_front(5);
    // Emplace front
    dq.emplace_front(15);
    // Pop back
    dq.pop_back();
    // Pop front
    dq.pop_front();

    // back 
    cout<< dq.back() <<endl;
    // front
    cout<< dq.front() <<endl;

    // Rest function are same a vectors 
    // begin , end , rebegin , rend , clear , insert , size , swap , empty.

    for(auto it: dq){
        cout<< it <<" " <<endl;
    }
}

// 3. Stack 

// Stack works on lifo operation "last in first out".

void explainStack(){
    // How to declair a stack
    stack<int> st;
    // Push
    st.push(10);
    // Emplace 
    st.emplace(20);
    // Top
    cout<< st.top() <<endl;
    // Pop
    st.pop();
    // Empty
    cout<< st.empty() <<endl;
    stack<int> st2;

    // Swap 
    st.swap(st2);

}

// Write a explainfunction for queue.
// Queue works on fifo operation which means first in first out.

void explainQueue(){
    // How to declair a queue

    // Also known as Max heap 
    queue<int> q;
    // Push
    q.push(10);
    q.push(20);
    // Front
    cout<< q.front() <<endl;
    // Back
    cout<< q.back() <<endl;
    // Pop
    q.pop();
    // Empty
    cout<< q.empty() <<endl;
    queue<int> q2;
    // Swap
    q.swap(q2);

    // Minimum heap 

    priority_queue<int ,vector<int>, greater<int>> pq;
    pq.push(20);
    pq.push(10);
    pq.push(50);
    pq.push(40);

    cout<< pq.top() <<endl;
}

// Write a explain function for priority queue.
// Priority queue works on priority operation which means highest priority first.
// The data is not in linear fashion and stored as a tree. 

void explainPriorQueue(){
    // How to declair a priority queue
    priority_queue<int> pq;
    // Push
    pq.push(10);
    pq.push(20);
    pq.push(5);
    // Top
    cout<< pq.top() <<endl;
    // Pop
    pq.pop();
    // Empty
    cout<< pq.empty() <<endl;
    priority_queue<int> pq2;
    // Swap
    pq.swap(pq2);
    // Hello Nupur
}

// A Set stors unique values 
// It stors the data in sorted manner
// It does not allow duplicate values
// It is not a linear container , A tree is maintained in this.

void explainSet(){
    // How to declair a set
    set<int> s;
    // Insert
    s.insert(10);
    s.insert(20);
    s.insert(5);
    // Find
    cout<< (*s.find(10)) <<endl;
    // Lower bound
    auto it = s.lower_bound(10);
    cout<< (*it) <<endl;
    // Upper bound
    it = s.upper_bound(10);
    cout<< (*it) <<endl;
    // Erase
    s.erase(10);
    // Empty
    cout<< s.empty() <<endl;
    // Size
    cout<< s.size() <<endl;
    // Clear
    s.clear();
}

void explainMultiset(){
    // A multiset is a container that allows duplicate values
    // It is a set but it allows duplicate values
    // It is also a sorted container
    // It is also a tree based container
    multiset<int> ms;
    // Insert
    ms.insert(10);
    ms.insert(20);
    ms.insert(5);
    ms.insert(10);
    ms.insert(10);
    // Find
    cout<< (*ms.find(10)) <<endl;
    // Lower bound
    auto it = ms.lower_bound(10);
    cout<< (*it) <<endl;
    // Upper bound
    it = ms.upper_bound(10);
    cout<< (*it) <<endl;
    // Erase
    ms.erase(10);

    // ms.erase(ms.find(1), ms.find(1) + 2);
    // Empty
    cout<< ms.empty() <<endl;
    // Size
    cout<< ms.size() <<endl;
    // Clear
    ms.clear();
}

void explainUnorderedSet(){
    // An unordered set is a container that does not allow duplicate values
    // It is an unordered container
    // It is also a hash based container
    unordered_set<int> us;

    // Rest function are same a Sets  

}

void explainMap(){
    // A map is a container that stores elements in a key-value pair
    // It is a sorted container
    // It is also a tree based container
    // It stors unique keys.

    map<int, char> m;
    // Insert
    m.insert({1, 'M'});
    m.insert({2, 'M'});
    m.insert({3, 'N'});
    // Find
    cout<< m[1] <<endl;
    // Lower bound
    auto it = m.lower_bound(1);
    cout<< (*it).first << " " << (*it).second <<endl;
    // Upper bound
    it = m.upper_bound(1);
    cout<< (*it).first << " " << (*it).second <<endl;
    // Erase
    m.erase(1);
    // Empty
    cout<< m.empty() <<endl;
    // Size
    cout<< m.size() <<endl;
    // Clear
    m.clear();

}

void explainMultiMap(){
    // It can stors multiple keys.
    // Only map[key] can not be used here 

}

void explainExtra(){
    // Sorting 
    int arr[4] = {1,5,3,2};
    // declare vector 
    vector<int> v;
    // emplace 
    v.emplace_back(1);
    v.emplace_back(5);
    v.emplace_back(3);
    v.emplace_back(2);

    // sort(arr, arr+4);  // for full arr sorting
    // sort(v.begin(),v.end())   // for vector sorting


    // simple for loop
    // for(int i=0;i<4;i++){
    //     cout<< arr[i]<<endl;
    // }

    // Advance for loop 

    // sort(arr+2,arr+4);   //for portion sorting here arr+4  point to the location after the last item. {1,3,5,2} -> after 2 it is pointing.

    sort(arr, arr+4, greater <int>());   //for sorting in decending order


    for(auto i : arr){
        cout<< i <<" " <<endl;
    } 

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num1 = 9493935935345;
    int cnt = __builtin_popcountll(num1);

    string s = "123";
    do{
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));


    int maxi = *max_element(arr,arr+4);
    

}

int main(){


    // explainPairs();
    // explainVectors();
    // explainList();
    // explainDequeue();
    // explainSet();
    // explainMultiset();
    // explainUnorderedSet();
    explainExtra();

}



