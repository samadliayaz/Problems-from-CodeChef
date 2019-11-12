//https://www.codechef.com/LTIME50/problems/LOSTMAX/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
int a,b,c,d,e,f,g;
cin>>a;
while(a--)
{vector<int>r;
while(cin>>b)
{
 
r.push_back(b);
if (cin.get() == '\n'){
    //end of input reached
break;}}
sort(r.begin(),r.end());
	if(r[r.size()-1]!=r.size()-1){
		cout<<r[r.size()-1]<<endl;
	}
	else{
		cout<<r[r.size()-2]<<endl;
	}

}
}