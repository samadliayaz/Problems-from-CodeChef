//https://www.codechef.com/COOK86/problems/LIKECS01

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		set<char>seta;
		for(int i=0;i<s.size();i++){
			seta.insert(s[i]);
		}
		if(s.size()!=seta.size()){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}