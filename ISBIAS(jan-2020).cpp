#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define ull unsigned long long
#define fast      ios::sync_with_stdio(0);cin.tie(0);
typedef vector< long >  vl;
typedef vector< vl >  vvl;
typedef pair<long , long>  pl;
typedef vector<pl>  vpl;
typedef pair<int, pl>  ppl;
typedef vector<ll>  vll;
typedef pair<ll,ll>  lll;
#define test int t;cin>>t;while(t--)
#define pb         push_back
#define ff first
#define ss second
/*******************************/

int main(){
 
 int n,q,i;
 cin>>n>>q;
 vl a(n+1),dp(n+1),sum(n+1);
//  memset(dp,0,sizeof(dp));
//  memset(sum,0,sizeof(sum));
 for(i=1;i<=n;i++)
 cin>>a[i];
for(i=1;i<=n-1;i++)
{
    if(a[i]<a[i+1])
    dp[i]++;
    else
    {
        dp[i]--;
    }
     
    sum[i]=sum[i-1]+dp[i];
}

 while(q--){
     int l,r;
     cin>>l>>r;
     int val=dp[r-1]*dp[l];
     if(val<0)
     cout<<"YES"<<endl;
     else
     {
         cout<<"NO"<<endl;
     }
     

 }

}
