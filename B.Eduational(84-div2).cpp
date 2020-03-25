#include<bits/stdc++.h>
using namespace std;
int main(){
    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
     int n,i,j,k,ans;
     cin>>n;
     
     map<int,int>mp;
     
     for(i=1;i<=n;i++)
     mp[i]=1;
     
     for(int j=1;j<=n;j++){
         int k,id=0;
         cin>>k;
         int a[k+1];
         
         for(i=0;i<k;i++)
         cin>>a[i];
         
         for(i=0;i<k;i++){
             if(mp[a[i]]==1)
             {
                 mp[a[i]]=0;
                 id=1;
                 break;
             }
         }
         if(id==0)
         ans=j;
     }
     int f=0;
     for(i=1;i<=n;i++){
         if(mp[i]==1){
             f=1;
             break;
         }
     }
     if(f==1){
         cout<<"IMPROVE"<<endl;
         cout<<ans<<" "<<i<<endl;     
  
	}
	else
	cout<<"OPTIMAL"<<endl;

}
}
