#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
double a[5],dp[5][5],x;
double f_neville(int p,int q)
{
    if(p==0&&q==0)return dp[p][q];
    if(p==1&&q==0)return dp[p][q];
    if(p==2&&q==0)return dp[p][q];
    if(p==3&&q==0)return dp[p][q];
    if(p==4&&q==0)return dp[p][q];
    if(dp[p][q]!=-1)return dp[p][q];
    else
    {
        dp[p][q]=((x-a[p-q])*f_neville(p,q-1)-(x-a[p])*f_neville(p-1,q-1))/(a[p]-a[p-q]);
        return dp[p][q];
    }


}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>x;
    for(int i=0;i<5;i++)
        cin>>a[i]>>dp[i][0];
    int p,q;
    cin>>p>>q;
    double result = f_neville(p,q);
    cout<<result<<endl;

    return 0;
}
