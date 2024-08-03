#include <bits/stdc++.h>
#define endl "\n"
#define int long long
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
    long long mini = INT_MAX;
    long long maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 0)
        {
            mini = min(mini, v[i]);
        }
        else
        {
            maxi = max(maxi, v[i]);
        }
    }
    cout << min(mini, -maxi) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}