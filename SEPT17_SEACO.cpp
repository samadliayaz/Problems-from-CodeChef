//https://www.codechef.com/SEPT17/problems/SEACO

#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define inf 1000000007
vector<ll> t;
vector<ll> t_add;
 
vector<ll> t1;
vector<ll> t1_add;
 
void push(ll v, ll vl, ll vr){
if(t_add[v] != 0){
t[v] += (t_add[v]%inf * (vr-vl+1)%inf)%inf;
t[v]%=inf;
if(vl != vr){
t_add[2*v+1] += (t_add[v])%inf;
t_add[2*v+1]%=inf;
t_add[2*v+2] += (t_add[v])%inf;
t_add[2*v+2]%=inf;
}
t_add[v] = 0;
}
}
 
void build(ll v, ll vl, ll vr, vector<ll> &a){
if(vl == vr){
t[v] = a[vl]%inf;
return;
}
ll vm = vl + (vr-vl)/2;
build(2*v+1, vl, vm, a);
build(2*v+2, vm+1, vr, a);
t[v] = (t[2*v+1]%inf + t[2*v+2]%inf)%inf;
 
}
 
ll query(ll v, ll vl, ll vr, ll l, ll r){
push(v,vl,vr);
if(l > vr || r < vl)
return 0;
if(l <= vl && r>= vr)
return t[v]%inf;
ll vm = vl + (vr-vl)/2;
ll ql = query(2*v+1, vl, vm, l,r);
ll qr = query(2*v+2,vm+1, vr, l,r);
return (ql%inf + qr%inf)%inf;
}
 
void modify(ll v, ll vl, ll vr, ll l, ll r, ll value){
push(v,vl,vr);
 
if(l > vr || r < vl)
return;
if(l <= vl && r>= vr){
t_add[v] = value%inf;
push(v,vl,vr);
return;
}
 
ll vm = vl + (vr-vl)/2;
modify(2*v+1, vl,vm, l, r, value);
modify(2*v+2, vm+1, vr,l, r, value);
t[v] = (t[v*2+1]%inf + t[2*v+2]%inf)%inf;
t[v]%=inf;
}
 
 
 
 

void push1(ll v, ll vl, ll vr){
if(t1_add[v] != 0){
t1[v] += (t1_add[v]%inf * (vr-vl+1)%inf)%inf;
t1[v]%=inf;
if(vl != vr){
t1_add[2*v+1] += (t1_add[v])%inf;
t1_add[2*v+1]%=inf;
t1_add[2*v+2] += (t1_add[v])%inf;
t1_add[2*v+2]%=inf;
}
t1_add[v] = 0;
}
}
 
void build1(ll v, ll vl, ll vr, vector<ll> &a){
if(vl == vr){
t1[v] = a[vl]%inf;
return;
}
ll vm = vl + (vr-vl)/2;
build1(2*v+1, vl, vm, a);
build1(2*v+2, vm+1, vr, a);
t1[v] = (t1[2*v+1]%inf + t1[2*v+2]%inf)%inf;
 
}
 
ll query1(ll v, ll vl, ll vr, ll l, ll r){
push1(v,vl,vr);
if(l > vr || r < vl)
return 0;
if(l <= vl && r>= vr)
return t1[v]%inf;
ll vm = vl + (vr-vl)/2;
ll ql = query1(2*v+1, vl, vm, l,r);
ll qr = query1(2*v+2,vm+1, vr, l,r);
return (ql%inf + qr%inf)%inf;
}
 
void modify1(ll v, ll vl, ll vr, ll l, ll r, ll value){
push1(v,vl,vr);
 
if(l > vr || r < vl)
return;
if(l <= vl && r>= vr){
t1_add[v] = value%inf;
push1(v,vl,vr);
return;
}
 
ll vm = vl + (vr-vl)/2;
modify1(2*v+1, vl,vm, l, r, value);
modify1(2*v+2, vm+1, vr,l, r, value);
t1[v] = (t1[v*2+1]%inf + t1[2*v+2]%inf)%inf;
t1[v]%=inf;
}
int main(){
//	ll inf=1000000007;
	ll n,m,a,l,r,z;
	cin>>z;
	
	while(z--){
		cin>>n>>m;
		vector<ll>arr(n+10,1);
		vector<ll>arr1(n+10,0);
		vector<pair<ll,pair<ll,ll > > > vect;
		vect.push_back(make_pair(0, make_pair(0, 0)));
		while(m--){
			cin>>a>>l>>r;
		    vect.push_back(make_pair(a, make_pair(l, r)));
		}
	t.assign(4*(arr.size()-1), 0);
    t_add.assign(4*(arr.size()-1),0);
    
    t1.assign(4*(arr1.size()-1), 0);
    t1_add.assign(4*(arr1.size()-1),0);
    
    build(0,0,arr.size()-1, arr);
    
     build1(0,0,arr1.size()-1, arr1);
     
   // cout<<"ayaz "<<query(0,0,arr.size()-1, 1,1)<<endl;
     for(ll i=vect.size()-1;i>=1;i--){
    	if(vect[i].first==2){
				ll range_l=vect[i].second.first;
				ll range_r=vect[i].second.second;
			//	cout<<"l "<<range_l<<" r "<<range_r<<endl;
				ll value=query(0,0,arr.size()-1, i-1,i-1)%inf;
			//	cout<<"vallll "<<value<<endl;
				modify(0,0,arr.size()-1, range_l-1,range_r-1, value);
				
			/*	for(int j=vect[i].second.first;j<=vect[i].second.second.first;j++){
					
					
						vect[j].second.second.second+=(vect[i].second.second.second)%inf;
						vect[j].second.second.second%=inf;	
					
					
				}*/
			}
		else{
			    ll value=query(0,0,arr.size()-1, i-1,i-1)%inf;
			  //  cout<<"value "<<value<<endl;
			  modify1(0,0,arr1.size()-1, vect[i].second.first-1,vect[i].second.second-1, value);
			/*	arr1[vect[i].second.first]+=value%inf;
				arr1[vect[i].second.first]%=inf;
				arr1[vect[i].second.second+1]-=value%inf;
				arr1[vect[i].second.second+1]%=inf;*/
			}
	}
		for(ll i=1;i<arr1.size()-9;i++){
			cout<<query1(0,0,arr1.size()-1, i-1,i-1)%inf<<" ";
		}
		cout<<endl;
		
	}
		
} 