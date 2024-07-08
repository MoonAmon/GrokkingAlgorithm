#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int buscaMenor(int arr[], int len_arr){
    int menor = arr[0];
    int menor_indice = 0;

    for (int i = 0; i < len_arr; i++)
    {
        if (arr[i] < menor)
        {
            menor = arr[i];
            menor_indice = i;
        }
        
    }

    return menor_indice;
    
}

int* ordenacaoporSelecao(int arr[], int len_arr){
    int* new_arr = (int*)malloc(len_arr * sizeof(int));
    for (int i = 0; i < len_arr; i++)
    {
        int menor = buscaMenor(arr, len_arr);
        new_arr[i] = arr[menor];
        arr[menor] = INT_MAX;
    }

    return new_arr;
    
}


int main(int argc, char const *argv[])
{
    int arr_suffled[] = {2,3,5,12,21,53,5};
    int* sorted_array;
    int len_arr = 7;

    sorted_array = ordenacaoporSelecao(arr_suffled, len_arr);

    for (int i = 0; i < len_arr; i++)
    {
        printf("%d\n", sorted_array[i]);
    }
    

    return 0;
}
