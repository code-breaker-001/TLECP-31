#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int neg_one = 0, pos_one = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            pos_one++;
        }
        else
        {
            neg_one++;
        }
    }
    if (neg_one > 0)
    {
        int sum = pos_one - neg_one;
        int count = 0;
        while (sum < 0)
        {
            count++;
            pos_one++;
            neg_one--;
            sum = pos_one - neg_one;
        }
        if (neg_one % 2 == 1)
        {
            cout << count + 1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    else
    {
        cout << 0 << endl;
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