//https://www.codechef.com/MAY18B/problems/DBFB

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t,m,n;
	ll sum,maxi=1000000007,a,a0,a1,x;
	cin>>t;
	
	while(t--){
		cin>>m>>n;
		sum=0;
		for(int i=0;i<m;i++){
			cin>>a;
			a*=m;
			a%=maxi;
			sum+=a;
			sum%=maxi;
		}
		a0=sum;
		sum=0;
		for(int i=0;i<m;i++){
			cin>>a;
			a*=m;
			a%=maxi;
			sum+=a;
			sum%=maxi;
		}
		a1=sum;
		for(int i=2;i<n;i++){
			x=a1;
			a1=(a0%maxi+a1%maxi)%maxi;
			a0=x;
		}
		cout<<a1<<endl;
	}
}

