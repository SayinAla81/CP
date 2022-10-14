#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
	if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss; ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}

const ll maxn = 32;
ll dp[maxn];


int main()
{
	ll t;
    cin >> t;
    while(t--)
    {
        ll n, k, ans = 0;
        cin >> n >> k;
        ll a[n];
        fill(dp, dp + maxn, 0);
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int j = 0; j <= 30; j++)
            for(int i = 0; i < n; i++)
                dp[j] += a[i] % 2, a[i] /= 2;
        for(int i = 30; i >= 0; i--)
            if(max(n - dp[i], (ll)0) <= k)
                ans += pow(2, i), k -= max(n - dp[i], (ll)0);
        cout << ans << endl;
    }
}
