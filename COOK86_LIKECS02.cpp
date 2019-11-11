//https://www.codechef.com/COOK86/problems/LIKECS02

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
	ull t,x,a;
	long double s;
	cin>>t;
	while(t--){
		
		cin>>a;
		if(a==1){
			cout<<1<<endl;
		}
		else{
		
		if(a%2!=0){
			ll m=(a-1)/2;
			for(ll i=a-m;i<=a+m;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else{
			ll m=a/2;
			for(ll i=a-m;i<=a+m-1;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
	}
}