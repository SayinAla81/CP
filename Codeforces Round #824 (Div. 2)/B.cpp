#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back


int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n, ans = 0;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 1; i < n; i++)
            ans += a[i] / (2 * a[0] - 1) - 1 + (a[i] % (2 * a[0] - 1) != 0);
        cout << ans << endl;
    }
}
