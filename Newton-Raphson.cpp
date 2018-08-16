#include<bits/stdc++.h>

using namespace std;
#define  N 100
#define eps .000000001
//f(x) = x^2-6
//f'(x)= 2*x and po  = 1

double f(double x)
{
    double d;
    return d=cos(x)-x;

}
double derivative_f(double x)
{

    double d;
    return  d = -sin(x)-1;
}
void Newton(double po)
{
    int i=0;
    bool flag= false;
    while(i<=N)
    {
        i++;
        double p=po-f(po)/derivative_f(po);
        printf("n = %d    p = %.7lf\n",i,p);
        if(fabs(po-p)<=eps)
        {
           flag = true;
           printf("Output : %.6lf\n",p);
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
    Newton(po);
    return 0;
}
