#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int start,int mid,int end){
    vector<int>temp;
    int i = start,j=mid+1;
    while (i<=mid && j<=end)
    {
        if(arr[i]<=arr[j]){
         temp.push_back(arr[i]);
         i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i<=mid )
    {
             temp.push_back(arr[i]);
         i++;
    }

    while (j<=end)
    {
            temp.push_back(arr[j]);
            j++;
    }
    
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx+start]=temp[idx];
    }
    
}

void MergeSort(vector<int>& arr,int start,int end){
if(start<end){

 int mid = start + (end-start)/2;
 MergeSort(arr,start,mid);
 MergeSort(arr,mid+1,end);
 merge(arr,start,mid,end);
}

}

void PrintArray(vector<int>& arr){
    for(int vals : arr){
        cout << vals << " ";
    }
}

int main(){
vector<int>nums = {12,3,9,5,78,5,96,2,23,4,5,7,3,9,23,45,6};

MergeSort(nums,0,nums.size()-1);
PrintArray(nums);
return 0;
}