#include <stdio.h>
#include <stdlib.h>

// Definição do nó da lista
struct Node {
    // Dado armazenado 
    int data;
    // Endereço de memoria do próximo node
    struct Node* next;
}node;


// Função para adicionar um elemento no inicio da lista
void push(struct Node** head_ref, int new_data) {

    // Aloca o nó
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    // Insere os dados
    new_node->data = new_data;

    // Faz o próximo do novo nó como cabeça
    new_node->next = (*head_ref);


}

int main(int argc, char const *argv[])
{
    return 0;
}
