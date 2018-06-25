#include<stdio.h>
int main ()
{
    long int a,b, i;
    while(scanf("%ld", &a)==1){  b=1;
   for(i=1;i++;){
       if (b%a==0) break;
       else { b=b*10+1; b=b%a;}

    }
    printf("%ld\n", i-1);
}
return 0;
}
