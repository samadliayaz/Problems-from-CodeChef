//https://www.codechef.com/LTIME50/problems/MAXOR/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxi(int a,int b){
	if(a>=b)
	return a;
	else 
	return b;
}
int main ()
{
int n,a,b,t;
cin>>n;

while(n--){
	cin>>t;
	vector<int>vect;
	int count=0;
	while(t--){
		cin>>a;
		vect.push_back(a);
	}
	for(int i=0;i<vect.size();i++){
		for(int j=i+1;j<vect.size();j++){
			b=vect[i]|vect[j];
			if(maxi(vect[i],vect[j])>=b){
				count++;
			}
		}
	}
	cout<<count<<endl;
}
}