#include<stdio.h>
#include<string.h>
int main()
{
    char test[23];
    int b,a,j, i, x;
    while (scanf("%s", test)!=EOF){
    a=strlen(test); x=0;b=0;
    for(i=0;i<a;i++){
       if(test[i]>='a'&&test[i]<='z') x=x+(test[i]-96 );
       else if(test[i]>='A'&&test[i]<='Z') x=x+(test[i]-38);
       if(test[i]==' ') break;

       }

    for(j=2;j<x;j++){
       if(x%j==0) b++;

    }

    if(b==0) printf("It is a prime word.\n");
    else printf("It is not a prime word.\n");

    }
   return 0;
}
