//https://www.codechef.com/SEPT18B/problems/ANDSQR

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,l,r,a,q;
	cin>>t;
	
	while(t--){
		cin>>n>>q;
		vector<int>vect;
		
		for(int i=0;i<n;i++){
			cin>>a;
			vect.push_back(a);
		}
		while(q--){
			cin>>l>>r;
			int count=0;
			
		for(int j=l-1;j<=r-1;j++){
			a=vect[j];
			for(int i=j;i<=r-1;i++){
				a&=vect[i];
				int b=sqrt(a);
				if(a==0){
					count+=(r-i);
					break;
				}
				if(b*b==a){
					count++;
				}
			}
			
		}
			cout<<count<<endl;
		}
	}
}