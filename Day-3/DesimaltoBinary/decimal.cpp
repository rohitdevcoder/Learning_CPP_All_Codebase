#include <iostream>
using namespace std;

int binaryToDecimal(int BiNum){
    int ans = 0, pow=1;
    while(BiNum>0){
        int remainder = BiNum%10;
        ans = remainder*pow;

        BiNum/=10;
        pow *=2;
    }
    return ans;
}

int main(){
cout << "Binary to decimal of 100000 is : "<<binaryToDecimal(100000)<<endl;
    return 0;
}