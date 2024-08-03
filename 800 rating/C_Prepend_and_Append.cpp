#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(s[i]==s[j]){
            cout<<j-i+1<<endl;
            return;
        }
    }
    cout<<0<<endl;
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