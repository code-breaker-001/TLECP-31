#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve(){
    int a,b,c,d,step=0;
    cin>>a>>b>>c>>d;
    if(d<b){
        cout<<-1<<endl;
        return;
    }
    step+=d-b;
    a+=step;
    if(a<c){
        cout<<-1<<endl;
        return;
    }
    step+=a-c;
    cout<<step<<endl;

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