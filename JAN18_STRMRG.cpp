//https://www.codechef.com/JAN18/problems/STRMRG

#include<bits/stdc++.h>

using namespace std;

 #define MAX 10005
 
 int yoxla(char a,char b){
 	if(a==b) return 0;
 	return 1;
 }
int main(){
	int t,n,m;
	string a,b;
	cin>>t;
	
	while(t--){
		cin>>n>>m;
		cin>>a>>b;
		int dp[n+1][m+1][2];
		
		//
		for(int i=2;i<=n;i++){
    			if(i<=m){
    			dp[0][i][0]=MAX;	
    			dp[0][i][1]=MAX;	
    			}
    		dp[i][0][0]=MAX;
    		dp[i][0][1]=MAX;
    		}
    		for(int i=n;i<=m;i++){
    			dp[0][i][0]=MAX;
    			dp[0][i][1]=MAX;
    		}
     
    	dp[0][1][0]=1;
    	dp[0][1][1]=1;
    	dp[1][0][0]=1;
    	dp[1][0][1]=1;
    	//
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(i>1)
				dp[i][j][0]=min(dp[i-1][j][0]+yoxla(a[i-1],a[i-2]),dp[i-1][j][1]+yoxla(a[i-1],b[j-1]));
				else
				dp[i][j][0]=min(dp[i-1][j][0],dp[i-1][j][1]+yoxla(a[i-1],b[j-1]));
				if(j>1)
    			dp[i][j][1]=min(dp[i][j-1][0]+yoxla(a[i-1],b[j-1]),dp[i][j-1][1]+yoxla(b[j-1],b[j-2]));
    			else
    			dp[i][j][1]=min(dp[i][j-1][0]+yoxla(a[i-1],b[j-1]),dp[i][j-1][1]);
			}
		}
		
		cout<<min(dp[n][m][0],dp[n][m][1])<<endl;
	}
}
			
			