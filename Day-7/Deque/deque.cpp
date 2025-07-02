#include <iostream>
// #include <deque>
// #include <vector>
// #include <stack>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // deque<int> dq = {1,3,6,5,9};

    // for (auto it =  dq.begin();it !=dq.end(); it++){
    //     cout << *(it) << " ";
    // // }
    // pair<int,int> p ={3,6};
    // pair<char,int> p1 ={'A',6};
    // pair<char,pair<int,int>> p2 ={'A',{3,6}};
    // cout << p2.second.first << " ";

    // vector<pair<int,int>> vec = {{1,2},{3,9},{8,9},{7,6}};
    // for(auto p : vec){
    //     cout << p.first << " " << p.second << endl;
    // }

    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // stack<int>s1;
    // s1.swap(s);

    // cout << "Size of s : " << s.size() << endl;
    // cout << " Size of s1 : " << s1.size() << endl;

    // queue<int> q;
    // priority_queue<int,vector<int>,greater<int>> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // cout << q.front()<< endl;
    
    // q.pop();
    // cout << q.front() << endl;

    // while (!q.empty())
    // {
    //     cout << q.top() << " ";
    //     q.pop();
    // }

    // map<string,int>m;
    // m["Laptop"] = 1000;
    // m["Phone"] = 500;
    // m["Tablet"] = 300;

    // // for(auto p : m){
    // //     cout<< p.first << " : " << p.second << endl;
    // // }
    // if(m.find("Laptop") !=m.end()){
    //     cout << "Laptop is present in the map" << endl;
    // }else{
    //     cout << "Not Found" << endl;
    // }

    // -------multimap--------
//     multimap<string,int>m;
//     m.emplace("car",1000);
//     m.emplace("car",1000);
//     m.emplace("car",1000);
//     m.emplace("car",1000);
//     m.emplace("car",1000);
//     m.emplace("car",1000);
//     m.emplace("car",1000);
//     m.emplace("car",1000);

// for(auto p : m){
//         cout<< p.first << " : " << p.second << endl;
//     }

//     unordered_map<string,int>m;
//     m.emplace("car",1000);
//     m.emplace("cycle",10);
//     m.emplace("Plane",5000);
//     m.emplace("Train",100);
//     m.emplace("Bike",500);
//     m.emplace("Suzuki",800);

// for(auto p : m){
//         cout<< p.first << " : " << p.second << endl;
//     }

// set<int> s;
// s.insert(5);
// s.insert(2);
// s.insert(78);
// s.insert(3);
// s.insert(3);
// s.insert(59);
// s.insert(45);
// s.insert(20);

// for(auto set  : s){
//     cout << set << " ";
// }
//  cout << *s.lower_bound(47) << endl;

vector<int>vec ={5,56,98,7,6,23,6,4,32,25,45};
sort(vec.begin(),vec.end(),greater<int>());
for(auto it = vec.begin();it !=vec.end();it++){
    cout << *it << " ";
}


    return 0;
}
