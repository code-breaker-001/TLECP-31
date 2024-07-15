#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(k>=2 or is_sorted(v.begin(),v.end())){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

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