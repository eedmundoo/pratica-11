#include <iostream>

// Função para inserir um elemento no meio de um vetor
int insere_meio(int vetor[], int qtde, int elemento) {
    if (qtde <= 0) {
        // Se o vetor estiver vazio ou tiver tamanho inválido, não podemos inserir no meio
        std::cout << "Vetor vazio ou tamanho inválido." << std::endl;
        return qtde;
    }

    int meio = qtde / 2;

    // Deslocar os elementos à direita a partir do meio para abrir espaço para o novo elemento
    for (int i = qtde; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }

    // Inserir o novo elemento no meio
    vetor[meio] = elemento;

    return qtde + 1;
}

int main() {
    int vetor[100]; // Tamanho máximo do vetor (ajuste conforme necessário)
    int qtde = 6;   // Tamanho inicial do vetor

    // Preencher o vetor inicial
    for (int i = 0; i < qtde; i++) {
        vetor[i] = i + 1;
    }

    int elemento;

    std::cout << "Digite o elemento a ser inserido no meio: ";
    std::cin >> elemento;

    qtde = insere_meio(vetor, qtde, elemento);

    std::cout << "Novo tamanho do vetor: " << qtde << std::endl;
    std::cout << "Vetor após a inserção: ";
    
    for (int i = 0; i < qtde; i++) {
        std::cout << vetor[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
