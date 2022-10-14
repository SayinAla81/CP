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
        string  s, ss;
        cin >> s >> ss;
        if(s[s.size() - 1] == 'S')
        {
            if(ss[ss.size() - 1 ] == 'S')
            {
                if(s.size() == ss.size())
                    cout << "=" << endl;
                else if(s.size() < ss.size())
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            }
            else if(ss[ss.size() - 1 ] == 'L')
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
        else if(s[s.size() - 1] == 'L')
        {
            if(ss[ss.size() - 1 ] == 'L')
            {
                if(s.size() == ss.size())
                    cout << "=" << endl;
                else if(s.size() < ss.size())
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
            }
            else if(ss[ss.size() - 1 ] == 'S')
            {
                cout << ">" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
        else
        {
            if(ss[ss.size() - 1 ] == 'L')
            {
               cout << "<" << endl;
            }
            else if(ss[ss.size() - 1 ] == 'S')
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }

}
