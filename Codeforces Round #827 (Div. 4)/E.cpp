#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back


int main()
{
    //Dont Forget The ''Map''  :)

    ios::sync_with_stdio(false), cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n + 10], sum[n + 10], dp[n + 10];
        fill(sum, sum + n + 10, 0);
        fill(dp, dp + n + 10, 0);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
            dp[i] = max(dp[i - 1], a[i]); 
        }
        dp[n + 1] = dp[n];
        sum[n + 1] = sum[n];
        while(q--)
        {
            ll k;
            cin >> k;
            ll index = lower_bound(dp, dp + n + 1, k + 1) - dp;
            cout << sum[index - 1] << ' ';
        }
        cout << endl;
    }
}
