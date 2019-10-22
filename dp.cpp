#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int z= 1000000007;
    int n,m;
    cin>>n>>m;
    int ans=0,i=0;
    
    int x=2,y=0;
    for (i=1;i<m;i++)
    {
        int t=x;
        x=x+y;
        x%=z;
        y=t;
    }
    ans += ((x+y)%z);
    ans %=z;
    ans -= 2;
    
    x=2,y=0;
    for (i=1;i<n;i++)
    {
        int t=x;
        x=x+y;
        x%=z;
        y=t;
    }
    ans += ((x+y)%z);
    ans %=z;
    
    cout<<ans;
	return 0;
}
