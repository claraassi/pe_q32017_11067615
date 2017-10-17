#include <stdio.h>

int potenciacao(int,int);

int main()
{
    int x, y;
    
    scanf("%d %d",&x,&y);
    
    printf("%d\n",potenciacao(x,y));
    
    return 0;
}

int potenciacao(int base, int expoente)
{
    if (expoente == 1) return base;
    return base * potenciacao(base,expoente-1);
}
