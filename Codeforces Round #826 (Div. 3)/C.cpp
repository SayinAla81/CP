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
        ll n, sum = 0, mini = 1e9 + 10;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for(int i = n; i >= 1; i--)
        {
            if(sum % i == 0)
            {
                ll ss = 0, is = 1;
                for(int j = 0; j < n; j++)
                {
                    ss += a[j];
                    if(ss > sum / i)
                        is = 0, j = n;
                    else if(ss == sum / i)
                        ss = 0;
                }
                if(is)
                {
                    ll sss = 0, maxi = 0, counter = 0;
                    for(int ii = 0; ii < n; ii++)
                    {
                        sss += a[ii], counter++;
                        maxi = max(maxi, counter);
                        if(sss == sum / i)
                            counter = 0, sss = 0;
                    }
                    mini = min(mini, maxi);
                }
            }
        }
        cout << mini << endl;
    }

}
