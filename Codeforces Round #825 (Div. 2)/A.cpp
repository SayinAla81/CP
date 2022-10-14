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
        ll a[n], b[n], cc[2][2] = {0,0,0,0};
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            a[i] == 0 ? cc[0][0]++ : cc[0][1]++;
        }
        for(int i = 0; i < n; i++) 
        {
            cin >> b[i];
            b[i] == 0 ? cc[1][0]++ : cc[1][1]++;
        }
        ll ans = min(abs(cc[0][0] - cc[1][0]), abs(cc[0][1] - cc[1][1])), counter = 0;
        for(int i = 0; i < n; i++)
            if(b[i] != a[i])
                counter++;
        if(counter > ans)
            ans++;
        cout << ans << endl;
    }

}
