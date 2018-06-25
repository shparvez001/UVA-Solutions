#include<stdio.h>
int main()
{
long kase,i,a,b,c;
while(scanf("%ld",&kase)==1)
{
for(i=1;i<=kase;i++)
{
scanf("%ld%ld%ld",&a,&b,&c);
if((a>b && a<c)||a<b && a>c)printf("Case %ld: %ld\n",i,a);
else if((b>a && b<c)||(b<a && b>c))printf("Case %ld: %ld\n",i,b);
else printf("Case %ld: %ld\n",i,c);
}
}
return 0;
}
