#include <iostream>
#include "Hamburguer.hpp"
#include "BD.hpp"

using namespace std;

void limpaTela()
{
    std::cout << "\033[2J\033[H";
}

bool criar(HamburguerBuilder &hb, DataBase &db)
{

    int valor, aux;

    limpaTela();

    cout << "\nCRIACAO DE HAMBURGUER\n--------------------------------------------\n\n";

    cout << "Qual o tipo do Pao?\n"
         << "[0] Brioche\n"
         << "[1] Australiano\n"
         << "[2] Ciabatta\n"
         << "[3] Batata\n"
         << "[4] Com Gergelim\n\n"
         << ">> ";
    cin >> valor;
    hb.setPao(static_cast<TipoPao>(valor));

    limpaTela();
    cout << "\nQual o tipo da Carne?\n"
         << "[0] Peito Bovino\n"
         << "[1] Acem Bovino\n"
         << "[2] Fraldinha Bovino\n"
         << "[3] Costela Bovino\n"
         << "[4] Patinho Bovino\n"
         << "[5] Coxao_Duro Bovino\n\n"
         << ">> ";
    cin >> valor;
    cout << "\nE quantas fatias de Carne?\n\n"
         << ">> ";
    cin >> aux;
    hb.setCarne(static_cast<TipoCarne>(valor), aux);

    limpaTela();
    cout << "\nQual o tipo da Queijo?\n"
         << "[0] Cheddar\n"
         << "[1] Queijo Americano\n"
         << "[2] Mussarela\n"
         << "[3] Prato\n"
         << "[4] Suico\n"
         << "[5] Gouda\n"
         << "[6] Gorgonzola\n\n"
         << ">> ";
    cin >> valor;
    cout << "\nE quantas fatias de Queijo?\n\n"
         << ">> ";
    cin >> aux;
    hb.setQueijo(static_cast<TipoQueijo>(valor), aux);

    limpaTela();
    cout << "\nQual o tipo do Molho?\n"
         << "[0] Ketchup\n"
         << "[1] Mostarda\n"
         << "[2] Maionese Tridicional\n"
         << "[3] Maionese Verde\n"
         << "[4] Alho\n"
         << "[5] Barbecue\n"
         << "[6] Pimenta\n\n"
         << ">> ";
    cin >> valor;
    hb.setMolho(static_cast<TipoMolho>(valor));

    limpaTela();
    cout << "\nQual o tipo da Cebola?\n"
         << "[0] Amarela\n"
         << "[1] Roxa\n"
         << "[2] Branca\n"
         << "[3] Doce\n\n"
         << ">> ";
    cin >> valor;
    hb.setCebola(static_cast<TipoCebola>(valor));

    limpaTela();
    cout << "\nQual o tipo da Alface?\n"
         << "[0] Americana\n"
         << "[1] Romana\n"
         << "[2] Manteiga\n"
         << "[3] Crespa\n"
         << "[4] Roxa\n\n"
         << ">> ";
    cin >> valor;
    hb.setAlface(static_cast<TipoAlface>(valor));

    Hamburguer aborgue = hb.build();
    db.inserir(aborgue);

    cout << "\nHamburguer criado com Sucesso!\n\n"
         << "Pressione qualquer Tecla para continuar...\n";

    cin.ignore();
    cin.get();

    limpaTela();

    return 0;
}

bool deletar(DataBase &db)
{
    limpaTela();
    cout << "Tentando remover...\n\n";
    if (db.remover())
    {
        cout << "Ultimo Hamburguer removido com sucesso!\n\n";

        return 1;
    }
    else
    {
        cout << "\nFalha ao remover ultimo Hamburguer.\n"
             << "Talvez a lista esteja vazia...\n\n";

        return 0;
    }

    cout << "Pressione qualquer Tecla para continuar...\n\n";

    cin.ignore();
    cin.get();
}

int printar(DataBase &db)
{
    limpaTela();
    cout << "\nLISTA DE HAMBURGUERS\n--------------------------------------------\n\n";

    db.imprimir();

    cout << "Pressione qualquer Tecla para continuar...\n";

    cin.ignore();
    cin.get();

    return 0;
}

void options(int valor, HamburguerBuilder &hb, DataBase &db)
{
    switch (valor)
    {
    case 1:
    {
        criar(hb, db);
        break;
    }
    case 2:
    {
        deletar(db);
        break;
    }
    case 3:
    {
        printar(db);
        break;
    }
    default:
    {
        limpaTela();
        cout << "\nInsira uma opcao valida...\n";
        cin.ignore();
        cin.get();
        break;
    }
    }
}

void menu(HamburguerBuilder &hb, DataBase &db)
{
    int option = -1;

    while (true)
    {
        limpaTela();
        cout << "\nInsira uma opcao:\n"
             << "[1] Criar    |  Hamburguer\n"
             << "[2] Remover  |  Hamburguer\n"
             << "[3] Listar   |  Hamburguers\n"
             << "\n[0] Sair do Programa\n\n";

        cout << ">> ";
        cin >> option;
        if (option == 0)
        {
            limpaTela();
            cout << "\nObrigado por usar os nossos servicos!\n\n";
            break;
        }
        options(option, hb, db);
    }
}

int main()
{
    HamburguerBuilder hb;
    DataBase db;

    limpaTela();
    cout << "\nBem-Vindo ao Hamburguer_Creator 2000!\n--------------------------------------------\n\n";
    menu(hb, db);

    return 0;
}