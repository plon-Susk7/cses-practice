#include<bits/stdc++.h>


using namespace std;




int solve(vector<int> &arr){

    unordered_map<int,int> m;
    
    int n = arr.size();

    for(int i=0;i<n;i++) m[arr[i]] = i;

    int result = 1;
    
    int curr = 1;
    int pos = -1;

    
    while(curr <= n ){

        if(pos > m[curr]){
            result++;
        }

        pos = m[curr];
        curr+=1;
    }

    return result;


}


int main(){
    
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];


    cout << solve(arr) << endl;

    return 0;
}
