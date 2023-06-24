#include <stdio.h>
#include <stdlib.h>




// Definição da estrutura do nó da lista
typedef struct Node {
    int data;               // Dado armazenado no nó
    struct Node* next;      // Ponteiro para o próximo nó
} Node;

// Função para criar um novo nó na lista
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));  // Utilização do malloc para alocar memória para o novo nó
    if (newNode == NULL) {                         // Verifica se a alocação foi bem-sucedida
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    newNode->data = data;                          // Define o dado do novo nó
    newNode->next = NULL;                          
    return newNode;
}

// Função para inserir um novo nó no início da lista
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);               
    newNode->next = *head;                          // O próximo nó do novo nó aponta para a antiga cabeça da lista
    *head = newNode;                                // A cabeça da lista agora aponta para o novo nó
    printf("Novo nó inserido no início: %d\n", data);
}

// Função para exibir a lista
void displayList(Node* head) {
    Node* current = head;                            // Ponteiro auxiliar para percorrer a lista
    printf("Lista: ");
    while (current != NULL) {                        // Percorre a lista até o final
        printf("%d ", current->data);                // Exibe o dado do nó atual
        current = current->next;                      // Avança para o próximo nó
    }
    printf("\n");
}

// Função para liberar a memória alocada pela lista
void freeList(Node* head) {
    Node* current = head;                            // Ponteiro auxiliar para percorrer a lista
    while (current != NULL) {                        // Percorre a lista até o final
        Node* temp = current;                         // Armazena o nó atual temporariamente
        current = current->next;                       // Avança para o próximo nó
        free(temp);                                   
    }
}

int main() {
    Node* head = NULL;                                

    // Inserindo nós na lista usando a função insertAtBeginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 9);

    // Exibindo a lista usando a função displayList
    displayList(head);

    // Liberando a memória alocada pela lista usando a função freeList
    freeList(head);

    return 0;
}
