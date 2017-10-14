#include <stdio.h>

int fatorial(int i)
{
    if (i == 1) return 1;
    return i * fatorial(i-1);
}

int coeficiente(int n, int k)
{
    return fatorial(n)/(fatorial(k)*fatorial(n-k));
}

int main()
{
    int n, k;
    
    scanf("%d %d",&n,&k);
    
    printf("%d\n",coeficiente(n,k));
    
    return 0;
}
