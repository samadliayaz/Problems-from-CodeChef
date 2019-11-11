//https://www.codechef.com/SEPT17/problems/CHEFPDIG

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		sort(s.begin(),s.end());
		vector<int>vect(10,0);
		for(int i=0;i<s.size();i++){
			vect[s[i]-'0']+=1;
		}
		string str="";
		if(vect[9]>=1 && vect[0]>=1){
			str+=(90-48+'0');
		}
		for(int i=5;i<=9;i++){
			if(vect[6]>=1 && vect[i]>=1){
				if(i==6){
					if(vect[i]>=2){
						str+=60+i-48+'0';
					}
				}
				else{
					str+=60+i-48+'0';
				}
			}
		}
		for(int i=8;i>=7;i--){
			for(int j=9;j>=0;j--){
				if(vect[i]>=1 && vect[j]>=1){
					if(i==j){
						if(vect[i]>=2){
							str+=(i*10+j-48+'0');
						}
					}
					else{
						str+=(i*10+j-48+'0');
					}
				}
			}
		}
		sort(str.begin(),str.end());
		cout<<str<<endl;
	}
}