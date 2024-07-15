#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int diff=0;
    int last =0;
    for(int i=0;i<n;i++){
        diff = max(diff,abs(v[i]-last));
        last=v[i];
    }
    diff=max(diff,abs(2*(k-v.back())));
    cout<<diff<<"\n";
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