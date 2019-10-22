    #include <bits/stdc++.h>
    #define pb push_back
    #define mp make_pair
    #define lli long long int
    using namespace std;
    lli mod = 1e9+7;
    lli dp[100005];
    int main(){
        lli n,m;
        cin>>n>>m;
        dp[0]=2;
        dp[1]=2;
        for(lli i=2;i<=100004;i++)dp[i] = (dp[i-1]+dp[i-2])%mod;
        cout<<(dp[n]+dp[m]-2)%mod;
        return 0;
    }
