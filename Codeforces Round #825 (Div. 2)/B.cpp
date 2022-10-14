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
        ll n;
        cin >> n;
        ll a[n], ans[n + 1], mark = 1;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 1; i < n; i++)
            ans[i] = a[i] * a[i - 1] / __gcd(a[i], a[i - 1]);
        ans[0] = a[0], ans[n] = a[n - 1];
        for(int i = 0; i < n; i++)
            if(__gcd(ans[i], ans[i + 1]) != a[i])
                mark = 0;
        cout << (mark ? "YES" : "NO") << endl;
    }

}
