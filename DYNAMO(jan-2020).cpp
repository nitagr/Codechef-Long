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
#define m 1000000007
/*******************************/
 ll power(ll a,ll b){
     ll result=1;
     if(b==0)
     return 1;
     while(b>0){
     if(b%2==1){
         result=(result*a);
     }
     a=(a*a);
     b=b/2;
     }
     return result;
     
 }
int main(){
 test{
     	
		ll s,a,b,c,d,e,f,n;
		cin>>n;
		cin>>a;
        ll p=power(10,n);
		s = p<<1;
        s+=a;
		cout<<s<<endl;
        fflush(stdout);
		cin>>b;
		c = p ;
        c-=b;
		cout<<c<<endl;
        fflush(stdout);
		cin>>d;
		e = p;
        e-=d;
		cout<<e<<endl;
        fflush(stdout);

  cin>>f;
  if(f==1)continue;
  else break;

 }
 

}
