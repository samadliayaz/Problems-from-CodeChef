//https://www.codechef.com/MAY18B/problems/RD19

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int gcd(int a, int b){
	return (!b)? a:gcd(b,a%b);
}
int main(){
	int t,n,a;
	cin>>t;
	while(t--){
		cin>>n;
		int m=n;
		vector<int>vect;
		cin>>a;
		vect.push_back(a);
		n--;
		int ebob=a;
		while(n--){
			cin>>a;
			vect.push_back(a);
			ebob=gcd(ebob,a);	
		}
		int count=0;
		for(int i=vect.size()-1;i>=0;i--){
			if(gcd(ebob,vect[i])!=1){
				count++;
			}
		}
		if(count==m){
			cout<<-1<<endl;
		}
		else cout<<count<<endl;
	}

}

