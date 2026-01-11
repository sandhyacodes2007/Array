 #include<bits/stdc++.h>
 using namespace std;
 vector<int> majorityElementTwo(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int it : nums){
            mpp[it]++;
        }
        for(auto itr: mpp)
       
            if(itr.second>=(n/3)+1)ans.push_back(itr.first);
        
        return ans;
    }