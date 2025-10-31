#include <stdio.h>
#include <string.h>

int main() {
    char pais1[50] = "Brasil";
    char pais2[50] = "Argentina";

    unsigned long populacao1 = 213000000;
    unsigned long populacao2 = 45000000;

    float area1 = 8515767.0;
    float area2 = 2780400.0;

    float pib1 = 1869000.0;
    float pib2 = 500000.0;

    int pontosTuristicos1 = 10;
    int pontosTuristicos2 = 8;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade\n");
    scanf("%d", &escolha1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro):\n");
        if (escolha1 != 1) printf("1 - População\n");
        if (escolha1 != 2) printf("2 - Área\n");
        if (escolha1 != 3) printf("3 - PIB\n");
        if (escolha1 != 4) printf("4 - Pontos Turí");
        if (escolha1 != 5) printf("5 - Densidade\n");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    float val1A, val1B, val2A, val2B;

    switch (escolha1) {
        case 1: val1A = populacao1; val1B = populacao2; break;
        case 2: val1A = area1; val1B = area2; break;
        case 3: val1A = pib1; val1B = pib2; break;
        case 4: val1A = pontosTuristicos1; val1B = pontosTuristicos2; break;
        case 5: val1A = densidade1; val1B = densidade2; break;
    }
    switch (escolha2) {
        case 1: val2A = populacao1; val2B = populacao2; break;
        case 2: val2A = area1; val2B = area2; break;
        case 3: val2A = pib1; val2B = pib2; break;
        case 4: val2A = pontosTuristicos1; val2B = pontosTuristicos2; break;
        case 5: val2A = densidade1; val2B = densidade2; break;
    }

    printf("\nComparação das cartas:\n");
    printf("%s: %.2f e %.2f\n", pais1, val1A, val2A);
    printf("%s: %.2f e %.2f\n", pais2, val1B, val2B);

    float pontuacao1 = 0, pontuacao2 = 0;

    if (escolha1 == 5) { 
        pontuacao1 += (val1A < val1B) ? 1 : (val1A > val1B) ? 0 : 0.5;
        pontuacao2 += (val1B < val1A) ? 1 : (val1B > val1A) ? 0 : 0.5;
    } else {
        pontuacao1 += (val1A > val1B) ? 1 : (val1A < val1B) ? 0 : 0.5;
        pontuacao2 += (val1B > val1A) ? 1 : (val1B < val1A) ? 0 : 0.5;
    }

    if (escolha2 == 5) {
        pontuacao1 += (val2A < val2B) ? 1 : (val2A > val2B) ? 0 : 0.5;
        pontuacao2 += (val2B < val2A) ? 1 : (val2B > val2A) ? 0 : 0.5;
    } else {
        pontuacao1 += (val2A > val2B) ? 1 : (val2A < val2B) ? 0 : 0.5;
        pontuacao2 += (val2B > val2A) ? 1 : (val2B < val2A) ? 0 : 0.5;
    }

    printf("\nResultado final:\n");
    printf("%s pontuação: %.1f\n", pais1, pontuacao1);
    printf("%s pontuação: %.1f\n", pais2, pontuacao2);

    pontuacao1 > pontuacao2 ? printf("Carta vencedora: %s\n", pais1) :
    pontuacao2 > pontuacao1 ? printf("Carta vencedora: %s\n", pais2) :
    printf("Empate!\n");

    return 0;
}
