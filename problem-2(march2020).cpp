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
     int n,q,i;
     scanf("%d %d",&n,&q);
     
     long int a[n+1];
     
     for(i=0;i<n;i++)
     scanf("%ld",&a[i]);
     
     int ev=0,od=0;
     
     for(i=0;i<n;i++){
         int x=__builtin_popcount(a[i]);
         if(x%2==0)
         ev++;
         else
         od++;
     }
      
     while(q--){
         long int ans1,ans2;
         int p;
         scanf("%d",&p);
         int y=__builtin_popcount(p);
         if(y%2==0){
             ans1=ev;
             ans2=od;
         }
         else{
             ans1=od;
             ans2=ev;
         }
         printf("%ld %ld\n",ans1,ans2);
         
     }
     
 }

}

