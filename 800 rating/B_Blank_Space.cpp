#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res = 0,count=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            count++;
        }else{
            res = max(res,count);
            count=0;
        }
    }
    res = max(res,count);//for last element as 0
    cout<<res<<endl;
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}