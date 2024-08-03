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
    if(!is_sorted(v.begin(),v.end())){
        cout<<0<<endl;
        return;
    }
    int mini = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        mini = min(mini,v[i]-v[i-1]);
    }
    cout<<(mini/2)+1<<endl;
    
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