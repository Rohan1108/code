#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
   ll t; cin>>t;
   while(t--)
   {
       ll n,x;
       cin>>n>>x;
       vector<ll> a(n);
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a.rbegin(),a.rend());
       ll ans = 0,y = 0;
       for(ll i=0;i<n;i++)
       {
          y++;
          if(y*a[i]>=x)
          {
             y = 0;
             ans++;
          }
       }
       cout<<ans<<endl;
   }
} 
