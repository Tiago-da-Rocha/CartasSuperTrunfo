#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países - Nível Aventureiro
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Tiago da Rocha

int main() {
    char escFinal[10];

    // Carta 1 - São Paulo

    // Início da Declaração de Variáveis
    char estado_1;
    char codCarta_1[10];
    char cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int numPonTuristicos_1;
    float denPopulacional_1;
    float pibPCapita_1;
    // Fim da Declaração de Variáveis da Carta 1


    // Próxima Carta


    // Carta 2 - Rio de Janeiro

    // Início da Declaração de Variáveis
    char estado_2;
    char codCarta_2[10];
    char cidade_2[30];
    int populacao_2;
    float area_2;
    float pib_2;
    int numPonTuristicos_2;
    float denPopulacional_2;
    float pibPCapita_2;
    // Fim da Declaração de Variáveis da Carta 2


    // Início da Leitura das Cartas


    // Entrada dos Dados da Carta 1
    printf("Definições da 1º Carta:\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado_1);

    printf("(Código da Carta): Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codCarta_1);

    getchar(); // consome o \n que ficou no buffer

    printf("Digite o nome da cidade:\n");
    fgets(cidade_1, 20, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao_1);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade(não use pontos ou vírgulas):\n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &numPonTuristicos_1);

    // Cálculo Densidade Populacional
    denPopulacional_1 = (float) populacao_1 / area_1;

    // Cálculo PIB per Capita
    pibPCapita_1 = pib_1 / (float) populacao_1;
    // Fim da Leitura da Carta 1


    printf("\n"); // Espaço entre as definições das cartas 1 e 2


    // Entrada dos Dados da Carta 2
    printf("Definições da 2º Carta:\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado_2);

    printf("(Código da Carta): Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codCarta_2);

    getchar(); // consome o \n que ficou no buffer


    printf("Digite o nome da cidade:\n");
    fgets(cidade_2, 30, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao_2);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade(não use pontos ou vírgulas):\n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &numPonTuristicos_2);

    // Cálculo Densidade Populacional
    denPopulacional_2 = (float) populacao_2 / area_2;

    // Cálculo PIB per Capita
    pibPCapita_2 = pib_2 / (float) populacao_2;
    // Fim da Leitura da Carta 2

    printf("\n");
    printf("Cartas Definidas Com Sucesso. Parabéns!\n");
    printf("\n");

    // Início da Vizualização das Cartas

    printf("Visualização das Cartas\n");

    // Saída dos Dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codCarta_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f Km2\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", numPonTuristicos_1);
    printf("Densidade Populacional: %.2f hab/Km2\n", denPopulacional_1);
    printf("PIB per Capita: %.2f reais\n", pibPCapita_1);
    // Fim da Vizualização da Carta 1


    printf("\n"); // Espaço entre as cartas


    // Saída dos Dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codCarta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f Km2\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numPonTuristicos_2);
    printf("Densidade Populacional: %.2f hab/Km2\n", denPopulacional_2);
    printf("PIB per Capita: %.2f reais\n", pibPCapita_2);
    // Fim da Vizualização da Carta 2


    // Fim do Programa
    printf("----------------------------------------\n");
    printf("Fim do Programa!\n");
    
    printf("Você se divertiu? (Sim/Claro): ");
    scanf("%s", escFinal);


    return 0;
}
