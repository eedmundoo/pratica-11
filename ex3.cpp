#include <iostream>

// Função para ordenar quatro variáveis float em ordem crescente
void ordenar(float &a, float &b, float &c, float &d) {
    if (a > b) std::swap(a, b);
    if (a > c) std::swap(a, c);
    if (a > d) std::swap(a, d);
    if (b > c) std::swap(b, c);
    if (b > d) std::swap(b, d);
    if (c > d) std::swap(c, d);
}

int main() {
    float num1, num2, num3, num4;
    
    std::cout << "Digite quatro números float separados por espaços: ";
    std::cin >> num1 >> num2 >> num3 >> num4;
    
    ordenar(num1, num2, num3, num4);
    
    std::cout << "Números ordenados em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;
    
    return 0;
}
