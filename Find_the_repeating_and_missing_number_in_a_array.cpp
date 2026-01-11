#include<bits/stdc++.h>
using namespace std;
vector<int> findMissingandRepeatingNumber(vector<int>& nums){
int n=nums.size();
unordered_map<int, int>freq;
vector<int>result(2,0);
//count the frequency of each number



for(int num: nums){
    freq[num]++;
}
for(int i=0; i<n; i++){
    if(freq[i]==2){
        result[0]=i;//repeating number

    }
    else if(freq[i]==0){
        result[1]=i;//missing number

    }
}
return result;
}