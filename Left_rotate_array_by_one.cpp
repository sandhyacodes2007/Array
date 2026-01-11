#include<bits/stdc++.h>
using namespace std;
   void leftrotateArrayByOne(vector<int>& nums) {
int temp = nums[0];//store the first element in the 
//temporary variable.
//shift the element in the side of left.
for(int i=1; i<nums.size(); ++i){
    nums[i-1] = nums[i];
}
//place the first with end element.
nums[nums.size() -1 ]= temp;

   }
   //function to print the array.
   void printArray(const vector<int>& nums){
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
   }
   int main(){
    int n;
    cout<<"Enter the number of the element in the array:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements in this array:";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<"Original array:";
    printArray(nums);
   leftrotateArrayByOne(nums);
cout<<"Array after left rotation by one:";
printArray(nums);
return 0;
   }