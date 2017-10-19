#include <stdio.h>

void imprimir_movimento(char from, char to) {
    printf("%c - %c\n",from,to);
}

void organizar_discos(int n, char from, char to, char middle) {

    if (n > 0) {
        organizar_discos(n-1, from, middle, to);
		imprimir_movimento(from, to);
		organizar_discos(n-1, middle, to, from);
    }

}

void main()
{
    int n;

    scanf("%d",&n);

    organizar_discos(n, 'A', 'C', 'B');
}
