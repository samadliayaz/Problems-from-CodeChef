//https://www.codechef.com/LTIME57/problems/GAMENUMB

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

int main(){
	ll t,n,k,q;
	
	cin>>t;
	
	while(t--){
		cin>>n>>k;
		vector<ll>A;
		vector<ll>B;
		vector<ll>D;
		ll sum=0;
		vector<pair<ll,ll> > vect;
		
		for(int i=0;i<n;i++){
			cin>>q;
			A.push_back(q);
		}
		
		for(int i=0;i<n;i++){
			cin>>q;
			D.push_back(q);
			sum+=q;
		}
		
		for(int i=0;i<n;i++){
			vect.push_back(make_pair(A[i],D[i]));
		//	sum[i]+=D[i];
		}
		sort(vect.begin(),vect.end());
		for(int i=0;i<k;i++){
			cin>>q;
			B.push_back(q);
		}
		
		ll l=0;
		ll h=n-1;
		ll ferq=0;
		ll cem=0;
		for(int i=0;i<k;i++){
		//	cout<<"i "<<i<<"   ";
			cem=0;
			if(i%2==0){
				ferq=sum-B[i];
				sum=B[i];
		//		cout<<"ferq "<<ferq<<" cem "<<cem<<" sum "<<sum<<" ";
				for(int j=l;j<=h;j++){
		//			cout<<" l "<<l<<" h "<<h;
					cem+=vect[j].second;
		//			cout<<" cem++ "<<cem;
					if(cem<ferq){
						l++;
		//				cout<<" l++ "<<l<<" ";
					}
					else if(cem==ferq){
						l++;
		//				cout<<" l++ "<<l<<" ";
		//				cout<<" break== ";
						break;
					}
					else{
		//				cout<<" vect[j].second "<<j<<" "<<vect[j].second;
						vect[j].second=(cem-ferq);
		//				cout<<" vect[j].second "<<vect[j].second;
		//				cout<<" break; ";
						break;
					}
				}
						}
			else{
				ferq=sum-B[i];
				sum=B[i];
	//			cout<<"ferq "<<ferq<<" cem "<<cem<<" sum "<<sum<<" ";
				for(int j=h;j>=l;j--){
	//				cout<<" l "<<l<<" h "<<h;
					cem+=vect[j].second;
	//				cout<<" cem++ "<<cem;
					if(cem<ferq){
						h--;
	//					cout<<" h-- "<<h<<" ";
					}
					else if(cem==ferq){
						h--;
	//					cout<<" h-- "<<h<<" ";
	//					cout<<"break== ";
						break;
					}
					else{
	//					cout<<" vect[j].second "<<j<<" "<<vect[j].second;
						vect[j].second=(cem-ferq);
	//					cout<<" vect[j].second "<<vect[j].second;
	//					cout<<"break; ";
						break;
					}
				}
			}
	//		cout<<endl;
		}
		ll w=0;
	//	cout<<l<<" "<<h<<endl;
		for(int i=l;i<=h;i++){
			ull f=vect[i].first*vect[i].second;
			w+=f;
		}
		cout<<w<<endl;
	}
}