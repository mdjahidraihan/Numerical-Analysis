#include<bits/stdc++.h>

using namespace std;
#define  N 100
#define eps .000000001
double f(double x)
{
    double d;
    return d=x*x*x+4*x*x-10;

}
void bisection(double a,double b)
{
    int i=1;
    bool flag= false;
    while(i<=N)
    {
        i++;
        double fa = f(a);
        if(f(a)*f(b)<0)
        {
            double p = (a+b)/2.0;
            double fp = f(p);
            printf("a = %.6lf  b = %.6lf  p = %.6lf  fp = %.6lf  fa = %.6lf\n",a,b,p,fp,fa);
            if(fp==0||fabs(a-b)<=eps)
            {
               flag = true;
               printf("Output : %.6lf\n",p);
               break;
            }
            else if(fa*fp>0)
            {
                fa =fp;
                a= p;
            }
            else b=p;
        }
        else break;
    }
    if(flag==false)
        printf("Method fails after %d iterations\n",N);

}
int main()
{
    cout<<"Enter the range\n";
    double l,h;
    cin>>l>>h;
    bisection(l,h);
    return 0;
}
