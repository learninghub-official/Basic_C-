#include<iostream>
#include <utility>
#include <list>

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

    // minimum heap 
    priority_queue<int ,vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
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
}




int main(){
    // explainPairs();
    // explainVectors();
    // explainList();
    explainDequeue();

}



