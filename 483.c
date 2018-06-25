#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],c;
    int i, k;
    while ( scanf("%s",a)==1 )
    {
          c=getchar();
           k=strlen(a);
          for(i=1; i<=k; i++ ){
               printf("%c",a[k-i]);
          }
          putchar(c);
    }
    return 0;
}
