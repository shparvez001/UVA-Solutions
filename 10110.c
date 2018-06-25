#include<stdio.h>
#include<math.h>
int main()
{
    long int n, r;
    long double root;
    while(scanf("%ld", &n)==1){
    if (n==0) break;
     r=sqrt(n);
     root=pow(r,2);
    if(root==n)printf("yes\n");
    else printf("no\n");
    }

    return 0;

}
