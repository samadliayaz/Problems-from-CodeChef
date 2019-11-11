//https://www.codechef.com/OCT17/problems/CHEFGP

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		string s;
		string cvb="";
		int x,y;
		cin>>s;
		cin>>x>>y;
		int a=0,b=0,qaliq_b,number_b,say_a,say_b,s_a,s_b,qal_a,qal_b,number_a,qaliq_a;
		for(int i=0;i<s.size();i++){
			if(s[i]=='a'){
				a++;
			}
			else{
				b++;
			}
		}
		s_a=a/x;
		s_b=b/y;
		qal_a=a%x;
		qal_b=b%y;
		say_a=s_a;
		say_b=s_b;
		bool bol_a=false,bol_b=false;
		if(qal_a!=0){
			say_a=s_a+1;
			bol_a=true;
		}
		if(qal_b!=0){
			say_b=s_b+1;
			bol_b=true;
		}
		
	//	cout<<say_a<<" "<<say_b<<endl;
		if(say_a>say_b){
		
			number_b=b/(say_a-1);
			qaliq_b=b%(say_a-1);			
			//
			if(number_b>0){
		
		for(int i=0;i<say_a-1;i++){
			for(int j=0;j<x;j++){
				cvb+="a";
			}
			for(int j=0;j<number_b;j++){
				cvb+="b";
			
			}
			if(qaliq_b>0){
				cvb+="b";
				qaliq_b--;
			}
		}
		if(bol_a){
			for(int i=0;i<qal_a;i++){
			cvb+="a";
		}
		}
		else{
		for(int j=0;j<x;j++){
				cvb+="a";
			}	
		}
		}
		else{
			for(int i=0;i<say_a-1;i++){
			for(int j=0;j<x;j++){
				cvb+="a";
			}
			if(qaliq_b>0){
				cvb+="b";
				qaliq_b--;
			}
			else{
				cvb+="*";
			}
		}
		if(bol_a){
			for(int i=0;i<qal_a;i++){
			cvb+="a";
		}
		}
		else{
			for(int j=0;j<x;j++){
				cvb+="a";
			}
		}
		}
		}
		
		else if(say_b>say_a){
			number_a=a/(say_b-1);
			qaliq_a=a%(say_b-1);
			
			if(number_a>0){
		for(int i=0;i<say_b-1;i++){
			for(int j=0;j<y;j++){
				cvb+="b";
			}
			for(int j=0;j<number_a;j++){
				cvb+="a";
			}
			if(qaliq_a>0){
				cvb+="a";
				qaliq_a--;
			}
		}
		if(bol_b){
			for(int i=0;i<qal_b;i++){
			cvb+="b";
		}
		}
		else{
		for(int j=0;j<y;j++){
				cvb+="b";
			}	
		}
		}
		
		else{
			for(int i=0;i<say_b-1;i++){
			for(int j=0;j<y;j++){
			cvb+="b";
			}
			if(qaliq_a>0){
				cvb+="a";
				qaliq_a--;
			}
			else{
				cvb+="*";
			}
		}
		if(bol_b){
			for(int i=0;i<qal_b;i++){
			cvb+="b";
		}
		}
		else{
			for(int j=0;j<y;j++){
			cvb+="b";
			}
		}
		}
		
		}
		
		else{
		
		for(int i=0;i<say_a-1;i++){
			for(int j=0;j<x;j++){
				cvb+="a";
			}
			for(int j=0;j<y;j++){
				cvb+="b";
			}
		}
		if(bol_a){
		for(int i=0;i<qal_a;i++){
			cvb+="a";
		}	
		}
		else{
			for(int j=0;j<x;j++){
				cvb+="a";
			}
		}
		
		if(bol_b){
		for(int i=0;i<qal_b;i++){
			cvb+="b";
		}	
		}
		else{
			for(int j=0;j<y;j++){
				cvb+="b";
			}
		}
		
		}

	cout<<cvb<<endl;
		
	}
}
