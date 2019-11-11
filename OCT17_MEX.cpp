//https://www.codechef.com/OCT17/problems/MEX

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k,a;
	cin>>t;
	
	while(t--){
		cin>>n>>k;
		int m=n;
		int maxi=0;
		vector<bool>vect(200005,false);
		while(n--){
			cin>>a;
			if(a>maxi)
			maxi=a;
			
			vect[a]=true;
		}

		int i=0,j=0;
		while(i!=k && j<m){
		if(!vect[j]){
			vect[j]=true;
			i++;
		}
		j++;	
		}

		int cvb;
		bool bol=false;
		if(i==k){
			for(int q=j;q<=maxi;q++){
		
				if(vect[q]==false){
					cvb=q;
					bol=true;
			
					break;
				}
			}
			if(!bol){
				cvb=maxi+1;
			
			}
		}
		else{
			int temp=i;
			bool bol1=false;
			for(int q=j;q<=maxi;q++){
				
				if(!vect[q]){
					if(bol1){
						cvb=q;
						break;
					}
					vect[q]=true;
					temp++;
				}
				if(temp==k){
					bol1=true;
				}
			}
			if(!bol1){
				cvb=maxi+1+k-temp;
			}
		}
		cout<<cvb<<endl;
	}
}