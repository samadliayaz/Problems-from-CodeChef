//https://www.codechef.com/SEPT17/problems/FILLMTR

#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int a;
	cin>>a;
	while(a--)
	{
	
	long long int b,c,d,e,f,g=1,t,l;
	cin>>b>>c;
	vector< vector <pair<long int,int> > >v(b+100);
	vector<long long int>y(b+100);
	while(c--)
	{
cin>>d>>e>>f;
if(d==e && f==1)
g=0;
else {
	v[d].push_back(make_pair(e,f));
	
}			
	}
	if(g==0)
	cout<<"no"<<endl;
	else {
for( t=0;t<v.size();t++){
	if(v[t].size()!=0 && y[t]==0)
	y[t]=1;
	for( l=0;l<v[t].size();l++)
	{if(y[v[t][l].first]==0){
 
	if(v[t][l].second==0)
	y[v[t][l].first]=y[t];
	else y[v[t][l].first]=y[t]+1;
}	 else {
	 	
	 	if(v[t][l].second==0 && abs(y[v[t][l].first]-y[t])%2!=0)
	 	g=0;
	 	
	 else if(v[t][l].second==1 && abs(y[v[t][l].first]-y[t])%2==0)
	 g=0;	
	 	
	 	
	 }} if (g==0){
	 cout<<"no"<<endl;
	 break;
}}
 
if(g!=0)
cout<<"yes"<<endl;
}}
	
	
}
 