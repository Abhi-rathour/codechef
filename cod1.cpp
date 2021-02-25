#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Comp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        if (a.first < b.first || (a.first == b.first && a.second > b.second))
        {
            return true;
        }
        return false;
    }
};

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n, 0);
        priority_queue<pair<ll, ll>, vector<pair<ll, ll> >,Comp>pr;
        pr.push({n, 0});
        ll x = 0, y = n - 1;
        ll mid, val = 1;
        while (!pr.empty())
        {

            pair<ll, ll> p= pr.top();
            pr.pop();
            x = p.second;
            y = x + p.first - 1;
            ll f = y - x + 1;
            ll ff = y - x + 1;
            if (ff & 1)
                mid = (x + y) / 2;
            else
            {
                mid = (x + y - 1) / 2;
            }

            v[mid] = val++;
            if ((y - mid) > 0)
                pr.push({(y - mid), mid + 1});
            if (mid - x > 0)
            {
                pr.push({(mid - x), x});
            }
        }
        for (ll i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}