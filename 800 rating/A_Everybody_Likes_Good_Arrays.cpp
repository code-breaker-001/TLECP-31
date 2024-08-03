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
    int count=0;
    for(int i=0;i<n-1;i++){
        if(v[i]%2==v[i+1]%2){
            count++;
        }
    }
    cout<<count<<endl;
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