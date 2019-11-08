//link to the problem 
//https://www.codechef.com/SEPT18B/problems/PHOTOCOM

#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
return (!b) ? a : gcd(b,a % b);
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

int main(){
	int t,h1,w1,h2,w2,ekobh,ekobw;
	string str1,str2;
	cin>>t;
	
	while(t--){
		cin>>h1>>w1;
		cin>>str1;
		cin>>h2>>w2;
		cin>>str2;
		ekobh=lcm(h1,h2);
		ekobw=lcm(w1,w2);
		char a;
		string cvbb1="";
		for(int i=0;i<h1;i++){
			string b="";
			for(int j=0;j<w1;j++){
				a=str1[i*(w1)+j];
				b+=string(ekobw/w1,a);
			}
			for(int k=0;k<(ekobh/h1);k++){
				cvbb1+=b;
			}
		}
		char a2;
		string cvbb2="";
		for(int i=0;i<h2;i++){
			string b2="";
			for(int j=0;j<w2;j++){
				a2=str2[i*(w2)+j];
				b2+=string(ekobw/w2,a2);
			}
			for(int k=0;k<(ekobh/h2);k++){
				cvbb2+=b2;
			}
		}
		int count=0;
		for(int i=0;i<cvbb2.length();i++){
			if(cvbb1[i]==cvbb2[i]){
				count++;
			}
		}
		cout<<count<<endl;
	}
}
