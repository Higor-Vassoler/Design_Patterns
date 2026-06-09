#ifndef HAMBURGUER_HPP
#define HAMBURGUER_HPP

enum class TipoPao
{
    Brioche,
    Australiano,
    Ciabatta,
    Batata,
    Com_Gergelim
};

enum class TipoCarne
{
    Peito_Bovino,
    Acem_Bovino,
    Fraldinha_Bovino,
    Costela_Bovino,
    Patinho_Bovino,
    CoxaoDuro_Bovino
};

enum class TipoQueijo
{
    Cheddar,
    Queijo_Americano,
    Mussarela,
    Prato,
    Suico,
    Gouda,
    Gorgonzola
};

enum class TipoMolho
{
    Ketchup,
    Mostarda,
    Maionese_Tradicional,
    Maionese_Verde,
    Alho,
    Barbecue,
    Pimenta
};

enum class TipoAlface
{
    Americana,
    Romana,
    Manteiga,
    Crespa,
    Roxa
};

enum class TipoCebola
{
    Amarela,
    Roxa,
    Branca,
    Doce
};

extern int ids;

class Hamburguer
{
private:
    int id;
    TipoPao tipoPao;
    TipoCarne tipoCarne;
    int qntdCarne;
    TipoQueijo tipoQueijo;
    int qntdQueijo;
    TipoMolho tipoMolho;
    TipoCebola tipoCebola;
    TipoAlface tipoAlface;

public:
    void setId()
    {
        this->id = ids;
        ids++;
    };

    int getId() const
    {
        return id;
    };

    void setTipoPao(TipoPao valor)
    {
        this->tipoPao = valor;
    }

    TipoPao getTipoPao() const
    {
        return tipoPao;
    }

    void setTipoCarne(TipoCarne valor)
    {
        this->tipoCarne = valor;
    }

    TipoCarne getTipoCarne() const
    {
        return tipoCarne;
    }

    void setQntdCarne(int valor)
    {
        this->qntdCarne = valor;
    }

    int getQntdCarne() const
    {
        return qntdCarne;
    }

    void setTipoQueijo(TipoQueijo valor)
    {
        this->tipoQueijo = valor;
    }

    TipoQueijo getTipoQueijo() const
    {
        return tipoQueijo;
    }

    void setQntdQueijo(int valor)
    {
        this->qntdQueijo = valor;
    }

    int getQntdQueijo() const
    {
        return qntdQueijo;
    }

    void setTipoMolho(TipoMolho valor)
    {
        this->tipoMolho = valor;
    }

    TipoMolho getTipoMolho() const
    {
        return tipoMolho;
    }

    void setTipoCebola(TipoCebola valor)
    {
        this->tipoCebola = valor;
    }

    TipoCebola getTipoCebola() const
    {
        return tipoCebola;
    }

    void setTipoAlface(TipoAlface valor)
    {
        this->tipoAlface = valor;
    }

    TipoAlface getTipoAlface() const
    {
        return tipoAlface;
    }
};

class HamburguerBuilder
{
private:
    Hamburguer h;

public:
    void setPao(TipoPao valor)
    {
        h.setTipoPao(valor);
    }

    void setCarne(TipoCarne valor, int qntd)
    {
        h.setTipoCarne(valor);
        h.setQntdCarne(qntd);
    }

    void setQueijo(TipoQueijo valor, int qntd)
    {
        h.setTipoQueijo(valor);
        h.setQntdQueijo(qntd);
    }

    void setMolho(TipoMolho valor)
    {
        h.setTipoMolho(valor);
    }

    void setCebola(TipoCebola valor)
    {
        h.setTipoCebola(valor);
    }

    void setAlface(TipoAlface valor)
    {
        h.setTipoAlface(valor);
    }

    Hamburguer build();
};

#endif