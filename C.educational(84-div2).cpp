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
 
int n,m,k;
cin>>n>>m>>k;
int t=2*k;
while(t--){
    int x,y;
    cin>>x>>y;
    
}
cout<<(n*m+m+n-3)<<endl;
cout<<string(n-1,'U');
cout<<string(m-1,'L');
for(int i=1;i<=n;i++){
    if(i%2==1){
    cout<<string(m-1,'R');
    if(i!=n)
    cout<<'D';
    }
    else{
    cout<<string(m-1,'L');
    if(i!=n)
    cout<<'D';
    }
}

}
