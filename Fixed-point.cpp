#include<bits/stdc++.h>

using namespace std;
#define  N 100
#define eps .000000001
//f(x) = x-x*x*x-4*x*x+10
// .5*sqrt(10-x*x*x)
//10/(4+x)
double f(double x)
{
    double d;
    return d=.5*sqrt(10-x*x*x);

}
void fixedpoint(double po)
{
    int i=0;
    bool flag= false;
    while(i<=N)
    {
        i++;
        double p=f(po);
        printf("n = %d    p = %lf\n",i,p);
        if(fabs(po-p)<=eps)
        {
           flag = true;
           printf("Output : %.9lf\n",p);
           break;
        }
        po = p;
    }
    if(flag==false)
        printf("Method fails after %d iterations\n",N);

}
int main()
{
    cout<<"Enter the initial approximation\n";
    double po;
    cin>>po;
    fixedpoint(po);
    return 0;
}
