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
    int two_count=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==2){
            two_count++;
        }
    }
    if(two_count%2){
        cout<<-1<<endl;
        return;
    }
    int curr=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==2){
            curr++;
        }
        if(curr*2==two_count){
            cout<<i+1<<endl;
            return;
        }
    }
    cout << -1 << endl;
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