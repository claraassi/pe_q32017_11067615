#include <stdio.h>
#include <math.h>

/* algoritmo de gauss-legendre para aproximacao do valor de pi */
double aproximar_pi(double a, double b, double t, double p)
{
    double a1, pi;
    int i;
    
    for (i=0;i<10;i++) {
        a1 = (a+b)/2;
        b = sqrt(a*b);
        t -= (p*(a-a1)*(a-a1));
        p = 2*p;
        a = a1;
        pi = (a+b)*(a+b);
        pi = pi/(4*t);
    }
    
    return ((a+b)*(a+b))/(4*t);
}

/* Os digitos nao sao os mesmos porque o numero eh maior
 * que o intervalo de abrangencia da linguagem */

double main()
{
    double a = 1, b = 1/sqrt(2), t = 0.25, p = 1;

    printf("%.25lf\n",aproximar_pi(a,b,t,p));
    
    return 0.0;
}
