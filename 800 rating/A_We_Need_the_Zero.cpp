#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int xor_total = 0;
    for (auto i : v)
    {
        xor_total ^= i;
    }
    
    if (xor_total == 0) {
        cout << 0 << endl;
        return;
    }
    
    if (n % 2 == 1 && xor_total < 256) {
        cout << xor_total << endl;
    } else {
        cout << -1 << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
