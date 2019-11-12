//https://www.codechef.com/AUG17/problems/CHEFMOVR

#include<bits/stdc++.h>

using namespace std;


//typedef unsigned long long int ll;
typedef  long long int  ull;


int main(){
	int t,n,d;
	cin>>t;
	
	while(t--){
		ull a;
		bool bo=true;
		vector<ull>vect;
		set<ull>seta;
		cin>>n>>d;
		while(n--){
			cin>>a;
			vect.push_back(a);
		}
		for(int i=0;i<d;i++){
			ull s=0;
			int count=0;
			for(int j=i;j<vect.size();j+=d){
				s+=vect[j];
				count++;
			}
			if(s%count==0){
			ull	c=s/count;
				seta.insert(c);
			}
			else{
				cout<<-1<<endl;
				bo=false;
				break;	
			}
		}
		
		if(bo)
		{
			
			
		if(seta.size()!=1){
			cout<<-1<<endl;
		}
		
			
		else{
			set<ull> ::  iterator  itr;
			itr=seta.begin();
			ull it=*itr;
			ull count_s=0;
			for(int i=0;i<d;i++){
				ull sum=0;
				for(int j=i;j<vect.size();j+=d){
				ull	temp=vect[j];
				//	if(sum<0){
			//	cout<<"itt "<<it<<endl;
						vect[j]+=sum;
						if(sum>0){
								count_s+=sum;
						//		cout<<" count1  "<<count_s<<endl;
						}
					
				//	}
					if(vect[j]<it){
						count_s+=(it-vect[j]);
					//	cout<<" count2  "<<count_s<<endl;
					}
					sum=vect[j]-it;
				//	cout<<"sum "<<sum<<endl;
				//	cout<<" vect[j] "<<vect[j]<<endl;
				//	cout<<" count "<<count_s<<endl;
				//	cout<<endl;
				}
			}
			cout<<count_s<<endl;
		}	
			
			
		}
	}
}