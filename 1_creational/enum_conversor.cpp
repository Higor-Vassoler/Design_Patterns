#include "Hamburguer.hpp"
#include "enum_conversor.hpp"
#include <string>

std::string tipoPaoToString(TipoPao pao)
{
    switch (pao)
    {
    case TipoPao::Brioche:
        return "Brioche";
    case TipoPao::Australiano:
        return "Australiano";
    case TipoPao::Ciabatta:
        return "Ciabatta";
    case TipoPao::Batata:
        return "Batata";
    case TipoPao::Com_Gergelim:
        return "Com Gergelim";
    default:
        return "Nenhuma opcao selecionada.";
    }
}

std::string tipoCarneToString(TipoCarne carne)
{
    switch (carne)
    {
    case TipoCarne::Peito_Bovino:
        return "Peito Bovino";
    case TipoCarne::Acem_Bovino:
        return "Acem Bovino";
    case TipoCarne::Fraldinha_Bovino:
        return "Fraldinha Bovino";
    case TipoCarne::Costela_Bovino:
        return "Costela Bovino";
    case TipoCarne::Patinho_Bovino:
        return "Patinho Bovino";
    case TipoCarne::CoxaoDuro_Bovino:
        return "Coxão Duro Bovino";
    default:
        return "Nenhuma opcao selecionada.";
    }
}

std::string tipoQueijoToString(TipoQueijo queijo)
{
    switch (queijo)
    {
    case TipoQueijo::Cheddar:
        return "Cheddar";
    case TipoQueijo::Queijo_Americano:
        return "Queijo Americano";
    case TipoQueijo::Mussarela:
        return "Mussarela";
    case TipoQueijo::Prato:
        return "Prato";
    case TipoQueijo::Suico:
        return "Suico";
    case TipoQueijo::Gouda:
        return "Gouda";
    case TipoQueijo::Gorgonzola:
        return "Gorgonzola";
    default:
        return "Nenhuma opcao selecionada.";
    }
}

std::string tipoMolhoToString(TipoMolho molho)
{
    switch (molho)
    {
    case TipoMolho::Ketchup:
        return "Ketchup";
    case TipoMolho::Mostarda:
        return "Mostarda";
    case TipoMolho::Maionese_Tradicional:
        return "Maionese Tradicional";
    case TipoMolho::Maionese_Verde:
        return "Maionese Verde";
    case TipoMolho::Alho:
        return "Alho";
    case TipoMolho::Barbecue:
        return "Barbecue";
    case TipoMolho::Pimenta:
        return "Pimenta";
    default:
        return "Nenhuma opcao selecionada.";
    }
}

std::string tipoAlfaceToString(TipoAlface alface)
{
    switch (alface)
    {
    case TipoAlface::Americana:
        return "Americana";
    case TipoAlface::Romana:
        return "Romana";
    case TipoAlface::Manteiga:
        return "Manteiga";
    case TipoAlface::Crespa:
        return "Crespa";
    case TipoAlface::Roxa:
        return "Roxa";
    default:
        return "Nenhuma opcao selecionada.";
    }
}

std::string tipoCebolaToString(TipoCebola cebola)
{
    switch (cebola)
    {
    case TipoCebola::Amarela:
        return "Amarela";
    case TipoCebola::Roxa:
        return "Roxa";
    case TipoCebola::Branca:
        return "Branca";
    case TipoCebola::Doce:
        return "Doce";
    default:
        return "Nenhuma opcao selecionada.";
    }
}