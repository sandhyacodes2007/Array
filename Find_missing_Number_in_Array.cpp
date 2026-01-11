#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums){
    int N=nums.size();
    int flag=0;
    for(int i=0; i<=N; i++){
        for(int j=0; j<N; j++){
            if(nums[j]==i){
               flag=1;
               break;
            }
        }
            if(flag==0)
            return i;
            
        }

    }
    int main(){
        int N;
        cout<<"Enter the number of elements in the given array:";
        cin>>N;
        vector<int> missingnumber(nums[n])
cout<<"Enter the elements in the array:";


cout<<"Missing Number:"<<missingNumber(nums)<<endl;
    
   return 0;
    }
