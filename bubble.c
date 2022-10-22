/*
Aluno: João Gabriel Manfré Nazar
Solução da contagem de trocas realizadas na ordenação pelo método Bubble Sort
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int bubbleSort(unsigned int array[], unsigned int size) {
    unsigned int trocas = 0;

    for(unsigned int i = 0; i < size - 1; ++i) {
        for(unsigned int j = 0; j < size - i - 1; ++j) { 
            if(array[j] > array[j+1]) {
                unsigned int uAux = array[j];
                array[j] = array[j+1];
                array[j+1] = uAux;
                ++trocas;
            }
        }
    }

    return trocas;
}

int main() {
    unsigned int n;

    scanf(" %u", &n); //leitura da primeira quantidade de elementos

    while(n > 0) { //laço de leitura enquanto houverem elementos a serem lidos
        //leitura de cada elemento
        unsigned int array[n];
        for(unsigned int i = 0; i < n; ++i) scanf("%u", &array[i]);

        //ordenação e contagem de trocas
        unsigned int trocas = bubbleSort(array, n);

        //impressão de resultados
        if(trocas % 2 == 1)
            printf("Jaques\n");
        else
            printf("Fino\n");

        //leitura do próximo n para próxima leitura de jujubas
        scanf(" %u", &n); 
    }

    return 0;
}