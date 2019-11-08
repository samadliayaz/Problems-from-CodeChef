//https://www.codechef.com/COOK93A/problems/BINIM

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	
	int t,n;
	string s,a;
	
	cin>>t;
	
	while(t--){
		cin>>n>>s;
		int a1=0,a0=0;
		//cout<<a1<<" "<<a0<<endl;
		while(n--){
			cin>>a;
			if(a[0]=='0'){
				//cout<<"a0"<<endl;
				for(int i=0;i<a.size();i++){
					if(a[i]=='0')a0++;
					
				}
			}
			else{
				for(int i=0;i<a.size();i++){
					if(a[i]=='1')a1++;
					
				}
			}
		}
		
		//cout<<a0<<" "<<a1<<endl;
		if(s=="Dee"){
			if(a0>a1){
				cout<<"Dee"<<endl;
			}
			else{
				cout<<"Dum"<<endl;
			}
		}
		else{
			if(a1>a0){
				cout<<"Dum"<<endl;
			}
			else{
				cout<<"Dee"<<endl;
			}
		}
	}
}