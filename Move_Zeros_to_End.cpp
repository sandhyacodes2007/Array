#include<bits/stdc++.h>
using namespace std;
void MoveZerosEnd(vector<int>& nums){
    int n=nums.size();
    int lastNonZeroFoundAt=0;
   vector<int> temp ;//temporary array to store the non-zeros element.
     for(int i=0; i<n; i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }




        }
        int nz= temp.size();
        for(int i=0; i<nz; i++){
            nums[lastNonZeroFoundAt++]=temp[i];//to replace the nums  element by temporay array element.


        }
        for(int i=lastNonZeroFoundAt; i<n; i++){//to store the all the array's zeros after the
            nums[i]=0;//non-zeros elemnt.
        }
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
       MoveZerosEnd(nums);
      cout<<"Array after moving zeros to the end:"<<endl;
      for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
      }
      cout<<endl;
      return 0;
     }
