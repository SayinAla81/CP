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
        ll n, mark = 1;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 2; i < n; i += 2)
            if(a[i] % 2 != a[i - 2] % 2)
                mark = 0;
        for(int i = 3; i < n; i += 2)
            if(a[i] % 2 != a[i - 2] % 2)
                mark = 0;
        cout << (mark ? "YES" : "NO") << endl;
    }
}
