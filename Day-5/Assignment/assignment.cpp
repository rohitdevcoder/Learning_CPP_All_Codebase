#include <iostream>
#include <vector>
using namespace std;

// int linerSearchVector(vector<int>vec,int target){
//     for(int val : vec){
//         if(val == target){
//             return val;
//         }
//     }
//     return -1;
// }

int main(){
// vector<int>nums = {1,5,8,98,56,85,26,45};
// int target = 26;
// cout << "The element is : "<<linerSearchVector(nums,target)<<endl;

vector<int>nums = {1,5,8,98,56,85,26,45};
int size = nums.size();
int start =0,end=size-1;
while(start<end){
    swap(nums[start],nums[end]);
    start++;
    end--;
}
for(int val : nums){
    cout << val <<" ";
}

    return 0;
}