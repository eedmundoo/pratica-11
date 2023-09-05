#include <iostream>
#include <string>
#include <algorithm>

// Função para encontrar a interseção de duas strings
std::string intersecao(const std::string& A, const std::string& B) {
    std::string C;

    for (char c : A) {
        if (B.find(c) != std::string::npos) {
            if (C.find(c) == std::string::npos) {
                C += c;
            }
        }
    }

    return C;
}

int main() {
    std::string stringA, stringB;

    std::cout << "Digite a primeira string (A): ";
    std::cin >> stringA;

    std::cout << "Digite a segunda string (B): ";
    std::cin >> stringB;

    std::string resultado = intersecao(stringA, stringB);

    if (resultado.empty()) {
        std::cout << "Não há caracteres em comum entre as duas strings." << std::endl;
    } else {
        std::cout << "Caracteres em comum entre as duas strings (C): " << resultado << std::endl;
    }

    return 0;
}
