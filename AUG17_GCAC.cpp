//https://www.codechef.com/AUG17/problems/GCAC

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
int main(){
	ll t,n,m,a,b;
	cin>>t;
	
	while(t--){
		cin>>n>>m;
		set<ll>seta;
		vector< pair<ll,ll> > salary;
		vector<ll>vect;
		for(int i=0;i<n;i++){
			cin>>a;
			vect.push_back(a);
		}
		for(int i=0;i<m;i++){
			cin>>a>>b;
			salary.push_back(make_pair(a,b));
		}
		
		ull umumi=0;
		ll count=0;
		for(int i=0;i<n;i++){
		ll	max=0;
		string str;
		cin>>str;
		int	nomre;
			for(int j=0;j<m;j++){
				
				if(str[j]=='1'){
					if(salary[j].second>0){
						if(salary[j].first>max && salary[j].first>=vect[i]){
							max=salary[j].first;
							nomre=j;
						}
					}
				}
			}
			if(max>0){
				count++;
				umumi+=max;
				salary[nomre].second--;
				seta.insert(nomre);
			}
		}
		cout<<count<<" "<<umumi<<" "<<m-seta.size()<<endl;
	}
}