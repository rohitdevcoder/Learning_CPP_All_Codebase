#include <iostream>
using namespace std;

// int productArray(int arr[],int sz){
//     int product=1;
//     for(int i = 0;i<sz;i++){
//      product *=arr[i];
//     }
//     return product;
// }

// int sumArray(int arr[],int sz){
//     int sum = 0;
//     for(int i = 0; i<sz;i++){
//         sum +=arr[i];
//     }
//     return sum;
// }

int main(){
    // ----- calculate the product------
//   int nums[] = {1,2,3};
//   int size = sizeof(nums)/sizeof(int);
//   cout << "The Product is : "<<productArray(nums,size)<<endl;

// int nums[] = {1,2,3,4};
// int size = sizeof(nums)/sizeof(int);
// cout << " Sum of all numbers in array : "<<sumArray(nums,size)<<endl;

// -------swap the minimum and max in array---------
// int nums[] = {21,65,4,-98,23,74,45};
// int size = sizeof(nums)/sizeof(int);
// int minNum=INT8_MAX;
// int maxNum = INT8_MIN;
// for(int i = 0; i<size;i++){
//     minNum = min(nums[i],minNum);
//     maxNum = max(nums[i],maxNum);

// }
// cout << "The minimum and maximum number is : "<<minNum <<" & "<<maxNum << '\n';
// swap(minNum,maxNum);
// cout << "After swaping min and max term is : "<<'\n';
// cout << "Mex Term : "<< maxNum << '\n';
// cout <<  "Min Term : "<<minNum << endl; 

//------print the unique values in an array-----------
// int  nums[] = {1,1,2,2,3};
// int size = sizeof(nums)/sizeof(int);
// int unique=0;

// for(int i =0;i<size;i++){
//     unique^=nums[i];
// }
// cout<< "The unique element is : "<<unique;

// -------print the intersectionn of two array-----------
int arrayOne[]={1,3,7,9,8,5,6,4};
int sizeOne = sizeof(arrayOne)/sizeof(int);
int arrayTwo[]={1,2,3,4,5,12,7,8,};
int sizeTwo = sizeof(arrayTwo)/sizeof(int);
int inerArray[100]={false};

cout << "Intersection : ";
for(int i =0;i<sizeOne;i++){
    for(int j=0;j<sizeTwo;j++){
        if (arrayOne[i]==arrayTwo[j] && !inerArray[j])
        {
        cout<<arrayOne[i]<<" ";
        inerArray[j]=true;
        break;
        }
        
    }
}


  return  0;
}