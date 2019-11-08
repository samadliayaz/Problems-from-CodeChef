//https://www.codechef.com/JAN18/problems/KCON

#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
	ll t,n,k,a;
	
	cin>>t;
	
	while(t--){
		cin>>n>>k;
		vector<ll>vect;
		ll overal=0,maxi=-1000000000000000,umummax=-1000000000000000,umummax2=-1000000000000000;
		while(n--){
			cin>>a;
			vect.push_back(a);
			overal+=a;
		}
		
		ll pre=0,pre_max=-1000000000000000000,sufi_max=-1000000000000000000,sufi=0,cem=-1000000000000000000;
		for(int i=0;i<vect.size();i++){
			maxi=max(maxi+vect[i],vect[i]);
			umummax=max(umummax,maxi);
			pre+=vect[i];
			pre_max=max(pre_max,pre);
			int j=vect.size()-1-i;
			sufi+=vect[j];
			sufi_max=max(sufi_max,sufi);
		}
		maxi=-1000000000000;
		if(k>1){
			int say=vect.size();
			for(int i=0;i<say;i++){
				vect.push_back(vect[i]);
			}
			for(int i=0;i<vect.size();i++){
			maxi=max(maxi+vect[i],vect[i]);
			umummax2=max(umummax2,maxi);
		}
		}
		if(k>2){
			cem=(k-2)*overal;
			cem+=sufi_max+pre_max;
		}
		overal*=k;
		ll cvb=max(max(cem,overal),max(umummax,umummax2));
		cout<<cvb<<endl;
		
	}
} 