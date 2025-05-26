#include <stdio.h>
#include<locale.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     setlocale(LC_ALL, "Portuguese");
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char nome1[20], nome2;
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float pib_per_capta1, pib_per_capta2;
    float densidade_populacional1, densidade_populacional2;
    double resultado1,resultado2;
    double superpoder1, superpoder2;
    int cont1,cont2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

        // Cadastro das Cartas:
    printf("Cadastro da primeira carta\n");

    estado2[3] = "B";
    codigo2[5]= "B02";
    nome2[20] = "Rio de Janeiro";

    //printf("Digite o estado (sigla): ");
    //scanf("%s", estado1);

    //printf("Digite o código da cidade: ");
    //scanf("%s", codigo1);

    //printf("Digite o nome da cidade: ");
    //scanf("%20s" , nome1);

    printf("Digite O número de habitantes da cidade ");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos1);
    
    densidade_populacional1 = populacao1 / area1;

    pib_per_capta1 = (pib1 * 1000000000) / populacao1;

    resultado1 = populacao1 + pontosTuristicos1;

    resultado2 = resultado1 + area1;

    resultado1 = pib1 + resultado2;

    resultado2 = pib_per_capta1 + resultado1;

    resultado1 = resultado2 + (1/densidade_populacional1);

    superpoder1 = resultado1;

    printf("Cadastro da segunda carta\n");

    estado2[3] = "B";
    codigo2[5]= "B02";
    nome2[20] = "Rio de Janeiro";

    //printf("Digite o estado (sigla): ");
    //scanf("%s", estado2);

    //printf("Digite o código da cidade: ");
    //scanf("%s", codigo2);

    //printf("Digite o nome da cidade: ");
    //scanf("%20s" , nome2);

    printf("Digite O número de habitantes da cidade ");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    densidade_populacional2 = populacao2 / area2;

    pib_per_capta2 = (pib2 * 1000000000) / populacao2;

    resultado1 = populacao2 + pontosTuristicos2;

    resultado2 = resultado1 + area2;

    resultado1 = pib2 + resultado2;

    resultado2 = pib_per_capta2 + resultado1;

    resultado1 = resultado2 + (1/densidade_populacional2);

    superpoder2 = resultado1;
    


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
            // batalha das cartas
    if (populacao1>populacao2){
        /* code */
        printf("*******População********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******População********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

    if (area1>area2){
        /* code */
        printf("*******Área km²********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******Área km²********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (pib1>pib2){
        /* code */
        printf("*******PIB********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******PIB********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (pontosTuristicos1>pontosTuristicos2){
        /* code */
        printf("*******Pontos Turísticos********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******Ponto Turísticos********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (densidade_populacional1<densidade_populacional2){
        /* code */
        printf("*******Densidade Populacional********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******Densidade Populacional********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (pib_per_capta1>pib_per_capta2){
        /* code */
        printf("*******PIB PER CAPTA********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******PIB PER CAPTA********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (superpoder1>superpoder2){
        /* code */
        printf("*******SUPERPODER********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******SUPERPODER********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (cont1>cont2){
        /* code */
        printf("*******VENCEDOR********\n");
        printf("Carta1, venceu!!! Por %d a %d\n",cont1, cont2);
        
    }else{
        printf("*******VENCEDOR********\n");
        printf("Carta2, venceu!!! Por %d a %d\n",cont2, cont1);
    
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

    // Exibição dos Dados das Cartas:

    printf("\n--- Dados da Carta1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populaçâo: %ld \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta1);
    printf("resultado1: %f\n", resultado1);
    printf("resultado2: %f\n", resultado2);
    printf("super poder: %f\n", superpoder1);

    printf("\n--- Dados da Carta2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %ld \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta2);
    printf("super poder: %f\n", superpoder2);





