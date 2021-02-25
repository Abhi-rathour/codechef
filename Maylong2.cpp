#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        
        vector<ll>v(26,0);
        for(ll i=0;i<n;i++)
             v[s[i]-'a']++;
        // for(ll i=0;i<26;i++)
        //   cout<<v[i]<<endl;

        ll sum[26];
        sort(v.begin(),v.end());
        for(ll i=0;i<26;i++)
            sum[i]=0;

         sum[0]=v[0];
        // for(ll i=1;i<26;i++)
        // {
        //     sum[i]=sum[i-1]+v[i];
            
        // }
        ll sum2=sum[25];
        ll x;
        // for(ll i=0;i<26;i++)
        // {
        //     cout<<v[i]<<" "<<sum[i]<<endl;
        // }
        while(q--)
        { 
            cin>>x;
             std::vector<ll>::iterator low1;
             low1 = std::upper_bound(v.begin(), v.end(), x);
             ll ind=(low1-v.begin());
            //  cout<<ind<<" ind value"<<endl;
             ll d=26-ind;
             ll f=sum2-sum[ind-1]-d*x;
            
             if(f>0)
              cout<<f<<endl;
              else 
               cout<<"0"<<endl;
            
        }

    }
}
