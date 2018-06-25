#include<stdio.h>
int main()
{
    long int n;

    while(scanf("%ld", &n)==1){
    if(n>=0)  printf("%ld\n", (n*(n+1)/2)+1);
    else if (n<0) break;
    }



return 0;
}
