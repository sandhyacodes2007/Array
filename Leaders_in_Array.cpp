#include<bits/stdc++.h>
using namespace std;
vector<int> leadersinArray(vector<int>& arr) {
      int n=arr.size();
     vector<int>ans;
     int maxi=INT_MIN;
      for(int i=n-1; i>=0; i--){
if(arr[i]>maxi){
  ans.push_back(arr[i]);
  maxi=arr[i];
}
      }
      
      reverse(ans.begin(), ans.end());
    return ans;

}


int main(){
  int n;
  cout<<"Enter the number of Elements in the array:";
  cin>>n;
  vector<int>arr(n);
  cout<<"Enter the Elements in the array:";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

    vector<int> ans=leadersinArray(arr);
    cout<<"leaders in a Array:";
    for(int leader: ans){
      cout<<leader<<" ";
    }
    cout<<endl;
    return 0;
  
}

   