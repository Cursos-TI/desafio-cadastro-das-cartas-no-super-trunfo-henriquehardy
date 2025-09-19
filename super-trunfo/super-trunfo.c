#include <stdio.h>

int main() {

    //==CARTA1==//
    char letra;
    char nome[20], codigo[5];
    int populacao, pontot;
    float area, pib;
    float dencidadep, pibpercapital;

    //==CARTA2==//
    char letra1;
    char nome1[20], codigo1[5];
    int populacao1, pontot1;
    float area1, pib1;
    float dencidadep1, pibpercapital1;


    //==CARTA1==//
    printf("Cadastro da Carta 1\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &letra);
    
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &area);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontot);
    
    // Cálculos da Carta 1
    dencidadep = (float) populacao / area;
    pibpercapital = (float) pib / populacao;

    printf("\n");

    //==CARTA2==//
    printf("Cadastro da Carta 2\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &letra1);
    
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontot1);

    // Cálculos da Carta 2
    dencidadep1 = (float) populacao1 / area1; 
    pibpercapital1 = (float) pib1 / populacao1;

    printf("\n\n");

    //==CARTA1==//
    printf("==CARTA 1==\n");
    printf("Estado: %c\n", letra);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontot);
    printf("Densidade populacional: %.2f hab/km²\n", dencidadep);
    printf("PIB per Capita: %.2f reais\n", pibpercapital);

    printf("\n\n");

    //==CARTA2==//
    printf("==CARTA 2==\n");
    printf("Estado: %c\n", letra1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontot1);
    printf("Densidade populacional: %.2f hab/km²\n", dencidadep1);
    printf("PIB per Capita: %.2f reais\n", pibpercapital1);

    return 0;
}
