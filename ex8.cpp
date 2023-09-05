#include <iostream>
#include <cmath>

// Função para verificar se um número é primo
bool eh_primo(int num) {
    if (num <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
            return false; // Se for divisível por algum número, não é primo
        }
    }

    return true; // Caso contrário, é primo
}

// Função para contar a quantidade de números primos em um vetor
int conta_primos(int *vet, int qtde) {
    int contador = 0;

    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int qtde;

    std::cout << "Digite a quantidade de elementos do vetor: ";
    std::cin >> qtde;

    int *vetor = new int[qtde];

    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < qtde; i++) {
        std::cin >> vetor[i];
    }

    int quantidade_primos = conta_primos(vetor, qtde);

    std::cout << "Quantidade de números primos no vetor: " << quantidade_primos << std::endl;

    // Liberar a memória alocada
    delete[] vetor;

    return 0;
}
