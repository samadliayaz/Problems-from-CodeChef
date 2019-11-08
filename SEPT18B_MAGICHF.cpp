//link to the problem
//https://www.codechef.com/SEPT18B/problems/MAGICHF

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,x,s,a,b;
	cin>>t;
	
	while(t--){
		cin>>n>>x>>s;
		while(s--){
			cin>>a>>b;
			if(a==x){
				x=b;
			}
			else if(b==x){
				x=a;
			}
		}
		cout<<x<<endl;
	}
}