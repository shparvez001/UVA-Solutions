#include<stdio.h>
int main (){
    int i,l, test, n;
    float j=0,val[1000],tot,percent[100],  ave;
    scanf("%d", &test);
    for(l=0;l<test;l++){
    tot=0;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
                     scanf("%f", &val[i]);
                     tot=tot+val[i];
                     }

    ave=tot/n;

    j=0;
    for (i=1;i<=n;i++){
        if (val[i]/ave>1) j++;
        else continue;
        }


        percent[l]=(100*j)/n;


}
  for(l=0;l<test;l++){
     printf("\n%.3f%%", percent[l]);}
return 0;
}
