#include <stdio.h>

float calcular_salario(int,int,int);
float descontos(float,int);
float acrescimos(float,int);

float main()
{
    int cargo,faltas,horas_extra;
    
    scanf("%d %d %d",&cargo,&faltas,&horas_extra);
    
    printf("%.2f\n",calcular_salario(cargo,faltas,horas_extra));
    
    return 0.0;
}

float calcular_salario(int cargo, int faltas, int horas)
{
    if (cargo == 1) return 10000 + acrescimos(10000,horas) - descontos(10000,faltas);
    if (cargo == 2) return 8000 + acrescimos(8000,horas) - descontos(8000,faltas);
    if (cargo == 3) return 5000 + acrescimos(5000,horas) - descontos(5000,faltas);
    if (cargo == 4) return 3000 + acrescimos(3000,horas) - descontos(3000,faltas);
    if (cargo == 5) return 2000 + acrescimos(2000,horas) - descontos(2000,faltas);
}

float acrescimos(float salario, int horas)
{
    int prox_mes;
    if (horas <= 40) {
        return horas * ((salario / 160) + 40);
    } else {
        prox_mes = horas - 40;
        horas = 40;
        return horas * ((salario / 160) + 40);
    }
}

float descontos(float salario, int faltas)
{
    return faltas * (salario / 20);
}
