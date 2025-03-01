#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2; // Para armazenar a primeira letra do estado
    char codigo1[3], codigo2[3]; // Para armazenar o código da cidade (A01, B02, etc.)
    char nomecdd1[50], nomecdd2[50]; // Nomes das cidades
    int populacao1, populacao2, npontos1, npontos2;
    float area1, area2, pib1, pib2;

    // Coleta de dados para a primeira cidade
    printf("--- Insira os dados da primeira cidade --- \n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado1);  
    printf("Código da cidade (ex: A01, B02): ");
    scanf(" %s", codigo1);  
    printf("Nome da cidade: ");
    scanf(" %s", nomecdd1);  
    printf("População da cidade: ");
    scanf("%d", &populacao1);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &npontos1);

    // Coleta de dados para a segunda cidade
    printf("--- Insira os dados da segunda cidade --- \n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado2);  
    printf("Código da cidade (ex: A01, B02): ");
    scanf(" %s", codigo2);  
    printf("Nome da cidade: ");
    scanf(" %s", nomecdd2); 
    printf("População da cidade: ");
    scanf("%d", &populacao2);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &npontos2);

    // dados cadastrados para a primeira cidade
    printf("\n--- Carta 1 ---\n");
    printf("Primeira letra do estado: %c\n", estado1);
    printf("Código da cidade: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecdd1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", npontos1);

    // dados cadastrados para a segunda cidade
    printf("\n--- Carta 2 ---\n");
    printf("Primeira letra do estado: %c\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecdd2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", npontos2);

    return 0;
}
