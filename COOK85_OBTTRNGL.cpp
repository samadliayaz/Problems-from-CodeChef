//https://www.codechef.com/COOK85/problems/OBTTRNGL

#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int t,k,a,b,n;
	double d;
	cin>>t;
	
	while(t--){
		cin>>k>>a>>b;
		d=k/2+1;
	
		if(abs(b-a)==d-1 && k%2==0){
			cout<<0<<endl;
		}
		else if(b>a){
			if(b-a<d){
				cout<<b-a-1<<endl;
			}
			else{
				cout<<a+k-b-1<<endl;
			}
		}
		else{
			if(a-b<d){
			
				cout<<a-b-1<<endl;
			}
			else{
				cout<<b+k-a-1<<endl;
			}
		}
	
	}
}