//https://www.codechef.com/COOK91/problems/CARRAY

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

int main(){
	ll t,n,k,b,a,x;
	cin>>t;
	
	while(t--){
		vector<ll>vect;
		ll mi,count=1;
		cin>>n>>k>>b;
		while(n--){
			cin>>a;
			vect.push_back(a);
		}
		sort(vect.begin(),vect.end());
		mi=vect[0];
		for(int i=1;i<vect.size();i++){
			x=mi*k+b;
			if(vect[i]>=x){
				//cout<<vect[i]<<endl;
				count++;
				mi=vect[i];
			}
		}
		 cout<<count<<endl;
	}
}