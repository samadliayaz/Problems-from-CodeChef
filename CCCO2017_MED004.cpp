//https://www.codechef.com/CCCO2017/problems/MED004

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string str;
	vector<int>arr(6,0);
	cin>>n>>str;
	
	for(int i=0;i<str.size();i++){
		if(str[i]=='c'){
			arr[0]++;
		}
		else if(str[i]=='o'){
			arr[1]++;
		}
		else if(str[i]=='d'){
			arr[2]++;
		}
		else if(str[i]=='e'){
			arr[3]++;
		}
		else if(str[i]=='h'){
			arr[4]++;
		}
		else if(str[i]=='f'){
			arr[5]++;
		}
	}
	arr[0]/=2;
	arr[3]/=2;
	cout<<*min_element(arr.begin(),arr.end())<<endl;
}