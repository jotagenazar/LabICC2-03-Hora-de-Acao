/*
Aluno: João Gabriel Manfré Nazar
Solução da contagem de trocas realizadas na ordenação pelo método Merge Sort
*/

#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int ini, int meio, int fim, int *trocas) {

	int i = ini, j = meio + 1, k = 0;
	
	int n = fim - ini + 1;
	int aux[n];

	while( (i <= meio) && (j <= fim)) {

		if(v[i] <= v[j]) {
			aux[k] = v[i];
			i++;
		} else {
			aux[k] = v[j];
			j++;
            *trocas += meio -i + 1; //contabilização do elemento após o meio adicionado antes de um antes do meio
		}
		k++;

	}

	while (j <= fim) {
		aux[k] = v[j];
		k++;
		j++;
	}

	while (i <= meio) {
		aux[k] = v[i];
		k++;
		i++;
	}

	for (i = 0; i < n; i++) {
		v[ini+i] = aux[i];
	}

}

void mergeSort(int *v, int ini, int fim, int *trocas) {

	if (ini >= fim) // caso base
		return;

	int meio = (ini+fim)/2;
	mergeSort(v, ini, meio, trocas);
	mergeSort(v, meio+1, fim, trocas);
	merge(v, ini, meio, fim, trocas);
}

int main() {
    int n;
    int trocas;

    scanf(" %d", &n); //leitura da quantidade de elementos
    while(n > 0) {
        trocas = 0;
        //leitura de cada elemento
        int array[n];
        for(unsigned int i = 0; i < n; ++i) scanf("%u", &array[i]);

        //ordenação e contagem de trocas
        mergeSort(array, 0, n - 1, &trocas);

        //impressão de resultados
        if(trocas % 2 == 1)
            printf("Jaques\n");
        else
            printf("Fino\n");

        //leitura do próximo n para próxima leitura de jujubas
        scanf(" %d", &n);
    }

    return 0;
}