#include <iostream>
#include <string>

// Função para codificar uma string
std::string codificar(const std::string& texto) {
    std::string codigo = texto; // Criar uma cópia da string de entrada

    for (char& c : codigo) {
        if (std::isalpha(c)) { // Verificar se o caractere é uma letra
            if (c == 'z' || c == 'Z') { // Caso seja 'z' ou 'Z', voltar para 'a' ou 'A'
                c = (c == 'z') ? 'a' : 'A';
            } else {
                c++; // Incrementar o caractere
            }
        }
    }

    return codigo;
}

// Função para decodificar uma string
std::string decodificar(const std::string& codigo) {
    std::string texto = codigo; // Criar uma cópia da string de entrada

    for (char& c : texto) {
        if (std::isalpha(c)) { // Verificar se o caractere é uma letra
            if (c == 'a' || c == 'A') { // Caso seja 'a' ou 'A', voltar para 'z' ou 'Z'
                c = (c == 'a') ? 'z' : 'Z';
            } else {
                c--; // Decrementar o caractere
            }
        }
    }

    return texto;
}

int main() {
    std::string texto_original = "Estruturas de Dados";
    
    // Codificar o texto original
    std::string codigo = codificar(texto_original);
    std::cout << "Texto codificado: " << codigo << std::endl;
    
    // Decodificar o texto codificado
    std::string texto_decodificado = decodificar(codigo);
    std::cout << "Texto decodificado: " << texto_decodificado << std::endl;

    return 0;
}
