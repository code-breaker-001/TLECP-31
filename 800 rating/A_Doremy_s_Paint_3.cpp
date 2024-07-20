#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<int,int> mp;
    for(int x:v){
        mp[x]++;
    }
    if(mp.size()>2){
        cout<<"No"<<endl;
        return;
    }
    vi v2;
    if(mp.size()==2){
        for(auto x:mp){
            v2.push_back(x.second);
        }
        if(abs(v2[0]-v2[1])<=1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }else{
        cout<<"Yes"<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}