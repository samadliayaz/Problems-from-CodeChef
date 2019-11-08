//link to the problem
//https://www.codechef.com/SEPT18B/problems/CHEFADV/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,x,m,y,t;
	cin>>t;
	
	while(t--){
		cin>>n>>m>>x>>y;
		if(n==2 && m==2){
			cout<<"Chefirnemo"<<endl;
		}
		else if((n-1)%x==0 && (m-1)%y==0){
			cout<<"Chefirnemo"<<endl;
		}
		else if(n>=2 && m>=2 && (n-2)%x==0 && (m-2)%y==0){
			cout<<"Chefirnemo"<<endl;
		}
		else{
			cout<<"Pofik"<<endl;
		}
	}
}