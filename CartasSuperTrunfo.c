#include <stdio.h>

int main() {
    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS DA CARTA 1
    // =========================
    char estado1;          // Letra do estado (A-H)
    char codigo1[4];       // Código da carta (ex: A01) -> 3 caracteres + '\0' (fim de string)
    char cidade1[50];      // Nome da cidade (até 49 caracteres + '\0')
    int populacao1;        // População da cidade
    float area1;           // Área em km²
    float pib1;            // PIB em bilhões de reais
    int pontos1;           // Número de pontos turísticos

    // =========================
    // ENTRADA DE DADOS DA CARTA 1
    // =========================
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);  // O espaço antes do %c serve para ignorar quebras de linha anteriores

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);    // %s lê strings sem espaço

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // %[^\n] lê até encontrar ENTER (permite espaços no nome da cidade)

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS DA CARTA 2
    // =========================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

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
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // =========================
    // SAÍDA FORMATADA DOS DADOS
    // =========================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);       // "%.2f" imprime o float com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0; // Fim do programa
}
