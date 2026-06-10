#include <iostream>
#include <limits>
#include "BD.hpp"
#include "ProdutoFacade.hpp"
#include "Util.hpp"

int main() {
    DataBase db;
    ProdutoFacade pf;
    int opt = -1;

    while (opt != 0) {
        Util::limpaTela();
        Util::menu();
        
        // Se a entrada não for um número válido
        if (!(std::cin >> opt)) {
            std::cin.clear(); // Limpa o estado de erro do cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta o lixo
            opt = -1; // Força a ir para o default do switch
        } else {
            // Se leu com sucesso, também descartamos o '\n' que sobra no buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        Util::opcoes(opt, pf, db);

        if (opt != 0) {
            Util::pausaTela();
        }
    }

    return 0;
}