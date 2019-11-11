//https://www.codechef.com/CCCO2017/problems/EASY001

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	bool t=false;
	
	while(cin>>n){
		if(!t){
			if(n!=42){
				cout<<n<<endl;
			}
			else{
				t=true;
			}
		}
	}
}