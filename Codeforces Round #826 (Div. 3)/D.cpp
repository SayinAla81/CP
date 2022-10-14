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
        ll n, mark = 1, counter = 0;
        cin >> n;
        ll a[n], ans = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        vector <ll> v;
        for(int i = 0; i < n; i++)
            v.pb(a[i]);
        while(v.size() != 1)
        {
            vector <ll> vv;
            for(int i = 0; i < v.size(); i += 2)
            {
                if(v[i] > v[i + 1])
                {
                    ans++; 
                    swap(v[i], v[i + 1]);
                }
                vv.pb(v[i]);
            }
            if(v.size() > 1)
                for(int i = 0; i < v.size(); i += 2)
                    if(v[i + 1] - v[i] != pow(2, counter))
                        mark = 0;
            counter++;
            v = vv;
        }
        cout << (mark ? ans : -1) << endl;
    }

}
