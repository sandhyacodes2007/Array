#include<bits/stdc++.h>
using namespace std;


//Brute force Solution


int remove_duplicates(vector<int>& nums){
    int n= nums.size();
    set<int> s;//O(log N)
    for(int it: nums){//O(N)
        s.insert(it);

    }
    int k= s.size();
    int j=0; 
    for(auto itr: s){//O(N)
        nums[j++]= itr;
    }
    return nums;
}

TC= O(N*log N)+ O(N)
space complexity = O(N)



//Optimal solution


int remove_duplicates(vector<int>& nums){
    int n= nums.size();
int i=0;
for(int j=1; j<n; j++){
    if(nums[i]!= nums[j]){
        i++;
        nums[i]= nums[j];
    }
}
return i+1;
}
//

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int ans= remove_duplicates(nums);
   cout<<ans<<endl;
    
    return 0;

}