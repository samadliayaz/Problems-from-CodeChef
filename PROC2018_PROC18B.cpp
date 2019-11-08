//https://www.codechef.com/PROC2018/problems/PROC18B

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

int main(){
	int t;
	cin>>t;
	double n,k,a;
	while(t--){
		priority_queue<double>vect;
		cin>>n;
		
		while(n--){
			cin>>a;
			vect.push(a);
		}
        
//	sort(vect.rbegin(),vect.rend());
	double x=vect.top();
	vect.pop();
	double y=vect.top();
	vect.pop();
	double sum=x+y;
	sum/=2;
	vect.push(sum);
	while(!vect.empty()){
		if(vect.size()==1){
			cout<<setprecision(6)<<fixed;
			cout<<vect.top()<<endl;
			break;
		}
	double x=vect.top();
	vect.pop();
	double y=vect.top();
	vect.pop();
	sum=x+y;
	sum/=2;
	vect.push(sum);
		
	}
	}
}