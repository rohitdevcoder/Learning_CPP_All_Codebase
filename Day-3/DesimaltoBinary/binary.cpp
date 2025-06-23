#include <iostream>
using namespace std;

int desimalToBinary(int num){
    int power = 1 ,binary=0;
    while(num>0){

    int remainder = num%2;
    num /=2;

    binary = (remainder*power);
    power*=10;
    }
    return binary;

}

int main(){
cout<< "Binary of 32 is : "<< desimalToBinary(32)<<endl;

    return 0;
}