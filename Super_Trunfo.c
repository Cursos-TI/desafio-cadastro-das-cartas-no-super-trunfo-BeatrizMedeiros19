#include <stdio.h>

int main(){
    
    printf("Desafio Novato! \n");
    printf("novo commit");

    // cadastro de cartas para o jogo Super Trunfo!
    // variáveis - Carta 1:

    char estado[50], codigo[50], cidade[50];
    int populacao, pontos;
    float area, PIB;

    // realizando cadastro- Carta 1 (informações fornecidas pelo usuário)
    printf("Carta 1: \n");

    printf("Digite o estado: \n");
    scanf(" %s", estado);

    printf("Digite o código: \n");
    scanf(" %s", codigo);

    printf("Digite a cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a área: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontos);

    // variáveis - Carta 2:

    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontos2;
    float area2, PIB2;

    // realizando cadastro- Carta 2 (informações fornecidas pelo usuário)
    printf("Carta 2: \n");

    printf("Digite o estado: \n");
    scanf(" %s", estado2);

    printf("Digite o código: \n");
    scanf(" %s", codigo2);

    printf("Digite a cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontos2);

    //imprimindo reultados carta 1:
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km: %f\n", area);

    //imprimindo resultados carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km: %f\n", area2);

return 0;
}