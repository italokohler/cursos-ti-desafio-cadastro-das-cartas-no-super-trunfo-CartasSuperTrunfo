#include <stdio.h>

int main() {
    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS DA CARTA 1
    // =========================
    char estado1;               // Estado da carta (A-H)
    char codigo1[4];            // Código da carta (ex: A01) -> 3 caracteres + '\0' (fim de string)
    char cidade1[50];           // Nome da cidade (até 49 caracteres + '\0')
    unsigned long int populacao1; // População (unsigned long int para suportar números grandes)
    float area1;                 // Área em km²
    float pib1;                  // PIB em bilhões de reais
    int pontos1;                 // Número de pontos turísticos
    float densidade1;            // Densidade populacional (hab/km²)
    float pibPerCapita1;         // PIB per capita (reais por habitante)
    float superPoder1;           // Super Poder calculado pela soma de atributos

    // =========================
    // ENTRADA DE DADOS DA CARTA 1
    // =========================
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes do %c serve para ignorar quebras de linha anteriores

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);   // %s lê strings sem espaço

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // %[^\n] lê até encontrar ENTER (permite espaços no nome da cidade)

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // =========================
    // CÁLCULOS DA CARTA 1
    // =========================
    densidade1 = populacao1 / area1;                   // densidade = população ÷ área
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB convertido de bilhões para reais, depois dividido pela população
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) 
                  + pontos1 + pibPerCapita1 + (1.0 / densidade1); 
                  // soma de todos os atributos numéricos + inverso da densidade

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS DA CARTA 2
    // =========================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // =========================
    // ENTRADA DE DADOS DA CARTA 2
    // =========================
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // =========================
    // CÁLCULOS DA CARTA 2
    // =========================
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) 
                  + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // =========================
    // SAÍDA FORMATADA DOS DADOS DAS DUAS CARTAS
    // =========================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =========================
    // COMPARAÇÃO DAS CARTAS
    // =========================
    printf("\n===== Comparacao de Cartas =====\n");

    // Cada comparação gera 1 se Carta 1 venceu, ou 0 se Carta 2 venceu
    // População: vence quem tiver mais habitantes
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Área: vence quem tiver área maior
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);

    // PIB: vence quem tiver PIB maior
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Pontos turísticos: vence quem tiver mais pontos
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Densidade: aqui o MENOR valor vence (cidade menos "apertada")
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    // PIB per Capita: vence quem tiver PIB per capita maior
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    // Super Poder: vence quem tiver
