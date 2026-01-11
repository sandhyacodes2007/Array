#include<bits/stdc++.h>
using namespace std;
vector<int> nextpermutation(vector<int>& nums){

}
vector<vector<int>> getallpermutation(){

}
void func(int ind, vector<int>& nums, vector<vector<int>>& ans ){
int n= nums.size();
if(ind==n){
    ans.push_back(nums);
    return;
}
for(int i= ind; i<n; i++){
    swap(nums[ind], nums[i]);
    
}
func(ind+1, nums, ans);
swap(nums[ind], nums[i]);



}