#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve()
{
    int n = 3;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (v[0] > v[1])
    {
        cout << "First" << endl;
    }
    else if (v[0] < v[1])
    {
        cout << "Second" << endl;
    }
    else
    {
        if (v[2] % 2 == 1)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
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