#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//Autor: Matheus Reis Godinho
//Exercicio de fixa��o de conteudo sobre ordena��o de algoritmo utilizando o m�todo QuickSort.

int partition(int vetor[], int menor, int maior) {
    int pivo = vetor[maior];
    int imax = (menor - 1);
    for (int imin = menor; imin <= maior - 1; imin++) {
        if (vetor[imin] < pivo) {
            imax++;
            swap(&vetor[imax], &vetor[imin]);
        }
    }
    swap(&vetor[imax + 1], &vetor[maior]);
    return (imax + 1);
}

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void quickSort(int vetor[], int menor, int maior) {
    if (menor < maior) {
        int indpivo = partition(vetor, menor, maior);
        quickSort(vetor, menor, indpivo - 1);
        quickSort(vetor, indpivo + 1, maior);
        }

    }
//Subprograma da defini��o do idioma no c�digo:
void Idioma(){
    setlocale(LC_ALL, "Portuguese");
}
int main(){
    Idioma();

    srand(time(NULL));
    //Variaveis:
    int vetor[15], indice = 0, indicemax = 15;

    printf("\t\t---------- VETOR ALEATORIO ----------\n");
    //La�o de repeti��o com valores aleatorios:(podem se repetir)
    for(indice = 0; indice < indicemax; indice++){
        vetor[indice] = ("%d ", rand() % 100);
        printf("| %d ", vetor[indice]);

    }
    printf("| \n");
    //Transporte da variav�l contendo o vetor aleatorio, inicio do vetor e posi��o final.
    quickSort(vetor, 0, 14);
 printf("\t\t---------- VETOR ORDENADO ----------\n");
    //La�o de repeti��o com valores ordenados seguindo o metodo QuickSort.
    for(indice = 0; indice < indicemax; indice++){
        printf("| %d ", vetor[indice]);

}
    printf("| \n");
}
