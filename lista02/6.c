#include <stdio.h>
#include <math.h>

double bhaskara_1(double a,double b,double c)
{
    return (-b+sqrt(b*b-4*a*c))/(2*a);
}

double bhaskara_2(double a,double b,double c)
{
    return (-b-sqrt(b*b-4*a*c))/(2*a);
}

double main()
{
    double a, b, c;
    
    scanf("%lf %lf %lf",&a,&b,&c);
    
    printf("%lf %lf\n",bhaskara_2(a,b,c),bhaskara_1(a,b,c));
    
    return 0.0;
}
