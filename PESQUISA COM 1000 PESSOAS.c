#include <stdio.h>

int main() {
    int i, n = 1000;  
    float altura, somaAlturas = 0, mediaAlturas;
    float maiorAltura = 0, menorAltura = 999;
    int abaixoMedia = 0;
    float alturas[n];  

    
    for (i = 0; i < n; i++) {
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alturas[i]); 

        somaAlturas += alturas[i];

        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }

        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
    }


    mediaAlturas = somaAlturas / n;


    for (i = 0; i < n; i++) {
        if (alturas[i] < mediaAlturas) {
            abaixoMedia++;
        }
    }

    printf("\nMaior Altura: %.2f\n", maiorAltura);
    printf("Menor Altura: %.2f\n", menorAltura);
    printf("Media das Alturas: %.2f\n", mediaAlturas);
    printf("Pessoas com altura inferior a media: %d\n", abaixoMedia);

    return 0;
}
