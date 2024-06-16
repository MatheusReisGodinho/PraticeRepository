#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//Autor: Matheus Reis Godinho
//Exercicio de fixação de conteudo sobre ordenação de algoritmo utilizando o método QuickSort.

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
//Subprograma da definição do idioma no código:
void Idioma(){
    setlocale(LC_ALL, "Portuguese");
}
int main(){
    Idioma();

    srand(time(NULL));
    //Variaveis:
    int vetor[15], indice = 0, indicemax = 15;

    printf("\t\t---------- VETOR ALEATORIO ----------\n");
    //Laço de repetição com valores aleatorios:(podem se repetir)
    for(indice = 0; indice < indicemax; indice++){
        vetor[indice] = ("%d ", rand() % 100);
        printf("| %d ", vetor[indice]);

    }
    printf("| \n");
    //Transporte da variavél contendo o vetor aleatorio, inicio do vetor e posição final.
    quickSort(vetor, 0, 14);
 printf("\t\t---------- VETOR ORDENADO ----------\n");
    //Laço de repetição com valores ordenados seguindo o metodo QuickSort.
    for(indice = 0; indice < indicemax; indice++){
        printf("| %d ", vetor[indice]);

}
    printf("| \n");
}
