#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n%k!=0){
        cout<<1<<endl;
        cout<<n<<endl;
    }else{
        cout<<2<<endl;
        cout<<n-1<<" "<<1<<endl;
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