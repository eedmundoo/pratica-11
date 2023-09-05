#include <iostream>

// Função para encontrar o valor máximo e mínimo em um vetor
void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        // Se o vetor estiver vazio, retornamos 0 para ambos maximo e minimo
        maximo = 0;
        minimo = 0;
        return;
    }

    maximo = vetor[0]; // Inicializamos maximo com o primeiro elemento do vetor
    minimo = vetor[0]; // Inicializamos minimo com o primeiro elemento do vetor

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i]; // Atualizamos maximo se encontrarmos um valor maior
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i]; // Atualizamos minimo se encontrarmos um valor menor
        }
    }
}

int main() {
    int n;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;

    int vetor[n];

    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento " << (i + 1) << ": ";
        std::cin >> vetor[i];
    }

    int maximo, minimo;
    maxmin(vetor, n, maximo, minimo);

    std::cout << "O valor máximo é: " << maximo << std::endl;
    std::cout << "O valor mínimo é: " << minimo << std::endl;

    return 0;
}
