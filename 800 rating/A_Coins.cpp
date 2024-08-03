#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n%2==1 and k%2==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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