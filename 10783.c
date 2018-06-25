#include<stdio.h>
int main ()
{
    int n,a,b,i,t, x;
    scanf("%d", &n);
    for(x=0;x<n;x++){
    scanf("%d %d", &a, &b);
    t=0;
    for(i=a;i<b;a++){
       if(a%2==1){t+=a;}
       else t+=0;
       if(a==b) break;

    }
    printf("Case %d: %d\n",x+1, t);
    }
    return 0;
}
