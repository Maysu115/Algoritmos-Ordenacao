#include <stdio.h>
#include <string.h>

#include "mergeQuick.h"

int main() {
    int qtd = 10, *vet, *vet2;
    char nomeArquivo[7];

    scanf(" %s", nomeArquivo);
    geraAleatorios(nomeArquivo, qtd);
    vet = leArquivo(nomeArquivo, qtd);
    vet2 = leArquivo(nomeArquivo, qtd);
    imprimeVet(vet, qtd);
    printf("\n");
    mergeSort(vet, 0, 9);
    quickSort(vet2, 0, 9);
    imprimeVet(vet, qtd);
    imprimeVet(vet2, qtd);

    return 0;
}
