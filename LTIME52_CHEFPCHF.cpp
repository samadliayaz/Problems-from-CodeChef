//https://www.codechef.com/LTIME52/problems/CHEFPCHF

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,p,q,f,n;
	cin>>t;
	while(t--){
		cin>>n>>q;
		vector<int>vect(n);
		while(q--){
			cin>>p>>f;
			vect[p-1]=f;
		}
		unsigned long long int count=0;
		
		for(int i=0;i<vect.size();i++){
			for(int j=i;j<vect.size();j+=2){
				bool bol=false;
				int w=0;
				for(int k=i;k<i+(j-i)/2;k++){
					if(vect[k]!=vect[j-w]){
						bol=true;
						break;
					}
					w++;
				}
				if(!bol){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}