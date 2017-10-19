#include <stdio.h>

int fatorial(int);

int binomial(int, int);

int main()
{
    int n, k;
    
    scanf("%d %d",&n,&k);
    
    printf("%d\n",binomial(n,k));
    
    return 0;
}

int fatorial(int i)
{
    if (i == 0) return 1;
    return i * fatorial(i-1);
}

int binomial (int n, int k)
{
    return fatorial(n) / (fatorial(k) * fatorial (n-k));
}
