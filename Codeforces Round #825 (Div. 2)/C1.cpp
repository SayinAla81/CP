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
        ll n, ans = 0;
        cin >> n;
        ll a[n + 10], dp[n + 10];
        fill(dp, dp + n, 0);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] = min(a[i], (ll)i);
        }
        for(int i = 1; i <= n; i++)
        {
            a[i] > dp[i - 1] ? dp[i] = dp[i - 1] + 1 : dp[i] = a[i];
            ans += dp[i];
        }
        cout << ans << endl;
    }

}
