#include<bits/stdc++.h>
#define lld long long int

#define vi vector<lld> 
#define fr(a,c,b) for(lld a=c;a<b;a++)
using namespace std;


void solve()
{

        lld n;
        cin>>n;
        lld d1 =INT_MAX;
        lld d2=INT_MIN;
       vi v(n);
       fr(i,0,n)
       cin>>v[i];
        lld man=1;
        bool dij=false;
        for(lld i=1;i<n;i++)
        {   man=1;
            if(v[i]-v[i-1]<=2)
           {      dij=true;
               while(v[i]-v[i-1]<=2&&i<n)
               {
                   man++;
                   i++;
               }  
                
             if(man<d1)
               d1=man;
             if(man>d2)
              d2=man;
           }
              
      }
     if(v[1]-v[0]>2||v[n-1]-v[n-2]>2)
       d1=1;
    for(lld i=1;i<n-1;i++)
        if(v[i]-v[i-1]>2&&v[i+1]-v[i]>2)
        d1=1;
    
    if(dij==true)
     cout<<d1<<" "<<d2<<endl;
    else
    {
        cout<<"1 1"<<endl;
    }
    

}
int main()
{
    lld t;
    cin>>t;
    while(t--)
    { 
        solve();
    }
}