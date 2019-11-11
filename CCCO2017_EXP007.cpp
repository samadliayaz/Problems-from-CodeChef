//https://www.codechef.com/CCCO2017/problems/EXP007

#include<bits/stdc++.h>

using namespace std;

int com(string a, string b)
{
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba) > 0 ? 1: 0;
}

int main(){
	int k,a,t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<string>vect;
		while(n--){
			cin>>k;
			int m;
				string s="";
				while(k!=0){
					m=k%10;
					s+=m+'0';
					k/=10;
				}
				reverse(s.begin(),s.end());
				vect.push_back(s);
		}
		sort(vect.begin(),vect.end(),com);
		for(int i=0;i<vect.size();i++){
			cout<<vect[i];
		}
		cout<<endl;
	}
	
	
}