#include <iostream>

// Função para multiplicar cada elemento do vetor por um multiplicador
void multiplica_por_n(int *vet, int qtde, int n) {
    for (int i = 0; i < qtde; i++) {
        vet[i] *= n;
    }
}

int main() {
    int qtde, multiplicador;

    std::cout << "Digite a quantidade de elementos do vetor: ";
    std::cin >> qtde;

    int *vetor = new int[qtde];

    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < qtde; i++) {
        std::cin >> vetor[i];
    }

    std::cout << "Digite o multiplicador: ";
    std::cin >> multiplicador;

    multiplica_por_n(vetor, qtde, multiplicador);

    std::cout << "Vetor após a multiplicação:" << std::endl;
    for (int i = 0; i < qtde; i++) {
        std::cout << vetor[i] << " ";
    }

    // Liberar a memória alocada
    delete[] vetor;

    return 0;
}
