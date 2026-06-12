# Sobre o uso da IA no presente programa:
- O uso de IA's neste programa se deu por providênciar a ideia do projeto (Semáforos), revisar o código, tirar dúvidas específicas da linguagem e implementação e também alguns pequenos trechos do código.
- Importante ressaltar que o código **NÃO FOI FEITO INTEIRAMENTE PELA IA**.

# O que é o padrão "Mediator"?
- Ele é um padrão de projeto que atua na parte comportamental, ou seja, como as classes se comunicam sem se ver.
- É usado quando você precisa que um objeto interaja com outro objeto sendo que nenhum deles se veem, por isso existe um "mediator", que é uma classe que gerência a comunicação dessas outras classes.

# Detalhes do Programa.
- O programa criado para representar o design pattern "Mediator" é um simulador de semáforos.
- Imagine um cruzamento em X com dois semáforos para coordenar a passagem dos carros, onde se o semáforo X estiver aberto (verde), o outro deve estar fechado (vermelho).
- A classe mediator tem um papél muito importante aqui, o qual deve mediar corretamente as cores dos semáfores, funcionando da seguinte forma, quando um semáforo pede passagem (ficar verde), o outro semáforo deve se fechar.

# Como rodar o programa?

## 1º Vá até a raiz da pasta "Semáforo" no seu terminal.

- cd Design_Patterns\3_behavioral\Semáforo

## 2º Você precisa compilar o programa, basta copiar e colar o comando abaixo no terminal.

- g++ main.cpp mediator.cpp semaforo.cpp -o semaforos

## 3º Após compilar, insira o código abaixo para rodar o programa.
./semaforos.exe
