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
        ll n;
        cin >> n;
        ll a[n]; 
        for(int i = 0; i < n; i++) cin >> a[i];
        ll ans = 0, sum[2] = {a[0], a[n - 1]}, pointer[2] = {0, n - 1};
        while(pointer[0] < pointer[1])       
        {
            if(sum[0] < sum[1])
                pointer[0]++, sum[0] += a[pointer[0]]; 
            else if(sum[1] < sum[0])
                pointer[1]--, sum[1] += a[pointer[1]];
            else
                pointer[0]++, pointer[1]--, sum[0] += a[pointer[0]], sum[1] += a[pointer[1]], ans = pointer[0] + n - 1 - pointer[1];
        }
        cout << ans << endl;
    }
}
