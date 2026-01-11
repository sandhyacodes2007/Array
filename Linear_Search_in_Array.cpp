#include<bits/stdc++.h>
using namespace std;
int linearSearch(const vector<int>&nums, int x){
    int n=nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]==x)return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;//declare the vector with size n.
    vector<int>nums(n);//declare the vector with size n;
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
    cin>>nums[i];//input the elements into the vector.
    }
    int x;
    cout<<"Enter the target number:"<<endl;
    cin>>x;//input the target number.
    //call the linearSearch and store the result.
    int result= linearSearch(nums, x);
    if(result!=-1){
        cout<<"the target number "<< x << " is found at index"<<result<<". "<<"\n";
    }
    else{
        cout<<"the target number"<< x <<" is not found  in the array:";
    }
    return 0;
}