#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // CARTA 1

    char estado_1[3];
    char codigo_da_carta_1[4];
    char nome_da_cidade_1[100];
    int populacao_1;
    int p_turisticos_1;
    float area_1;
    float pib_1;
    float densidade_1;
    float pibpcap_1;

    // CARTA 2

    char estado_2[3];
    char codigo_da_carta_2[4];
    char nome_da_cidade_2[100];
    int populacao_2;
    int p_turisticos_2;
    float area_2;
    float pib_2;
    float densidade_2;
    float pibpcap_2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // ENTRADA CARTA1

    printf("---CARTA 1---\n");
    printf("Estado (sigla): ");
    scanf("%s", estado_1);

    printf("código da carta (Ex: A01): ");
    scanf("%s", codigo_da_carta_1);

    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade_1);
    
    printf("Populaçao (Em Milhoes): ");
    scanf("%d", &populacao_1);

    printf("Pontos Turisticos: ");
    scanf("%d", &p_turisticos_1);

    printf("Área (Em Km): ");
    scanf("%f", &area_1);

    printf("PIB (Em milhoes): ");
    scanf("%f", &pib_1);

    // ENTRADA CARTA2

    printf("---CARTA 2---\n");
    printf("Estado (sigla): ");
    scanf("%s", estado_2);

    printf("código da carta (Ex: B02): ");
    scanf("%s", codigo_da_carta_2);

    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade_2);
    
    printf("Populaçao (Em Milhoes): ");
    scanf("%d", &populacao_2);

    printf("Pontos Turisticos: ");
    scanf("%d", &p_turisticos_2);

    printf("Área (Em Km): ");
    scanf("%f", &area_2);

    printf("PIB (Em milhoes): ");
    scanf("%f", &pib_2); 


    //Calculos da densidade e do Pib per capta

    densidade_1 = populacao_1 * 1000000 / area_1;
    pibpcap_1 = pib_1 * 1000000 / populacao_1;

    densidade_2 = populacao_2 * 1000000 /  area_2;
    pibpcap_2 =  pib_2 * 1000000 /  populacao_2;      


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // SAIDA CARTA1

    printf("---CARTA1 ----\n");
    printf("Estado: %s\n", estado_1);
    printf("Código da carta: %s\n", codigo_da_carta_1);
    printf(" Nome da cidade: %s\n", nome_da_cidade_1);
    printf("População (em milhoes): %d \n", populacao_1);
    printf("Pontos Turisticos: %d\n", p_turisticos_1);
    printf("Área (em KM): %f\n", area_1);
    printf("PIB (em milhioes) %f\n", pib_1);
    printf("Densidade populacional: %f hab/km\n", densidade_1);
    printf("PIB per capita: %f\n", pibpcap_1);

    // SAIDA CARTA2

    printf("---CARTA2 ----\n");
    printf("Estado: %s\n", estado_2);
    printf("Código da carta: %s\n", codigo_da_carta_2);
    printf(" Nome da cidade: %s\n", nome_da_cidade_2);
    printf("População (em milhoes): %d \n", populacao_2);
    printf("Pontos Turisticos: %d\n", p_turisticos_2);
    printf("Área (em KM): %f\n", area_2);
    printf("PIB (em milhioes) %f\n", pib_2);
    printf("Densidade populacional: %.f hab/km\n", densidade_2);
    printf("PIB per capita: %f\n", pibpcap_2);


    return 0;
}
