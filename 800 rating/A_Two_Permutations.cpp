#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a && a==b){
        cout<<"Yes"<<endl;
        return;
    }
    if(n-(a+b)<2){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
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