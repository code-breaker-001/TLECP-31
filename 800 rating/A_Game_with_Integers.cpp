#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second"<<"\n";
    }else{
        cout<<"First"<<"\n";
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