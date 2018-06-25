#include<stdio.h>

long double fact(double num)
{
if(num==0) return 1;
else return (num*fact(num-1));
}
int main()
{
double m,n,c;
while(scanf("%lf%lf",&n,&m)==2)
{

if(n==0 && m==0)break;
 else  c=fact(n)/(fact(n-m)*fact(m));
printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,c);
}
return 0;
}
