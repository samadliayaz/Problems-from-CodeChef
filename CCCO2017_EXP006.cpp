//https://www.codechef.com/CCCO2017/problems/EXP006

#include <bits/stdc++.h>
using namespace std;
// Thanks for GeeksforGeeks for great explanation
struct cell
{
    int x, y;
    int dist;
    cell(int x, int y, int dist) :
        x(x), y(y), dist(dist) {}
};
 
bool operator<(const cell& a, const cell& b)
{
    if (a.dist == b.dist)
    {
        if (a.x != b.x)
            return (a.x < b.x);
        else
            return (a.y < b.y);
    }
    return (a.dist < b.dist);
}
bool gr(int i, int j,int n)
{
    return (i >= 0 && i < n && j >= 0 && j < n);
}
 

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n][n];
		int dis[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}
		}
		for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dis[i][j] = INT_MAX;
            
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
 
    set<cell> st;
 
    st.insert(cell(0, 0, 0));
    dis[0][0] = arr[0][0];
    while (!st.empty())
    {
        cell k = *st.begin();
        st.erase(st.begin());
        for (int i = 0; i < 4; i++)
        {
            int x = k.x + dx[i];
            int y = k.y + dy[i];
            if (!gr(x, y,n))
                continue;
            if (dis[x][y] > dis[k.x][k.y] + arr[x][y])
            {
                if (dis[x][y] != INT_MAX)
                    st.erase(st.find(cell(x, y, dis[x][y])));
                dis[x][y] = dis[k.x][k.y] + arr[x][y];
                st.insert(cell(x, y, dis[x][y]));
            }
        }
    }
    cout<<dis[n-1][n-1]<<endl;
	}
}