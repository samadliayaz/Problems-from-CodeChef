//https://www.codechef.com/SEPT17/problems/CHEFSUM

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
int main(){
	ll t,n,mini=1e12,sum,a,temp;
	cin>>t;
	while(t--)
	{
		mini=1e12;
		vector<ll>vect;
		cin>>n;
		while(n--){
			cin>>a;
			vect.push_back(a);
		}
		vector<ll>vect2(vect.size()+1,0);
		for(ll i=0;i<vect.size();i++){
			vect2[i+1]+=vect2[i]+vect[i];
		}
	
	//	cout<<endl;
		for(ll i=1;i<vect2.size();i++){
			sum=vect2[i]+vect2[vect2.size()-1]-vect2[i-1];
			if(sum<mini){
			//	cout<<sum<<" "<<mini<<endl;
				temp=i;
				mini=sum;
				
			}
		}
		cout<<temp<<endl;
	}
}