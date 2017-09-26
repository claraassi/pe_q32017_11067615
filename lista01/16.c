#include <stdio.h>

int main () {
    int cargo;
    float descontos,acrescimos,salario,salario_inicial,faltas,horas_extra,horas_mes_seguinte;
    
    /* le dados */
    printf("Entre com id do cargo:");
    scanf("%d",&cargo);
    printf("Entre com # de faltas:");
    scanf("%f",&faltas);
    printf("Entre com # de horas-extra:");
    scanf("%f",&horas_extra);
    
    /* calculos */
    switch (cargo) {
        case 1:
            salario_inicial = 10000;
            descontos = faltas * (salario_inicial / 20);
            
            /* se houver mais que 40 horas extra, as horas adicionais
             * sao guardadas para o mes seguinte */
            if (horas_extra <= 40) {
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            } else {
                horas_mes_seguinte = horas_extra - 40;
                horas_extra = 40;
                
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            }
            
            salario = salario_inicial - descontos + acrescimos;
            
            printf("cargo: Diretor\n");
            printf("# de faltas: %f\n",faltas);
            printf("# de horas-extra: %f\n",horas_extra);
            printf("descontos: %f\n",descontos);
            printf("acrescimos: %f\n",acrescimos);
            printf("salario: %f\n",salario);
            break;
        case 2:
            salario_inicial = 8000;
            descontos = faltas * (salario_inicial / 20);
            
            /* se houver mais que 40 horas extra, as horas adicionais
             * sao guardadas para o mes seguinte */
            if (horas_extra <= 40) {
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            } else {
                horas_mes_seguinte = horas_extra - 40;
                horas_extra = 40;
                
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            }
            
            salario = salario_inicial - descontos + acrescimos;
            
            printf("cargo: Gerente\n");
            printf("# de faltas: %f\n",faltas);
            printf("# de horas-extra: %f\n",horas_extra);
            printf("descontos: %f\n",descontos);
            printf("acrescimos: %f\n",acrescimos);
            printf("salario: %f\n",salario);
            break;
        case 3:
            salario_inicial = 5000;
            descontos = faltas * (salario_inicial / 20);
            
            /* se houver mais que 40 horas extra, as horas adicionais
             * sao guardadas para o mes seguinte */
            if (horas_extra <= 40) {
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            } else {
                horas_mes_seguinte = horas_extra - 40;
                horas_extra = 40;
                
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            }
            
            salario = salario_inicial - descontos + acrescimos;
            
            printf("cargo: Engenheiro\n");
            printf("# de faltas: %f\n",faltas);
            printf("# de horas-extra: %f\n",horas_extra);
            printf("descontos: %f\n",descontos);
            printf("acrescimos: %f\n",acrescimos);
            printf("salario: %f\n",salario);
            break;
        case 4:
            salario_inicial = 3000;
            descontos = faltas * (salario_inicial / 20);
            
            /* se houver mais que 40 horas extra, as horas adicionais
             * sao guardadas para o mes seguinte */
            if (horas_extra <= 40) {
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            } else {
                horas_mes_seguinte = horas_extra - 40;
                horas_extra = 40;
                
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            }
            
            salario = salario_inicial - descontos + acrescimos;
            
            printf("cargo: Tecnico\n");
            printf("# de faltas: %f\n",faltas);
            printf("# de horas-extra: %f\n",horas_extra);
            printf("descontos: %f\n",descontos);
            printf("acrescimos: %f\n",acrescimos);
            printf("salario: %f\n",salario);
            break;
        case 5:
            salario_inicial = 2000;
            descontos = faltas * (salario_inicial / 20);
            
            /* se houver mais que 40 horas extra, as horas adicionais
             * sao guardadas para o mes seguinte */
            if (horas_extra <= 40) {
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            } else {
                horas_mes_seguinte = horas_extra - 40;
                horas_extra = 40;
                
                acrescimos = horas_extra * ((salario_inicial / 160) + 40);
            }
            
            salario = salario_inicial - descontos + acrescimos;
            
            printf("cargo: Operador\n");
            printf("# de faltas: %f\n",faltas);
            printf("# de horas-extra: %f\n",horas_extra);
            printf("descontos: %f\n",descontos);
            printf("acrescimos: %f\n",acrescimos);
            printf("salario: %f\n",salario);
            break;
        default:
            printf("Cargo inexistente");
            break;
    }
}
