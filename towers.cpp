#include<bits/stdc++.h>
using namespace std;

#define ll long long int 



int main(){
    int n;
    cin >> n;
    multiset<ll> ans;
    int k;
    for(int i=0; i<n; i++) {
        
        cin >> k;

        auto it = ans.upper_bound(k);

        if(it==ans.end()){
            ans.insert(k);
        }else{
            ans.erase(it);
            ans.insert(k);
        }
    }

    cout << ans.size() << '\n';

    return 0;
}
