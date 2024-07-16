#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    // cout<<s<<endl;
    int count=0,totalcount=0;
    bool cons =false;
    for(char x:s){
        if(x=='.'){
            count++;
            totalcount++;
            if(count==3){
                cons=true;
                break;
            }
        }else{
            count=0;
        }
    }
    if(cons){
        cout<<2<<"\n";
    }else{
        cout<<totalcount<<"\n";
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