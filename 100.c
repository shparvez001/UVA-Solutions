#include<stdio.h>

int main (){
    int n1, n2,l, max, i, j, temp;
    while (scanf("%d %d", &n1, &n2)==2){
    printf("%d %d", n1 , n2);
    max = 0;

    if (n2<n1){
    temp=n1;
    n1=n2;
    n2=temp;
    }


    for(j=n1;j<=n2;j++){
    i=j;
    l=1;

    while (i!=1){
    if (i%2==1) i=3*i+1;
    else i=i/2;
    l++;
    }
    if(l>max) max=l;

    }

    printf("% d\n", max);
    }


return 0;


}
