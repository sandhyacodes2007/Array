#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>& nums){
     unordered_map<int, int> freq;
    int n=nums.size();
    for(int num: nums){
        freq[num]++;
        if(freq[num]>n/2){
            return num;
        }
    }
return -1;
}
int main(){
    int n; 
    cout<<"Enter the number of element:";
    cin>>n;
    
  
        cout<<"Enter the elements in the array:";
          for(int i=0; i<n; i++){
        cin>>num[i];


    }
    }
