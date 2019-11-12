//https://www.codechef.com/AUG17/problems/HILLJUMP

#include<bits/stdc++.h>

using namespace std;

#define pb push_back
typedef long long int ll;
int main(){
	ll n,q,a,b,c,d;
	vector<ll>vect;
	vect.pb(0);
	cin>>n>>q;
	
	while(n--){
		cin>>a;
		vect.pb(a);
	}
	while(q--){
		cin>>a;
		
		ll count=0,count2=0;
		if(a==1){
			cin>>b>>c;
			ll j=b;
			ll max=vect[b];
			
			for(ll i=b+1;i<vect.size();i++){
				if(vect[i]>max){
					count++;
					j=i;
					count2=0;
					max=vect[i];
				}
				else{
					count2++;
				}
				if(count2>=100){
					//cout<<j<<endl;
					break;
				}
				if(count==c){
				//	cout<<j<<endl;
					break;
				}
				
				if(i==vect.size()-1){
				//	cout<<j<<endl;
					break;
				}
			}
			cout<<j<<endl;
			
		}
		else{
			cin>>b>>c>>d;
			for(ll i=b;i<=c;i++){
				vect[i]+=d;
			}
		}
	}
}