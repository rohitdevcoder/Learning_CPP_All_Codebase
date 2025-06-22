#include <iostream>
using namespace std;

int main(){
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

int n= 4;
//top
for(int i =0;i<n;i++){
    //space
    for(int j=0;j<n-i-1;j++){
        cout <<" ";
    }

    cout<<'*';
    if(i!=0){
        for (int j = 0; j < 2*i-1; j++)
        {
           cout << " ";
        }
        cout<<'*';
        
    }
cout<<endl;

}

//bottom
for (int i = 0; i < n-1; i++)
{
 //space
    for(int j=0;j<i+1;j++){
        cout <<" ";
    }

 cout<<'*';
 if (i != n-2)
 { 
    //spaces

     for(int j=0;j<2*(n-i)-5;j++){
        cout <<" ";
    }
    cout<< '*';
 }
 cout<<endl;
 
}



    return 0;
}