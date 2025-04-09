#include <stdio.h>

int main() {
    int populacao1, PontoTuristico1;
    double Area1, Pib1;
    char codigo1[10], nomeCidade1[50], estado1[50];
    float DensidadePopulacional1, PibPerCapta1;

    int populacao2, PontoTuristico2;
    double Area2, Pib2;
    char codigo2[10], nomeCidade2[50], estado2[50];
    float DensidadePopulacional2, PibPerCapta2;

    // Coleta de dados para a primeira cidade
    printf("Insira o nome da primeira cidade:\n");
    scanf("%s", nomeCidade1);

    printf("Insira o estado da cidade:\n");
    scanf("%s", estado1);

    printf("Insira o código da cidade:\n");
    scanf("%s", codigo1);

    printf("Insira a quantidade da população:\n");
    scanf("%d", &populacao1);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%d", &PontoTuristico1);

    printf("Insira a área do local em km²:\n");
    scanf("%lf", &Area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &Pib1);

    // Coleta de dados para a segunda cidade
    printf("\nInsira o nome da segunda cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Insira o estado da cidade:\n");
    scanf("%s", estado2);

    printf("Insira o código da cidade:\n");
    scanf("%s", codigo2);

    printf("Insira a quantidade da população:\n");
    scanf("%d", &populacao2);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%d", &PontoTuristico2);

    printf("Insira a área do local em km²:\n");
    scanf("%lf", &Area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &Pib2);

    // Cálculos
    DensidadePopulacional1 = (float) populacao1 / Area1;
    PibPerCapta1 = (float) Pib1 / populacao1;

    DensidadePopulacional2 = (float) populacao2 / Area2;
    PibPerCapta2 = (float) Pib2 / populacao2;

    // Exibindo resultados da primeira cidade
    printf("\n--- Dados da Primeira Cidade ---\n");
    printf("Nome: %s\n", nomeCidade1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", PontoTuristico1);
    printf("Área: %lf km²\n", Area1);
    printf("PIB: %lf\n", Pib1);
    printf("Densidade Populacional: %f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %f\n", PibPerCapta1);

    // Exibindo resultados da segunda cidade
    printf("\n--- Dados da Segunda Cidade ---\n");
    printf("Nome: %s\n", nomeCidade2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", PontoTuristico2);
    printf("Área: %lf km²\n", Area2);
    printf("PIB: %lf\n", Pib2);
    printf("Densidade Populacional: %.4f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.4f\n", PibPerCapta2);


    // Comparações 

    printf("\nComparação de Cartas:\n");

    printf("População: ");
    if (populacao1 > populacao2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("Área: ");
    if (Area1 > Area2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("PIB: ");
    if (Pib1 > Pib2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("Pontos Turísticos: ");
    if (PontoTuristico1 > PontoTuristico2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("Densidade Populacional: ");
    if (DensidadePopulacional1 > DensidadePopulacional2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("PIB per Capita: ");
    if (PibPerCapta1 > PibPerCapta2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");
        

    return 0;
}
