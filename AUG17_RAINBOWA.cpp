//https://www.codechef.com/AUG17/problems/RAINBOWA

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,a;
	cin>>t;
	while(t--){
		cin>>n;
		bool bo=true;
		vector<int>vect;
		set<int>seta;
		int k=n;
		while(n--){
			cin>>a;
			vect.push_back(a);
			seta.insert(a);
		}
		
		if(vect[0]!=1){
			cout<<"no"<<endl;
		}
		else if(seta.size()!=7){
			cout<<"no"<<endl;
		}
		else if(vect[vect.size()/2]>7){
			cout<<"no"<<endl;
		}
		else{
		for(int i=0;i<=vect.size()/2;i++){
			if(vect[i]!=vect[vect.size()-1-i]){
				bo=false;
				break;
			}
		}	
		
		if(!bo){
			cout<<"no"<<endl;
		}
		else{
			
		for(int i=1;i<=vect.size()/2;i++){
			if(vect[i]==vect[i-1] || vect[i]-vect[i-1]==1){
				
			}
			else{
			bo=false;
			break;	
			}
		}
		if(!bo){
			cout<<"no"<<endl;
		}	
		else{
			for(int i=vect.size()/2;i<vect.size()-1;i++){
				if(vect[i]-vect[i+1]>1 || vect[i]-vect[i+1]<0){
					bo=false;
					break;
				}
			}
			if(!bo){
				cout<<"no"<<endl;
			}
			else{
				cout<<"yes"<<endl;
			}
		}
	}
}
	}
}