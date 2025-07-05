#include<iostream>
// #include<string>

using namespace std;

void printName(string a,int n){

if(n==0){
    return;
}
cout << a <<endl;
printName(a,n-1);
}

void printNum(int i,int n){
    // int i=0;
    if(i>n){
        return;
    }
    cout<<i<<endl;
    
    printNum(i+1,n);
}

void printNumNto1(int n,int i){
    // int i=0;
    if(i>n){
        return;
    }
    cout<<n<<endl;
    
    printNumNto1(n-1,i);
}

void printNumbers(int n) {
        // Your code goes here
        if(n==1){
          cout<<1;
          return ;
        }
        cout<<n<<endl;
        printNumbers(n-1);
}

int main(){
// string name = "Rohit Mondal";
// printName(name,5);
// printNum(1,5);
// printNumNto1(5,1);
printNumbers(6);

return 0;
}