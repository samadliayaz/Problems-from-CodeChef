//https://www.codechef.com/OCT17/problems/CHEFCCYL

#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long int ll;
 
ll mini(ll a, ll b){
	if(a<b)
	return a;
	else
	return b;
}
ll range_query(ll h,ll m, ll c, vector< vector<ll> > &daxili){
	ll a,b;
	if(h>m){
		a=m;
		b=h;
	}
	else{
		a=h;
		b=m;
	}
		ll x=daxili[c-1][b-1]-daxili[c-1][a-1];
	
		ll y=(daxili[c-1][daxili[c-1].size()-1]-daxili[c-1][b-1]+daxili[c-1][a-1]);
		
		ll cvb=mini(x,y);
		
	return cvb;
}
 
 
ll query1(ll v1_,ll c1_,ll v2_,ll c2_, vector<ll> &cycle, vector< vector<ll> > &daxili, vector<pair<ll,pair<ll,ll> > > &connect){
	ll c1,c2,v1,v2;
	if(c1_>c2_){
		c1=c2_;
		c2=c1_;
		v1=v2_;
		v2=v1_;
	}
	else{
		c1=c1_;
		c2=c2_;
		v1=v1_;
		v2=v2_;
	}
	ll a=range_query(v1, connect[c1].first, c1,daxili);
	a+=cycle[c2-1]-cycle[c1-1];
	if(c1!=1)a-=range_query(connect[c1-1].second.first,connect[c1].first,c1,daxili);
	a+=range_query(v2,connect[c2-1].second.first,c2,daxili);
	
	ll b=range_query(v2,connect[c2].first,c2,daxili);
	b+=cycle[cycle.size()-1]-cycle[c2-1]+cycle[c1-1]-range_query(connect[c2-1].second.first,connect[c2].first,c2,daxili);
	bool bol=false;
	if(c1==1){
		b+=range_query(connect[connect.size()-1].second.first,v1,c1,daxili);
	}
	else{
		bol=true;
		b+=range_query(connect[connect.size()-1].second.first,connect[1].first,1,daxili);
		b+=range_query(connect[c1-1].second.first,v1,c1,daxili);
	}
	
	ll cvb=mini(a,b);
	return cvb;
}
 
int main(){
	ll t,n,q,num,a;
	cin>>t;
	while(t--){
		cin>>n>>q;
		vector< vector<ll> > daxili(n+1);
		for(int i=0;i<n;i++){
			cin>>num;
			daxili[i].push_back(0);
			for(int j=1;j<=num;j++){
				cin>>a;
				daxili[i].push_back(a+daxili[i][j-1]);
			}
		}
		vector<pair<ll,pair<ll,ll> > > connect;
		connect.push_back(make_pair(0,make_pair(0,0)));
		
		ll v1,v2,w;
		for(int i=0;i<n;i++){
		cin>>v1>>v2>>w;
		connect.push_back(make_pair(v1,make_pair(v2,w)));
		}
		
		vector<ll>sum_cycl;
		sum_cycl.push_back(0);
		sum_cycl.push_back(connect[1].second.second);
		for(int i=2;i<connect.size();i++){
			ll cvb=sum_cycl[i-1]+range_query(connect[i-1].second.first,connect[i].first,i,daxili)+connect[i].second.second;
			sum_cycl.push_back(cvb);
		}
		
		ll c1,c2;
		
	while(q--){
			cin>>v1>>c1>>v2>>c2;
			cout<<query1(v1,c1,v2,c2,sum_cycl,daxili,connect)<<endl;
		}
		
	}
}  