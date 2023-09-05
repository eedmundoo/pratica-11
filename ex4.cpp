#include <iostream>

// Função para realizar as operações de soma e subtração
void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;
    
    X = soma; // Atualiza o valor de X com a soma
    Y = subtracao; // Atualiza o valor de Y com a subtração
}

int main() {
    int X, Y;

    std::cout << "Digite o valor de X: ";
    std::cin >> X;
    std::cout << "Digite o valor de Y: ";
    std::cin >> Y;

    calcula(X, Y);

    std::cout << "X + Y: " << X << std::endl;
    std::cout << "X - Y: " << Y << std::endl;

    return 0;
}
