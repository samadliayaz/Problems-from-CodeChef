//link to the problem
//https://www.codechef.com/SEPT18B/problems/BSHUFFLE/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string a = "";
	cin>>n;

		for(int i=2; i <= n/2; i++){
			cout << i << " ";
		}
		cout << 1 << " ";
		for(int i = n/2 + 2; i <= n; i++){
			cout << i << " ";
		}
		cout << n/2 + 1 << endl;
		
		cout << n << " ";
		for(int i = 1; i < n; i++){
			cout << i << " ";
		}
		return 0;
}