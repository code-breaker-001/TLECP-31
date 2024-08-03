#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min_ele= *min_element(v.begin(),v.end());
    vi b,c;
    for(int i=0;i<n;i++){
        if(v[i]==min_ele){
            b.push_back(v[i]);
        }else{
            c.push_back(v[i]);
        }
    }
    if(b.size()==0 || c.size()==0){
        cout<<-1<<endl;
    }else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int x:b){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int x:c){
            cout<<x<<" ";
        }
        cout<<endl;
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