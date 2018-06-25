#include<stdio.h>
int main ()
{
    int i, a, x;
    for(i=0;i<250000;i++){
        scanf("%d", &a);
        if (a==0) break;
        else if(a>=101) printf("f91(%d) = %d\n", a, a-10);
        else if (a<=100) printf("f91(%d) = 91\n", a);




    }

return 0;

}
