#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    vi res(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = *min_element(v.begin(), v.end()) + *max_element(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        res[i]=sum-v[i];
    }
    for(int i = 0; i < n; i++){
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