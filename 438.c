#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793
int main()
{
double x1, x2, x3, y1, y2, y3,a, b, c, radius, s, cir;
while ( scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF )
{
a = sqrt ( pow((x1-x2),2)+pow((y1-y2), 2));
b = sqrt ( pow((x1-x3),2)+pow((y1-y3), 2));
c = sqrt ( pow((x3-x2),2)+pow((y3-y2), 2));
s= (a+b+c)/2;
radius = (a*b*c)/(4*sqrt(s*(s-a)*(s-b)*(s-c)));
cir = 2 *pi* radius;
printf("%.2lf\n", cir);
}
return 0;
}

