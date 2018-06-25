#include<stdio.h>
int main()
{
    char s; int a=0;
    while(scanf("%c", &s)==1){
    if(s=='"') {a++;

    if (a%2==1 ) printf ("``");
    else if (a%2==0) printf("''"); }
    else printf("%c", s);

   }
return 0;
}
