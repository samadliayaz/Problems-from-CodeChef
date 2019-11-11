//https://www.codechef.com/LTIME52/problems/C00K0FF

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	string s;
	
	cin>>t;
	
	while(t--){
		set<string>seta;
		set<string> :: iterator itr;
		cin>>n;
		while(n--){
			cin>>s;
		    seta.insert(s);
		}
		bool bol1=false,bol2=false,bol3=false,bol4=false,bol5=false;
		for(itr=seta.begin();itr!=seta.end();itr++){
		if(*itr=="cakewalk")
		bol1=true;
		else if(*itr=="simple")  
		bol2=true;
		else if(*itr=="easy") 
		bol3=true;
		else if(*itr=="easy-medium" || *itr=="medium")
		bol4=true;
		else if(*itr=="medium-hard"  || *itr=="hard")
		bol5=true;
		}
		
		if(bol1 && bol2 && bol3 && bol4 && bol5){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}