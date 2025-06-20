#include <iostream>
using namespace  std;

//command : g++ conditional.cpp -o conditional.exe;.\conditional.exe

int main(){

//   int n;
//    cout << "Enter The Value of n : ";
//    cin >>n;
// if (n<=10)
// {
//    cout<< "n is less then 10";
// }else{
//     cout<< "n is grater then 10";
// }

// int marks;
// cout<<"Enter Marks : ";
// cin>>marks;
// if(marks>=90){
//     cout<<"A";
// }else if(marks>=80 && marks<90){
// cout << "B";
// }else{
//     cout << "C";
// }

//Find character lowercase or uppercase
// char ch;
// cout<< "Enter Character :  ";
// cin>> ch;
// if(ch>='A' && ch<='Z'){
//     cout << "Uppercase";
// }else{
//     cout<< "Lowercase";
// }

// char ch;
// cout<< "Enter Character :  ";
// cin>> ch;
// if(ch>=65 && ch<=90){
//     cout << "Uppercase";
// }else{
//     cout<< "Lowercase";
// }

int n;
cout << "Enter The value of n : ";
cin>> n;
cout << (n>=0 ? "Positive" : "Negetive");

    return 0;
}