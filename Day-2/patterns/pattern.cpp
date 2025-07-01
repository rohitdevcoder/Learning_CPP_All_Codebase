// #include <iostream>
// using namespace std;

// int main(){
//========square patterns=================    
//  int n=4;
//  for(int i =1;i<=4;i++){
//     for(int j=1; j<=4;j++){
//         cout<<j<<"\t";
//     }
//     cout<<endl;
//  }

//  int n=4;
//  for(int i =1;i<=4;i++){
//     char ch = 'A';
//     for(int j=1; j<=4;j++){
//         cout<<ch<<" ";
//         ch = ch +1;
//     }
//     cout<<endl;
//  }

// int n = 4;
// int num = 1;
// for(int i = 0; i<n;i++){
//     for(int j = 0; j<n;j++){
//         cout<<num<< " ";
//         num++;
//     }
//     cout << endl;
// }

// int n = 4;
// char ch = 'A';
// for(int i = 0; i<n;i++){
//     for(int j = 0; j<n;j++){
//         cout<<ch<< " ";
//         ch++;
//     }
//     cout << endl;
// }
// ==================================


//--------triangle pattern------------
// int n= 4;
// char ch = '*';

// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//     cout << ch << " ";
//     }
//     cout << endl;
// }

// int n= 4;
// char ch = 'A';

// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//     cout << ch << " ";
//     ch++;
//     }
//     cout << endl;
// }

// int n= 10;
// int num =  1;

// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//     cout << num << " ";
//     num++;
//     }
//     cout << endl;
// }

// int n= 4;
// char ch = 'A';

// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//     cout << ch<< " ";
 
//     }
//     ch++;
//     cout << endl;
// }

// int n= 4;

// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//     cout << j+1<< " ";
//     }
//     cout << endl;
// }

// ------------Reverse Triangle-----------

// int n= 4;

// for(int i=0;i<n;i++){
//     for(int j=i+1;j>0;j--){
//     cout << j<< " ";
//     }
//     cout << endl;
// }

//Floyd's Triangle Pattern------
// int n=4;
// int num =1;
// for(int i=0;i<n;i++){
//     for(int j = 0; j<i+1;j++){
//         cout << num << " ";
//         num++;
//     }
//     cout << endl;
// }


// int n=4;
// char ch = 'A';
// for(int i=0;i<n;i++){
//     for(int j = 0; j<i+1;j++){
//         cout << ch<< " ";
//         ch++;
//     }
//     cout << endl;
// }


// int n = 4;
// int num =1;

// for(int i = 0;i<n;i++){
//     for(int j = 0;j<i;j++){
//         cout << " ";
//     }

//     for(int k=0;k<n-i;k++){
//         cout<<(i+1);
//     }
//     cout << endl;
// }


// int n = 4;
// char ch = 'A';

// for(int i = 0;i<n;i++){
//     for(int j = 0;j<i;j++){
//         cout << " ";
//     }

//     for(int k=0;k<n-i;k++){
//         cout<<ch;
//         ch++;
//     }
//     cout << endl;
// }

// int n = 8;

// for(int i = 0;i<n;i++){
// //spaces : n-i-1
// for(int j = 0; j<n-i-1;j++){
//     cout<<" ";
// }

// //set 1 : 1 to i+1
// for(int k=1;k<=i+1;k++){
//     cout<<k;
// }

// //set 2
// for(int j =i;j>0;j--){
//     cout<<j;
// }
// cout<<endl;
// }

// int n= 4;
// //top
// for(int i =0;i<n;i++){
//     //space
//     for(int j=0;j<n-i-1;j++){
//         cout <<" ";
//     }

//     cout<<'*';
//     if(i!=0){
//         for (int j = 0; j < 2*i-1; j++)
//         {
//            cout << " ";
//         }
//         cout<<'*';
        
//     }
// cout<<endl;

// }

// //bottom
// for (int i = 0; i < n-1; i++)
// {
//  //space
//     for(int j=0;j<i+1;j++){
//         cout <<" ";
//     }

