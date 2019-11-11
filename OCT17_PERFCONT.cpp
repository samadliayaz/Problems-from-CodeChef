//https://www.codechef.com/OCT17/problems/PERFCONT

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		unsigned long long int p;
		long long int a,mini,maxi;
		int count_mini=0,count_maxi=0;
		bool bol=false;
		cin>>n>>p;
		mini=p/2;
		maxi=p/10;
		
		while(n--){
			cin>>a;
			if(a>=mini){
			count_mini++;	
			}
			
			else if(a<=maxi){
			count_maxi++;	
			}
			
		}
	    if(count_mini==1 && count_maxi==2){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}