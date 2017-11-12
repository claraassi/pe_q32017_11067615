#include <stdio.h>

#define MAXLEN 120
#define SAIDA "media_alunos.txt"
#define ENTRADA "lista_alunos.txt"

typedef struct ficha {
    char nome[100];
    float P1;
    float P2;
    float P3;
    float media;
    char matricula[4];
} ficha;

void calcular_media (FILE *notas, FILE *medias, struct ficha aluno, char linha[MAXLEN])
{
    while((fscanf(notas,"%s %s %f %f %f\n", aluno.nome, aluno.matricula, &(aluno.P1), &(aluno.P2), &(aluno.P3))) != EOF) {
        aluno.media = (aluno.P1 + aluno.P2 + aluno.P3)/3;
        
        snprintf(linha, MAXLEN, "%s %s %.2f\n", aluno.nome, aluno.matricula, aluno.media);
        
        fprintf(medias, "%s", linha);
    }
}

int main ()
{
    FILE *notas;
    FILE *medias;
    ficha aluno;
    char linha[MAXLEN];
    
    notas = fopen(ENTRADA, "r");
    medias = fopen(SAIDA, "w");
    
    if(notas == NULL) {
        printf("Nao foi possivel abrir o arquivo de entrada\n");
    } else if(medias == NULL) {
        printf("Nao foi possivel abrir o arquivo de saida\n");
    } else {
        calcular_media(notas, medias, aluno, linha);
    }
    
    fclose(notas);
    fclose(medias);
    
    return 0;
}
