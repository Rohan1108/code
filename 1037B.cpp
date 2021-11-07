#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll dp[100005],h[100005];

int main()
{
   // ll t; cin>>t;
   // while(t--)
   // {
   // }
      ll n,s;
      cin>>n>>s;
      ll a[n];
      for(ll i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a,a+n);
      ll ans = 0;
      for(ll i=0;i<n;i++)
      {
        if(i==n/2)
        {
          if(a[i]!=s) 
          {
             ans += abs(a[i]-s);
          }
        }
        else if(i>n/2)
        {
          if(a[i]<s)
          {
            ans += s-a[i];
          }
        }
        else
        {
          if(a[i]>s)
          {
            ans += a[i]-s;
          }
        }
      }
      cout<<ans<<endl;
} 
