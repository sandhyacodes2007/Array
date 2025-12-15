#include<bits/stdc++.h>
using namespace std;
 int SecondlargestElement(vector<int>& nums) {
    
int n=nums.size();
//when the array size is less than 2.
if(n<2){
    return -1;
}
sort(nums.begin(), nums.end());
int largest=nums_push();
int secondlargest=-1;
for(int i=n-2; i>=0; i--){
    if(nums[i])
}
return largest;
 }
 int main(){
    int n;
    cout<<"Enter the number of the elements in the array:";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements in the array:";
    for(int i=0; i<n; i++){
        cin>>nums[i];
        
    }
    int largest=SecondlargestElement(nums);

    cout<<"the largest element is :"<< largest <<endl;
    return 0;
 }
