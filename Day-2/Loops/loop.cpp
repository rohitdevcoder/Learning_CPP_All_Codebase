#include <iostream>
using namespace std;

int main(){
//   int count=1;
//   while (count<=5){
//     cout << count;
//     cout << '\t';
//     count++;
//   }

// for (int count = 1; count <=10 ; count++){
//     cout << count << " ";
// }

//Sum of numbers from 1 to n
// int n,sum=0;
// cout << "Enter The value of n : ";
// cin>>n;
// for (int i = 0; i <=n; i++)
// {
//     sum = sum + i;
// }
// cout << "The sum of 1 to " << n << " is : "<< sum;

// Sum of all odd numbers from 1 to N
// int N,oddSum = 0;
// cout<< "Enter The Value of N : ";
// cin>> N;
// for (int i = 1; i<=N;i++){
// if(i%2 !=0){
// oddSum +=i;
// }
// }
// cout<< " The odd sum From 1 to " << N << " is : " << oddSum;

// Sum of all Even numbers from 1 to N
// int N,evenSum = 0;
// cout<< "Enter The Value of N : ";
// cin>> N;
// for (int i = 1; i<=N;i++){
// if(i%2 ==0){
// evenSum +=i;
// }
// }
// cout<< " The even sum From 1 to " << N << " is : " << evenSum;

//Check if a number is Prime or Not.
//  int N;
//  cout << "Enter a number N : ";
//  cin>>N;
//  bool isPrime = true;
//  for(int i=2;i<=N-1;i++){
//     if(N%i==0){
//         isPrime=false;
//         break;
//     }
//  }
//  if (isPrime==true)
//  {
//     cout<< "The number is a Prime Number";
//  }else{
//     cout << "The number is a non-prime number";
//  }

//  int N;
//  cout << "Enter a number N : ";
//  cin>>N;
//  bool isPrime = true;
//  for(int i=2;i*i<=N;i++){
//     if(N%i==0){
//         isPrime=false;
//         break;
//     }
//  }
//  if (isPrime==true)
//  {
//     cout<< "The number is a Prime Number";
//  }else{
//     cout << "The number is a non-prime number";
//  }

//Nested Loops
int N=5,M=10;
for (int i=1;i<=N;i++){
    for(int j=1;j<=M;j++){
        cout<<"*";
    }
    cout <<endl;
}
 
return 0;
}