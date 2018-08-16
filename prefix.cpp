#include<bits/stdc++.h>
using namespace std;
//char p[100];
string p="ababaca";
string t;
int pi[100];
void prefix()
{
    int m = p.length();
    int k=0;
    pi[0]=0;
    for(int q=1; q<m; ++q)
    {
        while(k>0&&p[k+1]!=p[q])
            k = pi[k];
        if(p[k+1]==p[q])
            k++;
        pi[q]=k;

    }

}
int main()
{
    //cin>>p;
    /*

    for(int i=1;;i++)
    {
        p[i] = getchar();
        if(p[i]=='\n') break;

    }
    p[i+1] = '\0';

    */

    prefix();
    for(int i=0;i<10;i++) cout<<pi[i]<<" ";
    return 0;
}
