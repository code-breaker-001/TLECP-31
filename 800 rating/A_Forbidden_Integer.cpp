#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (k == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (x == 1)
    {
        if (n % k == 0 and k == 2)
        {
            cout << "YES" << endl;
            cout << n / k << endl;
            for (int i = 0; i < n / k; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
        else if (n % k == 1 and k == 2)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            if (n % 2 == 0)
            {
                cout << 2 << " ";
            }
            else
            {
                cout << 3 << " ";
            }
            for (int i = 0; i < n / 2 - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
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