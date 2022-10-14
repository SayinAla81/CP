#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, ans = 1e9;
        cin >> n;
        ll a[n]; 
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 1; i < n - 1; i++)
            ans = min(ans, a[i] - a[i - 1] + a[i + 1] - a[i]);
        cout << ans << endl;
    }
}
