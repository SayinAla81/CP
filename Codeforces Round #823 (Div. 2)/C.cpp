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
        string s;
        cin >> s;
        ll dp[s.size() + 1];
        for(int i = 0; i < s.size(); i++)
            dp[i] = 1e8;
        vector <ll> v;
        for(int i = s.size() - 1 ; i >= 0; i--)
            dp[i] = min(dp[i + 1], ll(s[i] - '0'));
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] - '0' > dp[i])
                v.pb(min(ll(s[i] - '0' + 1), (ll)9));
            else
                v.pb(s[i] - '0');
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++)
            cout << v[i];
        cout << endl;

    }
}
