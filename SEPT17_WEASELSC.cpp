//https://www.codechef.com/SEPT17/problems/WEASELSC

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){
	ll t,n,k,a,to;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll max=-1,sum=0;
		stack<int>s;
		vector<ll>vect;
		while(n--){
			cin>>a;
			vect.push_back(a);
		}
		int i=0;
		//s.push(0);
		while(i<vect.size()){
			
			if(s.empty() || vect[i]>=vect[s.top()])
			{
				s.push(i++);
			}
			else{
				to=s.top();
				s.pop();
				
				if(s.empty())
				{
					sum=vect[to]*i;
				}
				else{
					sum=vect[to]*(i-s.top()-1);
				}
				if(sum>max){
					max=sum;
				}
			}
		}
		
		while(!s.empty()){
			to=s.top();
				s.pop();
				
				if(s.empty())
				{
					sum=vect[to]*i;
				}
				else{
					sum=vect[to]*(i-s.top()-1);
				}
				if(sum>max){
					max=sum;
				}
		}
		cout<<max<<endl;
	}
}