//https://www.codechef.com/LTIME52/problems/CHEFDICE

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,a,b;
	
	cin>>t;
	while(t--){
		cin>>n;
		int arr[7][7];
		for(int i=1;i<7;i++){
			for(int j=1;j<7;j++){
			if(i==j){
				arr[i][j]=0;
			}
			else{
				arr[i][j]=1;
			}
		}}
		cin>>b;
		n--;
		bool bl=false;
		while(n--){
			cin>>a;
			arr[a][b]=0;
			arr[b][a]=0;
			if(a==b){
				bl=true;
			}
			b=a;
			
		}
		if(bl){
			cout<<-1<<endl;
		}
		else{
		int cvb[7];
		bool bol=false;
		for(int i=1;i<=6;i++){
			for(int j=1;j<=6;j++){
				for(int k=1;k<=6;k++){
					for(int f=1;f<=6;f++){
						for(int h=1;h<=6;h++){
							for(int v=1;v<=6;v++){
								if(arr[i][j]==1 && arr[k][f]==1 && arr[h][v]==1){
									set<int>seta;
									seta.insert(i);
									seta.insert(j);
									seta.insert(k);
									seta.insert(f);
									seta.insert(h);
									seta.insert(v);
									if(seta.size()==6){
										bol=true;
										cvb[i]=j;
										cvb[j]=i;
										cvb[k]=f;
										cvb[f]=k;
										cvb[h]=v;
										cvb[v]=h;
										for(int y=1;y<=6;y++){
											cout<<cvb[y]<<" ";
										}
										break;
									}
								}
							}
							if(bol)
							break;
						}
						if(bol)
							break;
					}
					if(bol)
							break;
				}
				if(bol)
							break;
			}
			if(bol)
							break;
		}
		if(!bol){
			cout<<-1<<endl;
		}
	}
	}
}