#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,k,n,l,m,a,b,c,d,e,f,g,h,s=0;
    while(scanf("%lld",&n)!=EOF)
    {
        s++;
        printf("%4lld. ",s);
        if(n==0)printf("0");
        else
        {
            a=n/10000000;
            n=n%10000000;
            if(a!=0)
            {
                b=a/10000000;
                if(b!=0)printf("%lld kuti ",b);
                a=a%10000000;
                c=a/100000;

                if(c!=0)printf("%lld lakh ",c);
                a=a%100000;
                d=a/1000;
                if(d!=0)printf("%lld hajar ",d);
                a=a%1000;
                e=a/100;
                if(e!=0)printf("%lld shata ",e);
                a=a%100;
                if(a!=0)printf("%lld ",a);

                printf("kuti");
                if(n!=0)printf(" ");

            }

            f=n/100000;
            n=n%100000;
            if(f!=0)
            {
                printf("%lld lakh",f);
                if(n!=0)printf(" ");
            }

            g=n/1000;
            n=n%1000;
            if(g!=0)
            {
                printf("%lld hajar",g);
                if(n!=0)printf(" ");
            }

            h=n/100;
            n=n%100;
            if(h!=0)
            {
                printf("%lld shata",h);
                if(n!=0)printf(" ");
            }

            if(n!=0)printf("%lld",n);
        }

        printf("\n");



    }
    return 0;
}
