//https://www.codechef.com/JAN18/problems/MAXSC

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,arr[701][701];
	long long int sum,max;
	cin>>t;
	
	while(t--){
		sum=0;
		max=10000000000;
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}
		}
		bool bol2=false;
		for(int i=n-1;i>=0;i--){
			vector<int>vect;
			for(int j=0;j<n;j++){
				vect.push_back(arr[i][j]);
			}
			sort(vect.rbegin(),vect.rend());
			bool bol=false;
			for(int k=0;k<vect.size();k++){
				if(vect[k]<max){
					max=vect[k];
					sum+=max;
					bol=true;
					break;
				}
			}
			if(!bol){
				cout<<-1<<endl;
				bol2=true;
				break;
			}
		}
		if(!bol2){
			cout<<sum<<endl;
		}
	}
}