//

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

int main(){
	ll t;
	
	cin>>t;
	
	while(t--){
		ll n,u,d,a,count=0;
		bool bol=true;
		cin>>n>>u>>d;
		vector<ll>vect;
		while(n--){
			cin>>a;
			vect.push_back(a);
		}
		
		for(int i=0;i<vect.size()-1;i++){
			ll x=vect[i+1]-vect[i];
			if(x<0){
				if(abs(x)<=d){
					count++;
				}
				else if(bol){
					bol=false;
					count++;
				}
				else{
					break;
				}
			}
			else{
				if(abs(x)<=u){
					count++;
				}
				else{
					break;
				}
			}
		}
		cout<<count+1<<endl;
	}
}