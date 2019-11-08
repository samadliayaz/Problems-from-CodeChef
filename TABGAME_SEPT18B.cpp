//link to the problem
//https://www.codechef.com/SEPT18B/problems/TABGAME

#include<bits/stdc++.h>

using namespace std;

int arr[3][100005];
int arr2[100005][3];

int main(){
	int t,a,b;
	
	cin>>t;
	while(t--){
	string x, y;
	cin >> x >> y;

	
	for(int i=0; i < x.length(); i++){
		arr[0][i+1] = x[i] - '0';
	}
	arr[1][0] = y[0] - '0';
	arr[2][0] = y[1] - '0';
	
	for(int i = 0; i < y.length(); i++){
		arr2[i+1][0] = y[i] - '0';
	}
	arr2[0][1] = x[0] - '0';
	arr2[0][2] = x[1] - '0';
	
	for(int i=1; i <= 2; i++){
		for(int j = 1; j <= x.length(); j++){
			if(i == 1){
				if(arr[i-1][j] == 0)
				arr[i][j] = 1;
				else
				arr[i][j] = abs(arr[i][j - 1] - 1);		
			}
			else if(j == 1){
				if(arr[i][j - 1] == 0)
				arr[i][j] = 1;
				else
				arr[i][j] = abs(arr[i - 1][j] - 1);
			}
			else if(arr[i-1][j] == 1 && arr[i][j - 1] == 1){
				arr[i][j] = 0;
			}
			else if(arr[i - 1][j] == 0 || arr[i][j - 1] == 0){
				arr[i][j] = 1;
			}
		}
	}
	
	for(int i = 1; i <= y.length(); i++){
		for(int j = 1; j <= 2; j++){
			if(i == 1){
				if(arr2[i - 1][j] == 0)
				arr2[i][j] = 1;
				else
				arr2[i][j] = abs(arr2[i][j - 1] - 1);		
			}
			else if(j == 1){
				if(arr2[i][j - 1] == 0)
				arr2[i][j] = 1;
				else
				arr2[i][j] = abs(arr2[i - 1][j] - 1);
			}
			else if(arr2[i - 1][j] == 1 && arr2[i][j - 1] == 1){
				arr2[i][j] = 0;
			}
			else if(arr2[i - 1][j] == 0 || arr2[i][j - 1] == 0){
				arr2[i][j] = 1;
			}
		}
	}
	
	int n, x1, y1;
	scanf("%d",&n);
	while(n--){

		scanf("%d%d",&y1,&x1);
		
		if(x1<=2){
		printf("%d",arr2[y1][x1]);
			continue;
		}
		
		else if(y1<=2){
		printf("%d",arr[y1][x1]);
			continue;
		}
	int	mini = min(x1, y1);
	
		x1 = (x1 - (mini - 2));
		y1 = (y1 - (mini - 2));
		if(x1 <= 2){
			printf("%d",arr2[y1][x1]);
		}
		else{
			printf("%d",arr[y1][x1]);
		}
	}
	printf("\n");
		
	}
}