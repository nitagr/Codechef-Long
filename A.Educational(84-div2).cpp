#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    long long int n,k;
    cin>>n>>k;
    if(k*k>n)
    cout<<"NO"<<endl;
    else if(n%2==0){
        if(k%2==0){
            cout<<"YES"<<endl;
            
        }
        else
        cout<<"NO"<<endl;
        
    }
    else{
        if(k%2==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	}
	return 0;
}
