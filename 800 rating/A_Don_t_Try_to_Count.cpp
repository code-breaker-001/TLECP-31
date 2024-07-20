#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string s,sub;
    cin>>s>>sub;
    for(int i=0;i<=10;i++){
        if(s.find(sub)!=string::npos){
            cout<<i<<endl;
            return;
        }else{
            s+=s;
        }
    }
    cout<<-1<<endl;
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