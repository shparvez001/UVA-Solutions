#include<stdio.h>
#include<math.h>
int main ()
{
    long double a,b;
    while(scanf("%Lf", &a)==1){
        b=(a*a*(a+1)*(a+1))/4;
        printf("%.0Lf\n", b);
    }
    return 0;
}
