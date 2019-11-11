//https://www.codechef.com/OCT17/problems/POINTCN

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){
	ll t,n,c,h,a,b;
	cin>>t;
	
	while(t--){
		cin>>n>>c>>h;
		for(ll i=0;i<2*n;i++){
			cin>>a>>b;
		}
		
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==0 && j==0){
					cout<<0;
				}
				else if(i==0){
					cout<<1;
				}
				else if(i!=0 && j==0){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			cout<<endl;
		}
	}
}