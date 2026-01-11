#include<bits/stdc++.h>
using namespace std;
void sortarray(vector<int>& nums){
   
    sort(nums.begin(), nums.end());
    
    }
    int main(){
        int n;
        cout<<"Enter the number of element in the array:";
        cin>>n;
        vector<int>nums(n);
        cout<<"Enter the elements in the array:";
        for(int i=0; i<n; i++){
            cin>>nums[i];

        }
        sortarray(nums);//call the function to  sort the array
        cout<<"Sorted array:";
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
       cout<<endl;
        return 0;
    }