//  cout<<'*';
//  if (i != n-2)
//  { 
//     //spaces

//      for(int j=0;j<2*(n-i)-5;j++){
//         cout <<" ";
//     }
//     cout<< '*';
//  }
//  cout<<endl;
 
// }



//     return 0;
// }



// ========Stiver Patterns Problen=========

#include <iostream>
using namespace std;

// void pattern3(int n){
//     for(int i =0;i<n;i++){
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j+1;
//         }
//         cout << endl;
        
//     }
// }

// void pattern4(int n){
//     for(int i =0;i<n;i++){
//         for (int j = 0; j <= i; j++)
//         {
//             cout << i+1;
//         }
//         cout << endl;
        
//     }
// }

// void pattern5(int n){
//     for(int i =0;i<n;i++){
//         for (int j = 0; j < n-i; j++)
//         {
//             cout <<'*';
//         }
//         cout << endl;
        
//     }
// }

// void pattern6(int n){
//     for(int i =0;i<n;i++){
//         for (int j = 0; j < n-i; j++)
//         {
//             cout <<j+1;
//         }
//         cout << endl;
        
//     }
// }

// void pattern7(int n){
//     for(int i =0;i<n;i++){
//         //spaces
//         for (int j = 0; j < n-i-1; j++)
//         {
//             cout <<" ";
//         }
//         //stars
//          for (int j = 0; j <2*i +1; j++)
//         {
//             cout <<'*';
//         }
//         //spaces
//           for (int j = 0; j < n-i-1; j++)
//         {
//             cout <<" ";
//         }
//         cout << endl;
        
//     }
// }

// void pattern8(int n){
//     for(int i =0;i<n;i++){
//         //spaces
//         for (int j = 0; j <i; j++)
//         {
//             cout <<" ";
//         }
//         //stars
//          for (int j = i; j <2*n -i-1; j++)
//         {
//             cout <<'*';
//         }
//         //spaces
//           for (int j = 0; j <i; j++)
//         {
//             cout <<" ";
//         }
//         cout << endl;
        
//     }
// }

// void pattern9(int n){
//     //First half
//     for(int i =1;i<=n;i++){
//        //character
//        for (int j = 0; j < i; j++)
//        {
//         cout << '*';
//        }
//        cout <<endl;

//     }
//     //Second half
//     for(int i =1;i<=n-1;i++){
//      for(int j =0; j<n-i;j++){
//         cout << '*';
//      }
//      cout <<endl;
//     }
// }

// void pattern11(int n){
//     int start=1;
// for (int i = 0; i < n; i++)
// {
//   if(i%2 ==0){
//     start = 1;
//   }else{start = 0;}
//   for (int j = 0; j <=i; j++)
//   {
//     cout << start;
//     start = 1-start;
//   }
//   cout <<endl;
// }

// }

// void pattern12(int n){
//     int space =2*(n-1);
// for (int i = 0; i <n; i++)
// {
//   //first
//   for(int j = 1;j<=i;j++){
//     cout << j;
//   }
// //   spaces
// for(int j = 1;j<=space;j++){
//     cout << " ";
// }
//   //second
//   for(int j = i;j>=1;j--){
//     cout << j;
//   }
// }
//   cout <<endl;
//   space = space -2;
// }

// void pattern13(int n){
//   int start =1;
//   for(int i=1;i<=n;i++){
//   for(char j = 'A';j<=i;j++){
//      cout << start<< " ";
//      start +=1;
//   }
//   cout << endl;
// }
// }

// void pattern14(int n){
//   for(int i=1;i<=n;i++){
//     char ch ='A';
//   for(int j = 0;j<i;j++){
//      cout << ch<< " ";
//      ch +=1;
//   }
//   cout << endl;
// }
// }

// void pattern15(int n){
//   for(int i = 1;i<=n;i++){
//   char ch = 'A';
// for(int j =n;j>=i;j--){
//   cout << ch << " ";
//   ch +=1;
// }
// cout << endl;
// }
// }

