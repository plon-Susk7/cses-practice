#include<bits/stdc++.h>


using namespace std;



void solve(vector<int> &arr,int m){
    

    vector<int> mp(200000);

    int n = arr.size();


    for(int i=0;i<arr.size();i++) mp[arr[i]] = i;

    int result = 1;
    int curr = 1;
    int pos = -1;

    while(curr <= n){
        if(pos > mp[curr]){
            result++;
        }
        pos = mp[curr];
        curr +=1;
    }

    int a,b;

    while(m--){
        cin >> a >> b;

        // check if there is inversion
        if(abs(arr[a-1]]-arr[b-1]) == 1){
            if(arr[a-1] > arr[b-1]){
                if(mp[arr[b-1]] > mp[arr[a-1]]){
                    result--;
                }else{
                    result++;
                }

                // swaping and checking for a and b
                swap(mp[arr[a-1]],mp[arr[b-1]]);

                // b is clearly smaller and if it is 1 just ignore
                
                int large = arr[b-1];
                int small = arr[a-1];

                if(mp[large] > mp[large+1]){
                    result++;
                }

                if(small!=1 && mp[small] < mp[small-1]){
                  result--;
                }
            }else{
                if(mp[arr[a-1]] > mp[arr[b-1]]){
                    result--;
                }else{
                    result++;
                }
            }
        }

        int temp = mp[arr[a-1]];
        mp[arr[a-1]] = mp[arr[b-1]];
        mp[arr[b-1]] = temp;

        // check for b-1 && a-1
        
        
    }

}

int main(){
    
    int n,m;
    cin >> n >> m;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];

    solve(arr,m);

    return 0;
}
