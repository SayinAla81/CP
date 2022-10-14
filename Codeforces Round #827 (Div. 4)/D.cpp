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
        ll a[n + 10], index[1111];
        fill(index, index + 1111, -1);
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            index[a[i]] = i;
        }
        ll maxi = -1;
        for(int i = 0; i < 1111; i++)
            for(int j = 0; j < 1111; j++)
                if(__gcd(i , j) == 1 && index[i] != -1 && index[j] != -1)
                    maxi = max(maxi, index[i] + index[j]);
        cout << maxi << endl;
    }
}
