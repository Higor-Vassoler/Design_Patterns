# O que é o padrão "Builder"?
- Ele é um padrão de projeto que atua na parte criacional, ou seja, nas classes ou afins.
- É usado quando uma classe possui muitos atributos, onde é criada uma outra classe que servirá para a construção do objeto da classe principal.

# Detalhes do Programa.
- O presente programa representa um serviço de criação de hambúrgueres, o qual possui uma classe Hamburguer com alguns atributos, porém, é perceptível que ao tentarmos instânciar um objeto dessa classe fica extremamente verboso e um pouco confuso, para resolver esse problema nós podemos criar no mesmo arquivo que está a classe Hamburguer uma classe HamburguerBuilder, o qual possui um atributo privado que é um objeto da classe Hamburguer e vários métodos públicos para a inicialização dos atributos do hamburguer.
- Incluí também um sistema simples de banco de dados usando Vector, o qual possui as funções de Inserir, Remover e Listar.

# Como rodar o programa?

## 1º Você precisa compilar o programa, basta copiar e colar o comando abaixo no terminal.

g++ -std=c++17 -Wall -Wextra main.cpp Hamburguer.cpp BD.cpp enum_conversor.cpp -o hamburguer_program.exe

## 2º Após compilar, insira o código abaixo para rodar o programa.
.\hamburguer_program.exe
