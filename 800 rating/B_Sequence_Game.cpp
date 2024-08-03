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
    vi res;
    res.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        if(v[i]>=v[i-1]){
            res.push_back(v[i]);
        }else{
            res.push_back(v[i]);
            res.push_back(v[i]);
        }
    }
    cout<<res.size()<<endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
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