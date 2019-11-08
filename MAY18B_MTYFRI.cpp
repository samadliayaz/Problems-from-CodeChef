//https://www.codechef.com/MAY18B/problems/MTYFRI

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t,n,k,a;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int>vect1,vect2;
		for(int i=0;i<n;i++){
			cin>>a;
			if(i%2==0){
				vect1.push_back(a);
			}
			else{
				vect2.push_back(a);
			}
		}
		sort(vect1.rbegin(),vect1.rend());
		sort(vect2.begin(),vect2.end());
	
		int swap;
		for(int i=0;i<k;i++){
			if(i>=vect1.size() || i>=vect2.size()){
				break;
			}
			if(vect2[i]<vect1[i]){
				swap=vect2[i];
				vect2[i]=vect1[i];
				vect1[i]=swap;
			}
			else{
				break;
			}
		}
		ll sum1=0,sum2=0;
		
		for(int i=0;i<vect1.size();i++){
			sum1+=vect1[i];
		}
		for(int i=0;i<vect2.size();i++){
			sum2+=vect2[i];
		}
	
		if(sum2>sum1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}