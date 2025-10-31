#include <stdio.h>
#include <string.h>

int main() {
    char nomePais1[50] = "País A";
    unsigned long populacao1 = 5000000;
    float area1 = 2500.0;
    float pib1 = 120000.0;
    int pontosTuristicos1 = 10;
    float densidade1 = populacao1 / area1;

    char nomePais2[50] = "País B";
    unsigned long populacao2 = 3000000;
    float area2 = 2000.0;
    float pib2 = 150000.0;
    int pontosTuristicos2 = 8;
    float densidade2 = populacao2 / area2;

    int opcao;
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n", nomePais1, nomePais2);

    switch(opcao) {
        case 1: 
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomePais1, populacao1);
            printf("%s: %lu habitantes\n", nomePais2, populacao2);
            if(populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if(populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if(area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if(area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: 
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nomePais1, pib1);
            printf("%s: %.2f\n", nomePais2, pib2);
            if(pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if(pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nomePais1, pontosTuristicos1);
            printf("%s: %d\n", nomePais2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if(pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: 
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f habitantes/km²\n", nomePais1, densidade1);
            printf("%s: %.2f habitantes/km²\n", nomePais2, densidade2);
            if(densidade1 < densidade2) { 
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if(densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}

