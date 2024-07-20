#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;
//improved the logic : since m*n <=25 then substring can have maximum length of 25  and we can find whether it substring or not by having string s to be of size 50 at max
void solve(){
    int n,m;
    cin>>n>>m;
    string s,sub;
    cin>>s>>sub;
    int i=0;
    while(s.size()<=50){
        if(s.find(sub)!=string::npos){
            cout<<i<<endl;
            return;
        }else{
            s+=s;
        }
        i++;
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