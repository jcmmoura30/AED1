#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função de merge para combinar duas sublistas ordenadas em uma única lista ordenada
void merge(char* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Tamanho da sublista esquerda
    int n2 = right - mid;     // Tamanho da sublista direita

    // Arrays temporários para armazenar as partes divididas
    char* leftArr[n1];
    char* rightArr[n2];

    // Copiar os dados para os arrays temporários
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    // Combinar as sublistas temporárias de volta na lista original
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (strcmp(leftArr[i], rightArr[j]) <= 0) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copiar os elementos restantes de leftArr[], se houver
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copiar os elementos restantes de rightArr[], se houver
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Função Merge Sort para dividir o array e ordenar as sublistas
void mergeSort(char* arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Encontrar o ponto médio
        mergeSort(arr, left, mid);             // Ordenar a primeira metade
        mergeSort(arr, mid + 1, right);        // Ordenar a segunda metade
        merge(arr, left, mid, right);          // Combinar as metades ordenadas
    }
}

int main() {
    int names, position;

    // Entrada do número de palavras e a posição
    scanf("%d %d", &names, &position);

    // Alocar memória para as palavras
    char* words[names];

    // Ler as palavras usando scanf
    for (int i = 0; i < names; i++) {
        words[i] = (char*)malloc(100 * sizeof(char)); // Alocar memória para cada palavra
        scanf("%s", words[i]);  // Usando scanf para ler a palavra
    }

    // Ordenar as palavras usando Merge Sort
    mergeSort(words, 0, names - 1);

    // Exibir a palavra na posição especificada
    if (position > 0 && position <= names) {
        printf("%s\n", words[position - 1]);
    } else {
        printf("Posição inválida.\n");
    }

    // Liberar a memória alocada
    for (int i = 0; i < names; i++) {
        free(words[i]);
    }

    return 0;
}

