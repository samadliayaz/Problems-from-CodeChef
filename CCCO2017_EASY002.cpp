//https://www.codechef.com/CCCO2017/problems/EASY002

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a;
	cin>>n;
	vector<int>vect;
	while(n--){
		cin>>a;
		vect.push_back(a);
	}
	cout<<*min_element(vect.begin(),vect.end())+*max_element(vect.begin(),vect.end())<<endl;
}