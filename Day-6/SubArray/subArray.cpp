#include <iostream>
using namespace std;

int main(){
    // int arr[]={1,2,3,4,5,6,7,8,9};
    // int n = sizeof(arr)/sizeof(int);

    // for(int start = 0; start<n;start++){
    //     for (int end = start; end <n; end++)
    //     {
    //         for(int i = start;i<=end;i++){
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout<<endl;
    // }
    // int arr[]={3,-4,5,4,-1,7,-8};
    // int n =  sizeof(arr)/sizeof(int);
    // int maxSum = INT8_MIN;

    // for(int start = 0; start<n;start++){
    //     int currentSum = 0;
    //     for(int end = start;end<n;end++){
    //         currentSum +=arr[end];
    //         maxSum=max(currentSum,maxSum);
    //     }
    // }
    // cout<<"The maximum sum is : "<<maxSum<<endl;
//------kadane's Algorithm------------
    int arr[]={3,-4,5,4,-1,7,-8};
    int n = sizeof(arr)/sizeof(int);
    int currentSum = 0, maxSum = INT8_MIN;

    for(int i =0;i<n;i++){
        currentSum +=arr[i];
        maxSum = max(currentSum,maxSum);
        if(currentSum<0){
            currentSum = 0;
        }
    }

    cout<<"The maximum sum is : "<<maxSum<<endl;

    return 0;
}