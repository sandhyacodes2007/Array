#include<iostream>
#include<vector>
#include<climits> //for INT_MIN
using namespace std;
int maxSumSubarray(const vector<int>& nums){
    int n=nums.size();
    int current_sum= nums[0];
    int max_sum=nums[0];
    
    for(int i=0; i<n; i++){
       current_sum=max(nums[i], current_sum + nums[i]);
     max_sum=max(max_sum, current_sum);
    }
    

    return max_sum;




    ///OPTIMAL Solution
/*
int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxSum=INT_MIN;
          int sum=0;
        for(int i=0; i<n; i++){
          
            sum+= nums[i];
            maxSum= max(maxSum, sum);
            
            if(sum<0)sum=0;
        }
        return maxSum;
    }*/



    ///  Print the MaxSubarray
    /*
     int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxSum=INT_MIN;
        int start=0;
        int ansstart=-1;
        int ansend= -1;
          int sum=0;
        for(int i=0; i<n; i++){
          if(sum==0)start=i;
            sum+= nums[i];
            maxSum= max(maxSum, sum);
            ansstart= start;
            ansend= i;
            if(sum<0)sum=0;
        }
     
//print the maxSubArray
cout<<"The Subarray is : ["
for(int i= ansstart; i<= ansEnd; i++){
    cout<<nums[i]<<" ";
}
cout<<"]"<<endl;

        return maxSum;
      
    }
    */

}
int main(){
    int n; 
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<maxSumSubarray(nums)<<endl;//Call the function and print the result
    return 0;
}


