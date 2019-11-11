//https://www.codechef.com/SEPT17/problems/MINPERM

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int>vect(n+1,0);
		for(int i=1;i<=n;i++){
			vect[i]=i;
		}
		for(int i=1;i<n;i++){
			if(vect[i]==i){
				int temp=vect[i+1];
				vect[i+1]=vect[i];
				vect[i]=temp;
			}
		}
		if(vect[n]==n){
			int temp=vect[n];
		vect[n]=vect[n-1];
		vect[n-1]=temp;
		}
	/*	*/
		for(int i=1;i<=n;i++){
			cout<<vect[i]<<" ";
		}
		cout<<endl;
	}
}