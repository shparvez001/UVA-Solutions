#include<stdio.h>
#include<math.h>

int main()
{
   long unsigned test,r,s,div,l,u,maxnum,maxdiv,i,j,k,temp;
    while(scanf("%lu",&test)==1)
{
for(i=1;i<=test;i++)
{
scanf("%lu%lu",&l,&u);
if(l>u)
   {temp=l; l=u;  u=temp; }
 maxdiv=0;
 for(j=l;j<=u;j++)
 { s=0; div=0;
  for(k=1;k<=sqrt(j);k++)
 {
 if(j%k==0)
 {
   div++;
if(j/k!=k)div++;
}
}
if(div>maxdiv)
{
maxdiv=div;
maxnum=j;
}
}
printf("Between %lu and %lu, %lu has a maximum of %lu divisors.\n",l,u,maxnum,maxdiv);
}
}
return 0;
}
