#include <iostream>
using namespace std;

// void printHello(){
//     cout <<  "Hello World";
// }

// int sumN(int n){
//     int sum = 0;
//     for(int i =1 ; i<=n;i++){
//         sum += i;
//     }
//     return sum;
// }

// int nFacto(int n){
//     int factorial =1;
//     for(int i = 1; i<=n;i++){
//      factorial=factorial*i;
//     }
//     return factorial;
// }

// int numSum(int num){
//     int digitSum = 0;
//     while(num > 0){
//         int lastDigit = num%10;
//         num /=10;
//         digitSum += lastDigit;
//     }
//     return digitSum;
// }

int  Factorial(int num){
int facto = 1;
for(int i = 1 ; i<=num;i++){
    facto *=i;
}
return facto;
}

int nCr(int n, int r){
    int facto_N = Factorial(n); 
    int facto_R = Factorial(r); 
    int facto_nr = Factorial(n-r); 

    int total = facto_N/(facto_R*facto_nr);
    return total;
}

int main(){
    // cout << sumN(10);
    // cout << nFacto(6);
  // cout << "Number Sum = " << numSum(1562);

  cout << "Calculated value = " << nCr(8,2);

    // printHello();
    return 0;
}