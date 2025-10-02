#include <stdio.h>

int main() {
    char estado1[10];
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    int Pontosturisticos1;
    float area1;
    float pib1;
    float densidade1;
    float pibpercapita1;

    char estado2[10];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    int Pontosturisticos2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2;



    printf("\n--- Carta 1 ---\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%S", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;


    printf("\n--- Carta 2 ---\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;


    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Poupulação: %d\n", populacao1);
    printf("Número de pontos turísticos: %d\n", Pontosturisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populaçaõ: %d\n", populacao2);
    printf("Número de pontos turísticos: %d\n", Pontosturisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);


    return 0;

}
