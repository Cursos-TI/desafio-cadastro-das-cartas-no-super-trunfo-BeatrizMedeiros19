#include <stdio.h>

int main(){
    printf("Desafio Novato!\n");
    printf("Novo commit\n");

    // informações de cadastro
    // variáveis da primeira carta
    char nome[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int pontos;
    
    // realizando cadastro: carta 1
    printf("Carta 1: \n");

    printf("Digite o estado:  \n");
    scanf("%s",  nome);

    printf("Digite o codigo da carta:  \n");
    scanf("%s", codigo);

    printf("Digite a cidade:  \n");
    scanf("%s", cidade);

    printf("Digite a população:  \n");
    scanf("%d", &populacao);

    printf("Digite a área em km2:  \n");
    scanf("%f", &area);

    printf("Digite o PIB:  \n");
    scanf("%f",  &PIB);

    printf("Digite a quantidade de pontos turisticos:  \n");
    scanf("%d", &pontos);


    // variáveis da segunda carta:
    char Nome2[20];
    char Codigo2[20];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;

    // realizando cadastro: carta 2:
    printf("Carta 2: \n");

    printf("Digite o estado: \n");
    scanf("%s", Nome2);

    printf("Digite o código da carta:  \n");
    scanf("%s", Codigo2);

    printf("Digite a cidade:  \n");
    scanf("%s", Cidade2);

    printf("Digite a população:  \n");
    scanf("%d", &Populacao2);

    printf("Digite a área em km2:  \n");
    scanf("%f", &Area2);

    printf("Digite o PIB:  \n");
    scanf("%f",  &PIB2);

    printf("Digite a quantidade de pontos turisticos:  \n");
    scanf("%d", &Pontos2);
return 0;
}