#include<bits/stdc++.h>
 
 
using namespace std;
 
#define ll long long
 
ll solve(vector<ll> &arr){
    int n = arr.size();
    
    sort(arr.begin(),arr.end());
    
    unordered_map<ll,int> m;
 
    ll target = 0;

    for(int i=0;i<n;i++){

      if(target+1 < arr[i]){
        return target+1;
      }

      target += arr[i];
    }

    return target+1;
}
 
 
int main(){
    int n;
    cin >> n;
 
    vector<ll> arr(n);
 
    for(int i=0;i<n;i++) cin >> arr[i];
 
 
    cout << solve(arr) << endl;
 
    return 0;
}
