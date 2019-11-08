//https://www.codechef.com/MAY18B/problems/FAKEBS/

#include<bits/stdc++.h>

using namespace std;

vector<int>vect,vect2;
map<int,int> ma, sorted;
int binar(int x){
	int l=1, h=vect.size()-1;
	int indx=ma[x];
	
	int smallest=sorted[x]-1;
	int big=vect.size()-1-sorted[x];
	int small=0,small_umum=0,huge=0,huge_umum=0;
	
	while(l <= h){
		if(small_umum > smallest || huge_umum > big){
		return -1;
	}
	
		int m = (l + h) / 2;
		
		if(m == indx){
			break;
		}
		else if(m < indx){
			l = m + 1;
			small_umum++;
			if(vect[m] >= x){
				small++;
			}
			
		}
		else{
			h = m - 1;
			huge_umum++;
			if(vect[m] < x){
				huge++;
			}
		}
	}
		if(small_umum>smallest || huge_umum>big){
		return -1;
}
	return max(small,huge);
}
int main(){
	int t,n,q,a;
	cin>>t;
	
	while(t--){
		scanf("%d",&n);
		scanf("%d",&q);
		
		vect.clear();
		vect2.clear();
		ma.clear();
		sorted.clear();
		vect.assign(n+1,0);
		vect2.assign(n+1,0);
		
		for(int i=1;i<=n;i++){
		//	cin>>a;
			scanf("%d",&a);
			ma[a]=i;
			vect[i]=a;
			vect2[i]=a;
		}
		sort(vect2.begin(),vect2.end());
		
		for(int i=1;i<vect2.size();i++){
			sorted[vect2[i]]=i;
		}
		map<int,int>answer;
		while(q--){
				scanf("%d",&a);
			if(answer[a]==0){
				int z=binar(a);
				printf("%d \n",z);
			//	cout<<z<<endl;
				if(z==0)
				answer[a]=-2;
			}
			else{
				if(answer[a]==-2)printf("%d \n",0);
				else
				printf("%d \n",answer[a]);
			//	cout<<answer[a]<<endl;
			}
			
		}
	}
}