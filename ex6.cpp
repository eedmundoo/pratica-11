#include <iostream>

// Função para intercalar dois vetores
int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamResultado = tam1 + tam2;
    int *resultado = new int[tamResultado]; // Aloca dinamicamente um novo vetor

    int index1 = 0, index2 = 0;

    for (int i = 0; i < tamResultado; i++) {
        if (index1 < tam1) {
            resultado[i] = vet1[index1];
            index1++;
        } else {
            resultado[i] = vet2[index2];
            index2++;
        }
    }

    return resultado;
}

int main() {
    int tam1, tam2;

    std::cout << "Digite o tamanho do primeiro vetor: ";
    std::cin >> tam1;

    int *vetor1 = new int[tam1];

    std::cout << "Digite os elementos do primeiro vetor:" << std::endl;
    for (int i = 0; i < tam1; i++) {
        std::cin >> vetor1[i];
    }

    std::cout << "Digite o tamanho do segundo vetor: ";
    std::cin >> tam2;

    int *vetor2 = new int[tam2];

    std::cout << "Digite os elementos do segundo vetor:" << std::endl;
    for (int i = 0; i < tam2; i++) {
        std::cin >> vetor2[i];
    }

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    std::cout << "Vetor intercalado:" << std::endl;
    for (int i = 0; i < tam1 + tam2; i++) {
        std::cout << resultado[i] << " ";
    }

    // Liberar a memória alocada
    delete[] vetor1;
    delete[] vetor2;
    delete[] resultado;

    return 0;
}
