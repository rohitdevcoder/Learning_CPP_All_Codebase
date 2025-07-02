#include <iostream>
#include<list>

using namespace std;

int main(){
    list<int>myList;
    myList.push_back(10);
    myList.push_back(30);
    myList.push_front(3);
    myList.push_front(4);

    myList.pop_back();
    myList.pop_front();

    for(int l : myList){
        cout<<l << " ";
    }

    return 0;
}