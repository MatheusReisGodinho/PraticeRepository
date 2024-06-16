#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//Autor: Matheus Reis Godinho
//Exercicio de fixação de conteudo sobre ordenação de algoritmo utilizando o método Bubble Sort.
void bubbleSort(int vetor[], int tamanho) {
    int imax, imin, temp, aux;
    for (imax = 0; imax < tamanho - 1; imax++) {
        for (imin = 0; imin < tamanho - imax - 1; imin++) {
            if (vetor[imin] > vetor[imin + 1]) {
                temp = vetor[imin];
                vetor[imin] = vetor[imin + 1];
                vetor[imin + 1] = temp;
            }
        }
    }
     //Laço de repetição que imprime o vetor já ordenado pelo metodo de ordenação utilizado.
    printf("\t\t---------- VETOR ORDENADO ----------\n");
    for(aux; aux <= imax; aux++){
        printf("| %d ", vetor[aux]);
    }
    printf("|");
}

//Subprograma da definição do idioma no código:
void Idioma(){
    setlocale(LC_ALL, "Portuguese");

}
int main(){
    Idioma();

    srand(time(NULL));
    //Variaveis:
    int vetor[15], indice;

    printf("\t\t---------- VETOR ALEATORIO ----------\n");
    //Laço de repetição com valores aleatorios:(podem se repetir)
    for(indice; indice < 15; indice++){
        vetor[indice] = ("%d ", rand() % 100);
        printf("| %d ", vetor[indice]);

    }
    printf("| \n");
    //Transporte da variavél contendo o vetor aleatorio e o tamanho do mesmo.
    bubbleSort(vetor, indice);
}
