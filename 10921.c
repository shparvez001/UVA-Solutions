#include<stdio.h>
int main ()
{
    char s;
    while(scanf("%c", &s)==1){
        if(s=='A'||s=='B'||s=='C') printf("2");
        else if(s=='D'||s=='E'||s=='F') printf("3");
        else if(s=='G'||s=='H'||s=='I') printf("4");
        else if(s=='J'||s=='K'||s=='L') printf("5");
        else if(s=='M'||s=='N'||s=='O') printf("6");
        else if(s=='T'||s=='U'||s=='V') printf("8");
        else if(s=='P'||s=='Q'||s=='R'||s=='S') printf("7");
        else if(s=='W'||s=='X'||s=='Y'||s=='Z') printf("9");
        else printf("%c", s);

    }
    return 0;
}
