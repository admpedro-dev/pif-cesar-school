# Lista de Exercícios - Capítulo 2

## Questões objetivas/teóricas

1.Resposta:

Letra C está correta.
a) Incorreta, pois "Numero" e "numero" são variáveis completamente diferentes na memória.
b) Incorreta, pois a sintaxe correta diz que Main é escrito com o 'm' minusculo.
c) Correta, pois todos os pares representam variáveis diferentes.
d) Incorreta, pois independente do sistema operacional, a linguagem C segue o mesmo padrão de sintaxe.

2.Resposta:

1 -> Erro na chamada da biblioteca. O ';' não deveria existir após o include stdlib.h.
2 -> Erro no método main. Ele está escrito errado, o certo seria com o 'm' minusculo.
3 -> Erro dentro do printf, está faltando as aspas duplas para abrir e finalizar o texto.

3.Resposta:
a = 2, b = 4, c = 5, d = 10

a += b + c
a += 9
a = 11

b *= c = d-2
b *= c = 8
b *= 8
b = 32
c = 8

d %= a + 3
d %= 11 + 3
10 %= 14
d = 10

a += b += c+= 5
11 += 45

a = 56
b = 45
c = 13

4.Resposta:
i = 2, j = 3, k = 0
x = 2.5, y = 5.0

a) 2 < 5 = 1

b) 2 * 2 - 5 <= 3 - 4 =
-1 <= -1 = 1

c) 1 && (2.5 + 5.0 >= 7.5)
1 && 1 = 1

d) !(2 == 3) || (5 / 2.5 == 2.0)
1 || 1 = 1

e) 2 == 2 && 3 == 4 || 0 == 0
1 && 0 || 1
0 || 1 = 1

5.Resposta:

a) O while vai repetir o bloco de código até a condição se tornar falsa, ou seja, se a condição começar como falsa, o loop não vai nem executar. Já o do-while, ele vai executar pelo menos uma vez o código, e vai continuar até a condição ser falsa, se a condição começar falsa, ele vai executar a bloco de código pelo menos uma vez.

b) Quando nós sabemos exatamente quantas vezes o código vai se repetir.

c) Um erro de lógica, pois o ';' é interpretado como um corpo vázio, logo o loop vai continuar repetindo (caso a condição for verdadeira)pois a condição nao vai ser alterada. Gerando assim um loop infinito, e consequentemente fazendo o programa travar.

6.Resposta:

a) Apresentará um erro pois a variável soma foi declarada dentro do escopo do for, sendo assim, quando o código chegar no printf a variável nao vai existir mais.

b) i = 1,2,3,4 -> Vão passar normalmente. Quando i = 5, o comando continue vai fazer com que o código pule aquela iteração e 5 não entrará na soma. i = 6,7 -> Vão passar normalmente. Quando i = 8 , o comando break vai fazer com que o código encerre o laço por completo. O 8 não entrará na soma, e 9 e 10 não serão nem executados.

c) Ficaria:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}

Saída:
Soma final = 115



