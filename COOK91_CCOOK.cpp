//https://www.codechef.com/COOK91/problems/CCOOK

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,count;
	cin>>n;
	
	while(n--){
		int x=5;
		count=0;
		while(x--){
			cin>>a;
			if(a==1){
				count++;
			}
		}
		if(count==5){
			cout<<"Jeff Dean"<<endl;
		}
		else if(count==4){
			cout<<"Hacker"<<endl;
		}
		else if(count==3){
			cout<<"Senior Developer"<<endl;
		}
		else if(count==2){
			cout<<"Middle Developer"<<endl;
		}
		else if(count==1){
			cout<<"Junior Developer"<<endl;
		}
		else if(count==0){
			cout<<"Beginner"<<endl;
		}
	}
}