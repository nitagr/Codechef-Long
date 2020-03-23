 //******* one68_ *******//
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
#define go_t int t;cin>>t;while(t--)
#define pb         push_back
#define ff first
#define ss second
#define mod 1000000007
const int dx[4] = {0,0,-1,1};
const int dy[4] = {-1,1,0,0};
 
/**********************************************************/
 
int main(){
 go_t{
     int n,m;
     cin>>n>>m;
     int f[n+1],p[n+1],i,j;
     for(i=0;i<n;i++)
     cin>>f[i];
     for(i=0;i<n;i++)
     cin>>p[i];
     
     map<int,int>mp;
     for(i=0;i<n;i++){
         mp[f[i]]+=p[i];
     }
     int mn=1e9;
     for(auto it : mp){
         mn=min(mn,it.ss);

     }
     cout<<mn<<endl;
 }
 
 
 
}

