//https://www.codechef.com/JAN18/problems/PRTITION

#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ull;
 
int main(){
	ull n,t,k;
	ull sum;
	
	cin>>t;
	
	while(t--){
		cin>>k>>n;
		vector<int>v(n+1,0);
		if(n%2==0){
			sum=(n/2)*(n+1);
		}
		else{
		sum=(n)*((n+1)/2);	
		}
		
		ull cem=0;
	//	cout<<"sum "<<sum<<endl;
	ull f=sum-k;
	 if((f)%2!=0){
			cout<<"impossible"<<endl;
		}
		else{
			sum=(sum-k)/2;
			for(int i=n;i>0;i--){
				if(i==k){
					v[i]=2;
				}
				else{
					ull c=cem+i;
					if((c)<=sum){
						ull q=sum-c;
						if(q==1){
							if(k==1){
								v[i]=0;
							}
							else{
						v[i]=1;
						cem+=i;	
						}
						}
						else if(q==2){
							if(k==2){
								v[i]=0;
							}
							else{
						v[i]=1;
						cem+=i;	
						}
						}
						else{
						v[i]=1;
						cem+=i;	
						}
						
						//cout<<"cem "<<cem<<" sum "<<sum<<endl;
					}
					
				}
			}
			if(cem!=sum){
				cout<<"impossible"<<endl;
			}
			else{
			v[k]=2;
			for(int i=1;i<=n;i++){
			cout<<v[i];
		}
		cout<<endl;}
		}
		
		
	}
} 