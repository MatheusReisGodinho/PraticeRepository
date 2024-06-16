#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//Autor: Matheus Reis Godinho
//Exercicio de fixa��o de conteudo sobre ordena��o de algoritmo utilizando o m�todo Insertion Sort.
void insertionSort(int vetor[], int tamanho) {
    int imax, imin, chave,aux = 0;
    for (imax = 1; imax < tamanho; imax++) {
        chave = vetor[imax];
        imin = imax - 1;
        while ((imin >= 0) && (vetor[imin] > chave)) {
            vetor[imin + 1] = vetor[imin];
            imin = imin - 1;
        }
        vetor[imin + 1] = chave;
    }
    //La�o de repeti��o que imprime o vetor j� ordenado pelo metodo de ordena��o utilizado.
    printf("\t\t---------- VETOR ORDENADO ----------\n");
    for(aux; aux < imax; aux++){
        printf("| %d ", vetor[aux]);
    }
    printf("|");
}
//Subprograma da defini��o do idioma no c�digo:
void Idioma(){
    setlocale(LC_ALL, "Portuguese");

}
int main(){
    Idioma();

    srand(time(NULL));
    //Variaveis:
    int vetor[15], indice;

    printf("\t\t---------- VETOR ALEATORIO ----------\n");
    //La�o de repeti��o com valores aleatorios:(podem se repetir)
    for(indice; indice < 15; indice++){
        vetor[indice] = ("%d ", rand() % 100);
        printf("| %d ", vetor[indice]);

    }
    printf("| \n");
    //Transporte da variav�l contendo o vetor aleatorio e o tamanho do mesmo.
    insertionSort(vetor, indice);
}
