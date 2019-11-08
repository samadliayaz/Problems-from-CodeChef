//link to the problem
//https://www.codechef.com/SEPT18B/problems/XORIER/

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
int main(){
	ll t,n,a;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		vector<ll>vect(1000009,0);
		set<ll>set_odd;
		set<ll>set_even;
		set<ll> :: iterator itr;
		ull sum_even=0,sum_odd=0;
		while(n--){
			cin>>a;
			vect[a]++;
			if(a%2==0){
				set_even.insert(a);
				sum_even++;
			}
			else{
				set_odd.insert(a);
				sum_odd++;
			}
		}
		unsigned long long int cvb=0;
		for(itr=set_even.begin();itr!=set_even.end();itr++){
			ll x=*itr;
			x/=2;
			if(x%2==0){
				ull f=vect[*itr]*(sum_even-vect[*itr]-vect[*itr+2]);
				cvb+=f;
				sum_even-=vect[*itr];	
			}
			else{
				ull f=vect[*itr]*(sum_even-vect[*itr]);
				cvb+=f;
				sum_even-=vect[*itr];
			}	
		}
		
		for(itr=set_odd.begin();itr!=set_odd.end();itr++){
			ll x=*itr;
			x/=2;
			if(x%2==0){
				ull f=vect[*itr]*(sum_odd-vect[*itr]-vect[*itr+2]);
				cvb+=f;
				sum_odd-=vect[*itr];
			}
			else{
				ull f=vect[*itr]*(sum_odd-vect[*itr]);
				cvb+=f;
				sum_odd-=vect[*itr];
			}
			
		}
		cout<<cvb<<endl;
	}
}