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
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=1;i<=n;i++)
   {
      cin>>a[i];
      h[a[i]]++;
   }
   dp[0] = 0;
   dp[1] = h[1];
   for(ll i=2;i<=100000;i++)
   {
      dp[i] = max(dp[i-1],dp[i-2]+h[i]*i);
   }
   cout<<dp[100000];
}
