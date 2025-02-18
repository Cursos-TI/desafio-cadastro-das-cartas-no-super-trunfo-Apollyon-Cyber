#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao;
    int PontoTuristico;
    double Area;
    double Pib;
    char codigo [10];

    printf("Insira o codigo da cidade: \n");
    scanf("%s", codigo);

    printf("Insira a quantidade da populaçao: \n");
    scanf("%d", &populacao);
    
    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &PontoTuristico);

    printf("Insira a area do local em km²: \n");
    scanf("%lf", &Area);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &Pib);

    printf("O codigo da cidade é: %s", codigo);
    printf("A quantidade da Popuação é: %d", populacao);
    printf("O numero de pontos turistico da cidade é: %d", PontoTuristico);
    printf("A area da é: %lf", Area);
    printf("O PIB é: %lf", Pib);


    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
