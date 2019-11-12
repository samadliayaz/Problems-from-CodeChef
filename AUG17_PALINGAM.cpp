//https://www.codechef.com/AUG17/problems/PALINGAM

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
int main(){
	int t;
	string s1,s2;
	cin>>t;
	while(t--){
		vector<int>v1;
		vector<int>v2;
		bool bo=true,bo2=true,bo3=true;
		v1.assign(34,0);
		v2.assign(34,0);
		cin>>s1>>s2;
		
		for(int i=0;i<s1.size();i++){
			v1[s1[i]-'0'-49]++;
			v2[s2[i]-'0'-49]++;
		}
		
		for(int i=0;i<v1.size();i++){
			if(v1[i]>0 && v2[i]==0){
				bo3=false;
				break;
			}
		}
		if(bo3){
			cout<<"B"<<endl;
		}
		else{
			
		for(int i=0;i<v1.size();i++){
			if(v1[i]>=2 && v2[i]==0){
			cout<<"A"<<endl;
		//	cout<<"111111"<<endl;
			bo=false;
			break;
			}			
		}
		if(bo){
			for(int i=0;i<v1.size();i++){
				int count1=0,count2=0;
				if(v1[i]==1 && v2[i]==0){
				
					for(int j=0;j<v2.size();j++){
						if(v2[j]>=1 ){
							count1++;
							if(v1[j]>=1){
								count2++;
							}
						}
					}
					if(count1==count2 && count1!=0){
						cout<<"A"<<endl;
						bo2=false;
						break;
					}
				}
			}
			if(bo2){
				cout<<"B"<<endl;
			//	cout<<"222222"<<endl;
			}
		}
	}		
		
	}

}