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
 test{
     
     int  n,m,i,j;
     cin>>n>>m;
     ll arr[n+1][m+1],s;
     for(i=1;i<=n;i++){
         for(j=1;j<=m;j++){
             cin>>arr[i][j];
           
         }
     }
     s=n*m;
     for(i=1;i<=n;i++){
         for(j=1;j<=m;j++){
             int mn=min(min(i-1,j-1),min(n-i,m-j));
             int x1=j-1,x2=j+1;
             int y1=i-1,y2=i+1;
             int cnt=0;
             while(cnt<mn){
                 if((arr[i][x1]==arr[i][x2])&&(arr[y1][j]==arr[y2][j]))
                 s++;
                 else
                 break;
                 x1--;
                 x2++;
                 y1--;
                 y2++;
                 cnt++;
             }
             
         }
     }
     
     cout<<s<<endl;
 }
 

}
