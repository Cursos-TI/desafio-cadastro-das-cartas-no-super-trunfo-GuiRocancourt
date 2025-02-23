#include <stdio.h>

int main () {
    
    /*Variaveis terminadas com 1 são relativas aos dados da carta 1 e 
    as variaveis terminadas com 2 são relativas ao dados da carta 2 */

    char estado1;
    char codigoCarta1[10];
    char nomeCidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char estado2;
    char codigoCarta2[10];
    char nomeCidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    // Inicio da entrada de dados da carta 1

    printf("Insira os Dados da Carta 1 \n");
    printf("Digite a letra que representa o Estado \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade \n");
    scanf("%s", &nomeCidade1);

    printf("Digite o numero de habitantes \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em Km²) \n");
    scanf("%f", &area1);

    printf("Digite o PIB \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos \n");
    scanf("%d", &pontosTuristicos1);
    // Fim da entrada de dados da carta 1


    // Inicio da entrada de dados da carta 2

    printf("Insira os Dados da Carta 2 \n");
    printf("Digite a letra que representa o Estado \n");
    scanf(" %c", &estado2);         // Foi incluido um espaco antes do % para que essa linha nao seja pulada 

    printf("Digite o codigo da carta \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade \n");
    scanf("%s", &nomeCidade2);

    printf("Digite o numero de habitantes \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em Km²) \n");
    scanf("%f", &area2);

    printf("Digite o PIB \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos \n");
    scanf("%d", &pontosTuristicos2);
    // Fim da entrada de dados da carta 2

    //Impressao dos dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB %.2f \n", pib1);
    printf("Numero de Pontos Turisticos: %d \n", pontosTuristicos1);
    printf("\n");

    // Impressao dos dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB %.2f \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", pontosTuristicos2);

    return 0;

}