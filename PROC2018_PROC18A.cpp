//https://www.codechef.com/PROC2018/problems/PROC18A

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

int main(){
	int t;
	cin>>t;
	int n,k,a;
	while(t--){
		vector<int>vect;
		cin>>n>>k;
		int ma=0,sum=0;
		while(n--){
			cin>>a;
			vect.push_back(a);
		}
		for(int i=0;i<k;i++)
		sum+=vect[i];
		
		if(sum>ma)ma=sum;
		
		for(int i=k;i<vect.size();i++){
			sum-=vect[i-k];
			sum+=vect[i];
			if(sum>ma)ma=sum;
		}
		cout<<ma<<endl;
	}
}