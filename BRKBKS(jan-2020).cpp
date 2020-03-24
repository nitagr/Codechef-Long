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
 fast
 test{
  int s,w1,w2,w3;
  cin>>s>>w1>>w2>>w3;

  if(s>=w1+w2+w3)
  cout<<1<<endl;
  else{
     if(s>=w1+w2||s>=w2+w3)
     cout<<2<<endl;
     else
     cout<<3<<endl;
  }

 }
 

}
