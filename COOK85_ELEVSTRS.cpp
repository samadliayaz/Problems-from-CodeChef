//https://www.codechef.com/COOK85/problems/ELEVSTRS

#include<bits/stdc++.h>

using namespace std;

double mini(double a, double b){
	if(a<b)
	return a;
	else
	return b;
}
int main(){
	int t;
	cin>>t;
	double t1,t2;
	int n,v1,v2;
	while(t--){
		cin>>n>>v1>>v2;
		t1=sqrt(2)*n;
		t2=2*n;
		
		t1/=v1;
		t2/=v2;
		
		if(t1<t2){
			cout<<"Stairs"<<endl;
		}
		else{
			cout<<"Elevator"<<endl;
		}
	}
}