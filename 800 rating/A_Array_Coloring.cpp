#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num%2==1){
            count++;
        }
    }
    if(count%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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