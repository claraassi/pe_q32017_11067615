#include <stdio.h>

int fibMem  [1000] = {0};

int fib(int n)
{
    if (n==0) return 0;
    if (n<=2) return 1;
    
    if (fibMem[n] != fib(n-1) + fib(n-2)) {
        fibMem[n] = fib(n-1) + fib(n-2);
        return fib(n-2) + fib(n-3);
    } else {
        return fib(n-1) + fib(n-2);
    }  
}

int main( )
{
    int n;
    
    fibMem[1] = 1;
    fibMem[2] = 1;
    
    scanf("%d",&n);
    
    fib(n);
    
    for (int i=0;i<=n;i++) {
        printf("%d ",fibMem[i]);
    }
    
    printf("\n");
    
    return 0;
}
