//https://www.codechef.com/JAN18/problems/RECTANGL

#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,d,t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
	
	if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	
}