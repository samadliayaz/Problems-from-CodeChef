//https://www.codechef.com/MAY18B/problems/XORAGN

#include<iostream>

using namespace std;

int main(){
    int n,t,a,xo;
    cin>>t;
    
    while(t--){
               cin>>n;
               xo=0;
               while(n--){
                          cin>>a;
                          a+=a;
                          xo^=a;
                          }
                          cout<<xo<<endl;
               }
    
}
