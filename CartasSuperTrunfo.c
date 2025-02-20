#include <stdio.h>

int main() {
    int populacao;
    int PontoTuristico;
    double Area;
    double Pib;
    char codigo [10];
    char nomeCidade[50];
    char estado[50];

    printf("Insira o nome da cidade:\n");
    scanf("%s", nomeCidade);

    printf("Insira o estado da cidade:\n");
    scanf("%s", estado);
    
    printf("Insira o codigo da cidade:\n");
    scanf("%s", codigo);

    printf("Insira a quantidade da populaçao:\n");
    scanf("%d", &populacao);
    
    printf("Insira a quantidade de pontos turisticos:\n");
    scanf("%d", &PontoTuristico);

    printf("Insira a area do local em km²:\n");
    scanf("%lf", &Area);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &Pib);

    printf("O nome da cidade é: %s \n", nomeCidade);
    printf("O estado da cidade é: %s \n", estado);
    printf("O codigo da cidade é: %s \n", codigo);
    printf("A quantidade da Popuação é: %d \n", populacao);
    printf("O numero de pontos turistico da cidade é: %d \n", PontoTuristico);
    printf("A area da é: %lf \n", Area);
    printf("O PIB é: %lf \n", Pib);

    return 0;
}
