#include <bits/stdc++.h>
#include <stdlib.h>
#define ll long long
#define vi vector<ll>
#define pr pair<ll, ll>
#define mp map<ll, ll>
#define pi push_back
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define fri(i, a, b) for (ll i = 1; i <= b; i++)

using namespace std;
void binary(ll arr[], ll n,ll r)
{

    ll kk = log2(r);
    for (ll i = kk; i >= 0; i--)
    {
        ll k = n >> i;
        if (k & 1)
        {
            arr[kk--] = 1;
        }
        else
            arr[kk--] = 0;
    }
}

int main()
{
    ll t;
    cin >> t;
    ll i;
    ll a[44];
    a[0] = 1;
    a[1] = 2;
    fr(i, 2, 45)
        a[i] = a[i - 1] * 2;
    while (t--)
    {
        ll x, y, l, r, id;
        ll b[40];
        cin >> x >> y >> l >> r;
        ll arr[41], arr2[41];
        for (ll i = 0; i <= 40; i++)
        {
            arr[i] = 0;
            arr2[i] = 0;
            b[i] = 0;
        }
        binary(arr, x);
        binary(arr2, y);
        
        if(x==0||y==0)
         cout<<"0"<<endl;
        else
        {
        //     ll dp[40],dp1[40];
        //     memset(dp,0,40);
        //     memset(dp1,0,40);
        // ll bb=floor(log2(r));
        // for(i=bb;i>=0;i++)
           








        }
        




































        // for (ll i = 40; i >= 0; i--)
        // {
        //     // cout << " first for for b[i]" << endl;
        //     if (arr[i] == 1 || arr2[i] == 1)
        //         b[i] = 1;
        // }

        // // ll sum = 0;
        // // ll flagx = false;
        // // ll flagy = false;
        // ll bb = floor(log2(r));

        // // cout<<bb<<endl;
        // while (b[bb] != 1 && bb >= 0)
        // {
        //     // cout<<" first while for finding first index"<<endl;
        //     bb--;
        // }
        // ll temp = bb;
        // ll bb1 = bb - 1;
        // ll num1 = 0, num2 = 0, com = 0;
        // while (arr[bb] == 1 && arr2[bb] == 1 && bb >= 0)
        // {
        //     //  cout<<" second while for finding different index"<<endl;
        //     if (com + a[bb] <= r)
        //     {
        //         num1 += a[bb];
        //         num2 += a[bb];
        //         com += a[bb];
        //         bb = bb - 1;
        //     }
        // }

        // if (arr2[bb] == 1 && arr[bb] == 0)
        // {
        //     if (num1 + num2 - com + a[bb] <= r)
        //         num2 += a[bb];
        //     for (i = bb - 1; i >= 0; i--)
        //     {
        //         //   cout<<"second for  for sum"<<endl;
        //         if (arr[i] == 1 && arr2[i] == 1)
        //         {
        //             if (num1 + num2 + a[i] - com <= r)

        //             {
        //                 num1 += a[i];
        //                 num2 += a[i];
        //                 com += a[i];
        //             }
        //         }

        //         else if (arr[i] == 1 && (num1 + num2 + a[i] - com) <= r)
        //             num1 += a[i];
        //     }
        //     for (ll j = bb1; j >= 0; j--)
        //     {
        //         if (arr2[j] == 1 && arr[j] != 1)
        //         {
        //             if (num1 + num2 - com + a[j] <= r)
        //                 num2 += a[j];
        //         }
        //     }
        // }

        // else if (arr[bb] == 1 && arr2[bb] == 0)
        // {
        //     if (num1 + num2 - com + a[bb] <= r)
        //         num1 += a[bb];
        //     for (i = bb - 1; i >= 0; i--)
        //     {
        //         // cout<<" third for for some"<<endl;
        //         if (arr[i] == 1 && arr2[i] == 1)
        //         {
        //             if (num1 + num2 + a[i] - com <= r)

        //             {
        //                 num1 += a[i];
        //                 num2 += a[i];
        //                 com += a[i];
        //             }
        //         }

        //         else if (arr2[i] == 1 && num1 + num2 + a[i] - com <= r)
        //             num2 += a[i];
        //     }
        //     for (ll j = bb1; j >= 0; j--)
        //     {
        //         if (arr[j] == 1 && arr2[j] != 1)
        //         {
        //             if (num1 + num2 - com + a[j] <= r)
        //                 num1 += a[j];
        //         }
        //     }
        // }

        // ll maxm = (num1 * num2);
        // ll ans1 = num1 + num2 - com;

        // num1 = 0;
        // num2 = 0;
        // com = 0;
        // temp /= 2;
        // bb = temp;
        // ll bb2 = bb - 1;

        // while (b[bb] != 1 && bb >= 0)
        // {
        //     //  cout<<" first while for finding first index"<<endl;
        //     bb--;
        // }
        // while (arr[bb] == 1 && arr2[bb] == 1 && bb >= 0)
        // {
        //     //  cout<<"  while for second  case"<<endl;
        //     if (com + a[bb] <= r)
        //     {
        //         num1 += a[bb];
        //         num2 += a[bb];
        //         com += a[bb];
        //         bb--;
        //     }
        // }

        // if (arr2[bb] == 1 && arr[bb] == 0)
        // {
        //     if (num1 + num2 - com + a[bb] <= r)
        //         num2 += a[bb];
        //     for (i = bb - 1; i >= 0; i--)
        //     {
        //         //  cout<<" first for second  case"<<endl;
        //         if (arr[i] == 1 && arr2[i] == 1)
        //         {
        //             if (num1 + num2 + a[i] - com <= r)

        //             {
        //                 num1 += a[i];
        //                 num2 += a[i];
        //                 com += a[i];
        //             }
        //         }

        //         else if (arr[i] == 1 && num1 + num2 + a[i] - com <= r)
        //             num1 += a[i];
        //     }
        //     for (ll j = bb2; j >= 0; j--)
        //     {
        //         if (arr2[j] == 1 && arr[j] != 1)
        //         {
        //             if (num1 + num2 - com + a[j] <= r)
        //                 num2 += a[j];
        //         }
        //     }
        // }

        // else if (arr[bb] == 1 && arr2[bb] == 0)
        // {
        //     if (num1 + num2 - com + a[bb] <= r)
        //         num1 += a[bb];
        //     for (i = bb - 1; i >= 0; i--)
        //     {
        //         //  cout<<"  second! for second  case"<<endl;
        //         if (arr[i] == 1 && arr2[i] == 1)
        //         {
        //             if (num1 + num2 + a[i] - com <= r)

        //             {
        //                 num1 += a[i];
        //                 num2 += a[i];
        //                 com += a[i];
        //             }
        //         }

        //         else if (arr2[i] == 1 && num1 + num2 + a[i] - com <= r)
        //             num2 += a[i];
        //     }
        //     for (ll j = bb2; j >= 0; j--)
        //     {
        //         if (arr[j] == 1 && arr2[j] != 1)
        //         {
        //             if (num1 + num2 - com + a[j] <= r)
        //                 num1 += a[j];
        //         }
        //     }
        // }
        // ll mamm = num1 * num2;
        // if (mamm > maxm)
        // {
        //     cout << num1 + num2 - com << endl;
        // }
        // else
        // {
        //     cout << ans1 << endl;
        // }
    }
}
