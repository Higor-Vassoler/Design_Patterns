# O que é o padrão "Facade"?
- Ele é um padrão de projeto que atua na parte estrutural do código.
- Facade é um padrão de projeto criado para resolver o problema de muitas funções para fazer uma ação, por exemplo, o programa usado neste repositório para representar o padrão, é um sistema de cadastro de produtos que depende de muitas outras funções, como verificação de dados, banco de dados, etc. Para isso resolver esse problema, usamos o facade, que é basicamente a implementação de algo que una tudo que a ação precisa, ou seja, ao utilizar a função "criar()", está acontecendo muitas coisas por trás, por exemplo, verificação de conteúdo e adicionando no banco de dados.

# Detalhes do Programa.
- O presente programa representa um serviço de cadastro de produtos, o qual possui uma classe Produtos com alguns atributos, projeto também tem um sistema de validação de dados para cada atributo da classe Produtos.
- O sistema conta com um banco de dados feito com vector, que é capaz de realizar inserções, remoções e listagens.

# Como rodar o programa?

## 1º Você precisa compilar o programa, basta copiar e colar o comando abaixo no terminal.

g++ main.cpp BD.cpp Produto.cpp ProdutoFacade.cpp Util.cpp Validation.cpp -o programa

## 2º Após compilar, insira o código abaixo para rodar o programa.
.\programa.exe

