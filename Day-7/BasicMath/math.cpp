
#include <iostream>
#include<math.h>
using namespace std;

int reverseNum(int n){
    
    int reverse = 0;
    while(n>0){
        int modula = n%10;
        n /=10;
        reverse = reverse*10 + modula;
    }
    return reverse;
}

bool palindromNum(int n){
    int dup = n;
    int reverse = 0;
    while(n>0){
        int modula = n%10;
        n /=10;
        reverse = reverse*10 + modula;
    }
    if(reverse == dup){
        return true;
    }else{
        return false;
    }
}

bool armsTrongNum(int n){
    int dup =n;
    int count = (int)log10(n)+1;
    int armsNum =0;
    while(n>0){
        int lastDigit = n%10;
        n/=10;
        armsNum+=pow(lastDigit,count);
    }
    if(armsNum == dup){
        return true;
    }else{
        return false;
    }
}

int main() {
    
    cout<<armsTrongNum(153)<<endl;

    return 0;
}