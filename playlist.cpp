#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(vector<ll> &arr) {
    ll n = arr.size();

    map<ll, ll> m;

    ll result = INT_MIN;
    ll index = 0;

    for (ll i = 0; i < n; i++) {
        if (m.find(arr[i]) == m.end()) {
            m[arr[i]] = i;
        } else {
            index = max(index, m[arr[i]] + 1);
            m[arr[i]] = i;
        }

        result = max(result, i - index + 1);
    }

    cout << result << '\n';
}

int main() {
    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) cin >> arr[i];

    solve(arr);

    return 0;
}
