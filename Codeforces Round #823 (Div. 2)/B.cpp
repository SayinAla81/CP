#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long  double ld;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

const ll maxn =  1e5 + 10;
ll a[maxn], b[maxn];


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        ll mini = a[0], maxi = a[0];
        for(int i = 0; i < n; i++)
        {
            mini = min(mini, a[i] - b[i]);
            maxi = max(maxi, a[i] + b[i]);
        }
        int sum = mini + maxi;
        cout << sum / 2;
        if(sum % 2 != 0)
            cout << ".5";
        cout << '\n';
    }
}
