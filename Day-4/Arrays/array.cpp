#include <iostream>
using namespace std;

// int LinearSearch(int arr[],int sz,int target){
// for (int i = 0; i < sz; i++)
// {
//     if (arr[i]==target)
//     {
//         return i;
//     }
    
// }
// return -1;

// }

void reverseArray(int arr[],int sz){
  int start =0,end = sz-1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int main(){
    // int marks[5]= {98,30,56,89,56};
    // cout << marks[2]<<endl;

    // int marks[]= {98,30,56,89,56};
    // cout << sizeof(marks)<<endl;

    // int marks[]= {98,30,56,89,56,89,3235,125,564,455,2236};
    // int size = sizeof(marks)/sizeof(int);
    // cout <<size<<endl;

    // int marks[]= {98,30,56,89,56,89,3235,125,564,455,2236};
    // int size = sizeof(marks)/sizeof(int);
    // for(int i =0; i<size;i++){
    //     cout << marks[i]<< "\n";
    // }

    // int size = 5;
    // int marks[size];
    
    // for(int j = 0; j<size;j++){
    //     cin>> marks[j];
    // }
    
    // for(int i =0; i<size;i++){
    //     cout << marks[i]<< "\n";
    // }

    //---------Smallest Element------------
//     int nums[] = {12,-6,45,-56,26,89,5,42,-82,5};
//     int size = sizeof(nums)/sizeof(int);
//     int smallest = INT8_MAX;

//     for(int i =0; i<size;i++){
//         if(nums[i]<smallest){
//             smallest = nums[i];
//         }
//     }
//    cout <<"smallest : "<< smallest <<endl;

  //---------Min & Max------------

//     int nums[] = {12,-6,45,-56,26,89,5,42,-82,5};
//     int size = sizeof(nums)/sizeof(int);
//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;

//     for(int i =0; i<size;i++){
//         smallest = min(nums[i],smallest);
//         largest = max(nums[i],largest);
//     }
//    cout <<"smallest : "<< smallest <<"\n";
//    cout <<"largest : "<< largest <<endl;


//----index finding---
//     int nums[] = {12,-6,45,-56,26,89,5,42,-82,5};
//     int size = sizeof(nums)/sizeof(int);
//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;
//     int min_index,max_index;

//     for(int i =0; i<size;i++){
//         smallest = min(nums[i],smallest);
//         largest = max(nums[i],largest);

//         if(nums[i]==smallest){
//          min_index = i;
//         }

//         if(nums[i]==largest){
//          max_index = i;
//         }
//     }
//    cout <<"smallest : "<< smallest <<" and index is : "<<min_index<<"\n";
//    cout <<"largest : "<< largest <<" and index is : "<<max_index <<endl;

//-------linear search----------
//  int nums[] = {12,12,-6,45,-56,26,89,5,42,-82,5};
//  int size = sizeof(nums)/sizeof(int);
//  int target = 12;

// cout << "The loction of the element is : "<<LinearSearch(nums,size,target)<<endl;

int nums[]={4,2,7,8,1,2,5};
int size = sizeof(nums)/sizeof(int);
reverseArray(nums,size);
for(int i = 0; i<size;i++){
  cout << nums[i]<<" ";
}


    return 0;
}

// run Command : g++ array.cpp -o array.exe;.\array.exe