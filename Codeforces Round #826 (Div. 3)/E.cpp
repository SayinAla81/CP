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
        ll n, sum = 0;
        cin >> n;
        ll arr[n + 10], kol[n + 10];
        for(int i = 1; i <= n; i++) cin >> arr[i];
        for(int i = 0; i < n; i++) sum += arr[i];
        fill(kol, kol + n + 10, 0);
        kol[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            kol[i - 1] == 1 ? (i + arr[i] <= n ? kol[i + arr[i]] = 1 : sum = 0) : 1;
            sum += i;
            i - arr[i] - 1 >= 0 ? kol[i] |= kol[i - arr[i] - 1] : sum = 1;
        }
        sum = 0;
        cout << (kol[n] ? "YES" : "NO") << endl; 
    }

}
