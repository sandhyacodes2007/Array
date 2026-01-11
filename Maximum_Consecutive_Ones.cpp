#include<bits/stdc++.h>
using namespace std;
int MaximumConsecutiveOnes(vector<int>& nums){
    int cnt=0; 
    int maxi=0; 
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
    }
        
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter the number of the element in the array:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int maxi= MaximumConsecutiveOnes(nums);
    cout<<" Maximum consecutive ones :"<<maxi<<endl;
}