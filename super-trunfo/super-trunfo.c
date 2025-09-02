#include <stdio.h>

int main() {

        //==CARTA1==//
    char letra;
    char nome[20], codigo[5];
    int população, pontot;
    float area, pib;
    

        //==CARTA2==//
    char letra1;
    char nome1[20], codigo1[5];
    int população1, pontot1;
    float area1, pib1;


        //==CARTA1==//
    printf("Cadastro da Carta 1\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &letra);
    
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome);
    
    printf("População: ");
    scanf("%d", &população);
    
    printf("Área: ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Numero de ponto turistico: ");
    scanf("%d", &pontot);
    
    printf("\n");

        //==CARTA2==//
    printf("Cadastro da Carta 2\n");
    printf("Digite a letra do Estado: ");
    scanf("   %c", &letra1);
    
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome1);
    
    printf("População: ");
    scanf("%d", &população1);
    
    printf("Área: ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Numero de ponto turistico: ");
    scanf(" %d", &pontot1);


        //CARTA1//
    printf("==CARTA1==\n");
    printf("Letra: %c\n", letra);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", população);
    printf("Área: %f\n", area),
    printf("PIB: %f\n", pib);
    printf("Numero de ponto turistico: %d\n", pontot);

    printf("\n");

        //CARTA2//
    printf("==CARTA2==\n");
    printf("Letra: %c\n", letra1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", população1);
    printf("Área: %f\n", area1),
    printf("PIB: %f\n", pib1);
    printf("Numero de ponto turistico: %d", pontot1);


    return 0;
}