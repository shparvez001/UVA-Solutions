#include<stdio.h>
#include<string.h>
int main (){
    int i, a,b, carry, rem;
    while (scanf("%d %d", &a, &b)==2){

          carry=0; rem=0;

          if(a==0 && b==0) break;

     for(i=0;i<12;i++)
{
     if(a==0 && b==0) break;

     if ((a%10+b%10+rem)>9) {carry++; rem=1;}
     else (rem=0);
   a=a/10; b=b/10;



    }
    if (carry==0) printf("No carry operation.\n");
    else if (carry==1) printf("1 carry operation.\n");
       else printf("%d carry operations.\n", carry);
}
return 0;
}






