//https://www.codechef.com/LTIME52/problems/CHEFTRAF

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;
int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		ll arr[n+1][n+1];
		ll arr1[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
					arr[i][j]=100000000;
				
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
					arr1[i][j]=1000000000;
				
			}
		}
	int	v=n-1;
	int f=n-1;
	while(v--){
		int a,b,c;
		cin>>a>>b>>c;
		arr[a][b]=c;
		arr[b][a]=c;
	}
	while(f--){
		int p,q,r;
		cin>>p>>q>>r;
		arr1[p][q]=r;
		arr1[q][p]=r;
	}
	
	
	for (int k = 1; k <=n; k++)
    {
        // Pick all vertices as source one by one
        for (int i = 1; i <=n; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (int j = 1; j <=n; j++)
            {
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                if (arr[i][k] + arr[k][j] < arr[i][j])
                    arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }
    
    
    for (int k = 1; k <=n; k++)
    {
        // Pick all vertices as source one by one
        for (int i = 1; i <=n; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (int j = 1; j <=n; j++)
            {
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                if (arr1[i][k] + arr1[k][j] < arr1[i][j])
                    arr1[i][j] = arr1[i][k] + arr1[k][j];
            }
        }
    }
    
    unsigned long long int total=0;
    for(int i=1;i<n;i++){
    	for(int j=i+1;j<=n;j++){
    		total+=min(arr[i][j],arr1[i][j]);
		}
	}
    
    cout<<total<<endl;
	}
}