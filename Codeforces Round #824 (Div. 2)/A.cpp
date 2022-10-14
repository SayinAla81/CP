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
        ll n;
        cin >> n;
        ll k = (n - 2) / 3;
        ll endd = n - 4 - k;
        ll ans = min(k - 1, endd - 1);
        cout << min(ans, endd - k) << endl;
    }
}
