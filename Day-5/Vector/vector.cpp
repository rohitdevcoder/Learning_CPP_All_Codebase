#include <iostream>
#include <vector>
using namespace std;

// vector<int> getVec(5,20);


int main(){

vector<int>vec = {1,3,5,6,9,10};

// ---------Iterator-------
// vector<int>::iterator it ;
// for(auto it =vec.begin();it != vec.end(); it++){
//     cout << *(it) << " ";
// }

for(auto it =vec.rbegin();it != vec.rend(); it++){
    cout << *(it) << " ";
}



// vec.erase(vec.begin()+2,vec.begin()+3);
// vec.insert(vec.begin()+2,100);
// vec.clear();
// cout << vec.size() << endl;
// cout << vec.capacity() << endl;
// cout << vec.empty() << endl;
// cout << *(vec.begin())<<endl;
// for(int val :vec){
//     cout << val << " ";
// }

// vector<int> getVec(5,20);
// vector<int> Vec(getVec);
// for(int val : Vec){
//     cout << val << " ";
// }


//   cout << "Helllo World";
// vector<int>vec={1,3,4};
// cout <<vec[2];
// for(int i : vec){
//     cout << i<<endl;
// }

// vector<char>charecter = {'a','b','c','d','e'};
// for(char i : charecter){
// cout << i << " ";
// }

//-------vectror Functions-----
// vector<int>vec={1,3,4};
// cout << "Size of the vector : "<<vec.size();
// vec.push_back(6);
// vec.pop_back();

// for(int i : vec){
// cout << i << " ";
// }
// cout << "Front Value : "<< vec.front()<< endl;
// cout << "Back Value : "<< vec.back()<< endl;
// cout << "1th index Value : "<< vec.at(1)<< endl;


    return 0;
}