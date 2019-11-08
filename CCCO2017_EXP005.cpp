//https://www.codechef.com/CCCO2017/problems/EXP005

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	string s1,s2;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		string cvb1="";
		string cvb2="";
		bool bol1=false,bol2=false;
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='('){
				bol2=true;
				if(i>0){
					if(s1[i-1]=='-'){
					 bol1=true;
					}
				}
			}
			else if(s1[i]==')'){
				bol2=false;
				bol1=false;
			}
			
			else if(bol2 && bol1){
				if(s1[i-1]=='('){
					if(s1[i]!='-'){
						cvb1+=s1[i];
					}
					else{
						cvb1.erase(cvb1.end()-1);
						cvb1+='+';
					}
				}
				else if(s1[i]=='-'){
					cvb1+='+';
				}
				else if(s1[i]=='+'){
					cvb1+='-';
				}
				else{
					cvb1+=s1[i];
				}
			}
			else if(bol2){
				cvb1+=s1[i];
			}
			else if(s1[i]!=')' && s1[i]!='('){
				cvb1+=s1[i];
			}
			
		}
	//
	
	bol1=false,bol2=false;
		for(int i=0;i<s2.size();i++){
			if(s2[i]=='('){
				bol2=true;
				if(i>0){
					if(s2[i-1]=='-'){
					 bol1=true;
					}
				}
			}
			else if(s2[i]==')'){
				bol2=false;
				bol1=false;
			}
			
			else if(bol2 && bol1){
				if(s2[i-1]=='('){
					if(s2[i]!='-'){
						cvb2+=s2[i];
					}
					else{
						cvb2.erase(cvb2.end()-1);
						cvb2+='+';
					}
				}
				else if(s2[i]=='-'){
					cvb2+='+';
				}
				else if(s2[i]=='+'){
					cvb2+='-';
				}
				else{
					cvb2+=s1[i];
				}
			}
			else if(bol2){
				cvb2+=s2[i];
			}
			else if(s2[i]!=')' && s2[i]!='('){
				cvb2+=s2[i];
			}
			
		}
		if(cvb1==cvb2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}