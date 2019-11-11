//https://www.codechef.com/OCT17/problems/MARRAYS

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ll t,n,m,a,mini,maxi,sum_a,sum_b;
	cin>>t;
	
	while(t--){
		cin>>n;
		sum_a=0;
		sum_b=0;
		
		cin>>m;
		vector<ll>vect;
		while(m--){
			cin>>a;
			vect.push_back(a);
		}
		mini=*min_element(vect.begin(),vect.end());
		maxi=*max_element(vect.begin(),vect.end());
		
		vector<ll>vect1;
		vector<ll>vect2;
		
		for(int i=1;i<=n-1;i++){
			cin>>m;
			 vect1.clear();
			 vect2.clear();
			for(int j=0;j<m;j++){
				cin>>a;
				vect1.push_back(a);
				
				if(abs(a-mini)*i+sum_a>abs(maxi-a)*i+sum_b){
					vect2.push_back(abs(a-mini)*i+sum_a);
				}
                   
                   else {
                   	vect2.push_back(abs(maxi-a)*i+sum_b);
				   }
			}
						maxi=vect1[vect1.size()-1];
						mini=maxi;
						
						sum_b=vect2[0];
						sum_a=sum_b;
						
						 for( int k=0;k<m-1;k++)
                         {if(vect2[k+1]-(i+1)*vect1[k]>sum_b-(i+1)*maxi)
                         {sum_b=vect2[k+1];
                    	 maxi=vect1[k];
						 }
                     if(vect2[k+1]+(i+1)*vect1[k]>sum_a+(i+1)*mini)
                         {sum_a=vect2[k+1];
                     	  mini=vect1[k];
						   }	
						 }
						
                         }
                         if(n==1){
                         	cout<<0<<endl;
						 }
						 else{
						 	cout<<*max_element(vect2.begin(),vect2.end())<<endl;
						 }
		}
	}
