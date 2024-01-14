#include<bits/stdc++.h>


using namespace std;

#define ll long long

ll solve(vector<ll> &arr){
    
    int n = arr.size();

    ll max_int = INT_MIN;
    
    ll temp = 0;

    for(int i=0;i<n;i++){
        temp+= arr[i];

        max_int = max(max_int,temp);

        if(temp < 0 ) temp = 0;
    }
    
    return max_int;

}


int main(){
    int n;
    cin >> n;
    vector<ll> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];
    
    cout << solve(arr) << endl;

  return 0;
}
