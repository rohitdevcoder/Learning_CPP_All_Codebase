#include <iostream>
#include <vector>
using namespace std;

// ----------pairSum BootForce--------
// vector<int> pairSum(vector<int>nums,int target){
//     int n = nums.size();
//     vector<int>ans;
//     for(int i = 0;i<n;i++){
//      for (int j = i+1; j<n; j++)
//      {
//         if (nums[i]+nums[j]==target)
//         {
//             ans.push_back(i);
//             ans.push_back(j);
//         }
        
//      }
     
//     }
//     return ans;
// }

//--------Mejority element ----------Brute Force-----
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int val : nums){
//         int freq=0;
//             for(int el : nums){
//                 if(el == val){
//                     freq++;
//                 }
//             }
//             if(freq>n/2){
//                 return val;
//             }
//         }
//         return -1;
//     }
// };


//--------Mejority element ----------Optimal approach-----
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//     //sort
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int freq=1,ans = nums[0];
//     for(int i = 0;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }else{
//             freq = 1;
//             ans = nums [i];
//         }

//         if(freq>n/2){
//             return ans;
//         }
//     }
//     return ans;
//     }
// };


//--------Mejority element ----------Moore's voting algo-----
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int freq =0,ans =0;
//         int n =nums.size();
//         for(int i =0;i<n;i++){
//             if(freq==0){
//                 ans = nums[i];
//             }
//             if(ans==nums[i]){
//                 freq++;
//             }else{
//                 freq--;
//             }
//         }
//         return ans;

//     }
// };

int main(){
    // vector<int>nums = {2,8,7,6,10};
    // int target = 9;
    // vector<int>ans =pairSum(nums,target);
    // cout<<"The pair sum of index : "<<ans[0]<<","<<ans[1]<<endl;




    return 0;
}