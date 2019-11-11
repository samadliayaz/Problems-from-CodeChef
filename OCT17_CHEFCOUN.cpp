//https://www.codechef.com/OCT17/problems/CHEFCOUN

#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
int main(){
	ll n;
	
	int t;
	cin>>t;
	while(t--){
		ll sum=pow(2,32);
		cin>>n;
		vector<ll>vect(n+1,1);
		for(int i=n-1;i>=1;i--){
			ll a=sum-(i+2);
			if(a>100000){
				a=100000;
				vect[n-i-1]=a;
				sum-=a;
			}
			else{
				vect[n-i-1]=a;
				sum-=a;
				break;
			}
		}
		for(int i=0;i<n;i++){
			cout<<vect[i]<<" ";
		}
	}
	
} 