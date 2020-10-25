    #include <bits/stdc++.h>
    using namespace std;
    
    long long int vd[100005];
    int main()
    {
        long long int n,m,i,mod = 1e9+7;
        cin>>n>>m;
        vd[0]=2;
        vd[1]=2;
        for(i=2;i<=100004;i++)
        {
            vd[i] = (vd[i-1]+vd[i-2]) % mod;
        }
        cout<<(vd[n]+vd[m]-2)%mod;
        return 0;
    }
