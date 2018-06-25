#include<stdio.h>
int main()
{
   long int i,n,a,b;
    scanf("%d", &n);
    for( i=0;i<n;i++){
        scanf("%d%d", &a, &b);
        if(a==b) printf("=");
        else if(a>b) printf(">");
        else if(a<b) printf("<");
        printf("\n");
    }
    return 0;
}