// void pattern16(int n){
//   for(int i = 0;i<n;i++){
//     char ch = 'A'+i;
//     for(int j=0 ;j<=i;j++){
//       cout<< ch << " ";
//    }
// cout << endl;
// }
// }

// void pattern17(int n){
//   for(int i=0;i<n;i++){
//     //Spaces
//     for(int  j =0; j<n-i-1;j++){
//       cout << " ";
//     }
//     //charectr
//     char ch ='A';
//     int breakPoint = (2*i+1)/2;
//     for(int j =1; j<=2*i+1;j++){
//      cout << ch;
//      if(j<=breakPoint) ch++;
//      else ch--;
//    }
//   //spaces
//    for(int  j =0; j<n-i-1;j++){
//       cout << " ";
//     } 
//   cout << endl;
// }
// }

// void pattern18(int n){
//   for (int i = 0; i < n; i++)
//   {
//     // char ch = 'E'-i;
//     for(char j ='E'-i; j<='E';j++){
//       cout << j<< " ";
//       // ch-=j;
//     }
//     cout << endl;
//   }
  
// }

// void pattern19(int n){
//   for (int i = 0; i < n; i++)
//   {
//     //star 1
//     for(int j =0; j<n-i;j++){
//       cout << "*";
//     }
//     //spaces
//     for(int j =0;j<2*i;j++){
//       cout << " ";
//     }

//     //star 2
//    for(int j =0;j<n-i;j++){
//       cout << "*" ;
//     }
//     cout << endl;
//   }

//   for (int i = 1; i <=n; i++)
//   {
//     //star 1
//     for(int j =0; j<i;j++){
//       cout << "*";
//     }
//     //spaces
//     for(int j =0;j<2*(n-i);j++){
//       cout << " ";
//     }

//     //star 2
//    for(int j =0;j<i;j++){
//       cout << "*" ;
//     }
//     cout << endl;
//   }
  
// }

// void pattern20(int n){
// for (int i = 1; i <= n; i++)
// {
//   //stars
// for(int j =0;j<i;j++){
//   cout  << '*';
// }
//   //spaces
// for(int j =0;j<2*(n-i);j++){
//   cout << " ";
// }
//   //stars
//   for(int j =0;j<i;j++){
//   cout  << '*';
// }
// cout << endl;
// }

// for (int i = 1; i < n; i++)
// {
//   //stars
// for(int j =0;j<n-i;j++){
//   cout  << '*';
// }
//   //spaces
// for(int j =0;j<2*i;j++){
//   cout << " ";
// }
//   //stars
//   for(int j =0;j<n-i;j++){
//   cout  << '*';
// }
// cout << endl;
// }
// }

// void pattern21(int n){
// for (int i = 0; i < n; i++)
// {
//   for(int j =0;j<n;j++){
//     if(i==0 || j==0 || i==n-1 || j==n-1){
//       cout << "*";
//     }else{
//       cout << " ";
//     }
//   }
//   cout << endl;
// }

// }

void pattern22(int n){
for (int i = 0; i <2*n-1; i++)
{
for (int j = 0; j <2*n-1; j++)
  {
    int top =i;
    int left =j;
    int right = (2*n-2)-j;
    int bottom = (2*n-2)-i;

    int val = n - min(min(top,left),min(right,bottom));
    cout << val << " ";
  }
  cout << endl;
}

}

int main(){
    // pattern3(5);
    // pattern4(5);
    // pattern5(5);
    // pattern7(5);
    // pattern8(5);
    // pattern9(5);
    // pattern11(5);
    // pattern12(5);
    //  pattern13(5);
    //  pattern14(5);

    // pattern15(5);
    //  pattern17(5);
    //  pattern18(5);
    //  pattern19(10);
    //  pattern20(5);
    //  pattern21(4);
     pattern22(4);

    return 0;
}