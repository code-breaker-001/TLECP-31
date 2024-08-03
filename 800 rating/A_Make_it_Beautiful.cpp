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
    if (v[0]==v[n-1])
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout<<v[n-1]<<" "<<v[0]<<" ";
    for(int i=1;i<n-1;i++){
        cout<<v[i]<<" ";
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