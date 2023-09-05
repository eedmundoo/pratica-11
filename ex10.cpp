#include <iostream>
#include <string>
#include <vector>

// Função para encontrar as posições onde a letra foi encontrada na string
int* encontra_letra(const std::string& str, char letra, int& tamanho) {
    std::vector<int> posicoes;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            posicoes.push_back(i);
        }
    }

    tamanho = posicoes.size(); // Atualiza o tamanho do vetor
    int* vetor = new int[tamanho]; // Aloca dinamicamente o vetor de inteiros

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = posicoes[i];
    }

    return vetor;
}

int main() {
    std::string str;
    char letra;

    std::cout << "Digite uma string de caracteres: ";
    std::cin >> str;

    std::cout << "Digite a letra a ser encontrada: ";
    std::cin >> letra;

    int tamanho;
    int* resultado = encontra_letra(str, letra, tamanho);

    std::cout << "Posições onde a letra '" << letra << "' foi encontrada:" << std::endl;

    for (int i = 0; i < tamanho; i++) {
        std::cout << resultado[i] << " ";
    }

    std::cout << std::endl;

    // Liberar a memória alocada
    delete[] resultado;

    return 0;
}

