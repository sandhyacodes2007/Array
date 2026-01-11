#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>threeSum(vector<int>&nums){
    int n=nums.size();
    vector<vector<int>> ans;
sort(nums.begin(), nums.end());
for(int i=0; i<n-2; i++){
    if(i>0 && nums[i]== nums[i-1])continue;
    int j= i+1;
    int k= n-1;

    while(j<k){

        
    int sum=( nums[i]+ nums[j]+ nums[k]);
        if(sum<0){
j++;
        }
        else if(sum>0){
k--;
        }
        else{
vector<int>temp= {nums[i], nums[j], nums[k]};
ans.push_back(temp);
j++;
k--;
while(j<k && nums[j]==nums[j-1])j++;
while(j<k && nums[k]==nums[k+1])k--;
        }
    }
}


return ans;

   
    




















    /*
    vector<int>result;
    set<vector<int>> st;
    sort(nums.begin(),nums.end());
    for(int i=0; i<n-2; i++){
        int left=i+1, right=n-1;
        while(left<right){

             int sum=(nums[i]+nums[left]+nums[right]);
             if(sum==0){
                
             

                   st.insert({nums[i],nums[left],nums[right]});
                 left++;
                 right--;
             }
             else if(sum<0){
                left++;

             }else{
                right--;
             }
                   

                }
            }
        
    
    vector<vector<int>>ans{st.begin(), st.end()};
   
}
    */
}
int main(){
    vector<int>nums={2, -2, 0, 3, -3 , 5};
    vector<vector<int>>result=threeSum(nums);
    for(auto & triplet: result){
        for(int nums: triplet){
            cout<<nums<<" ";

        }
        cout<<endl;
    }
    return 0;
}
