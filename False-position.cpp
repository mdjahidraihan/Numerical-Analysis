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
    return d=cos(x) - x;

}
void secant(double po,double p1)
{
    int i=0;
    bool flag= false;
    double qo = f(po);
    double q1 = f(p1);
    while(i<=N)
    {
        i++;
        double p=p1-q1*(p1-po)/(q1-qo);
        double q  = f(p);
        printf("n = %d  q = %.5lf p = %.9lf\n",i,q,p);
        if(fabs(p-p1)<=eps)
        {
           flag = true;
           printf("Output : %.9lf\n",p);
           break;
        }
        if(q*q1<0)
        {
            po=p1;qo=q1;
        }
        p1=p;q1=q;
    }
    if(flag==false)
        printf("Method fails after %d iterations\n",N);

}
int main()
{
    cout<<"Enter the initial approximation po  and p1\n";
    double po,p1;
    //.5  .785398163
    cin>>po>>p1;
    secant(po,p1);
    return 0;
}
