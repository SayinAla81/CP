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
        ll n, mark = 1;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 1; i < n; i++)
            if(a[i] == a[i - 1])
                mark = 0;
        cout << (mark ? "YES" : "NO") << endl;
    }
}
