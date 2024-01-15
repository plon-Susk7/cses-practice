#include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll summer(ll ans, vector<ll> &arr){
    
    ll result = 0;

    for(auto it:arr) result+= abs(ans-it);

    return result;
}

ll solve(vector<ll> &arr){
    
    int n = arr.size();

    sort(arr.begin(),arr.end());

    ll ans = arr[n/2];
    

    ans = summer(ans,arr);
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<ll> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];

    cout << solve(arr) << endl;
    return 0;
}
