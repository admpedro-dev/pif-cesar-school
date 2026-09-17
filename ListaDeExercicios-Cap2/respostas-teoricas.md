# Lista de Exercícios - Capítulo 2

## Questões objetivas/teóricas

1.Resposta:

a) Saída: 2

b) Explicação: Ocorre truncamento. Quando você atribui um valor float a uma variável inteira, a linguagem simplesmente descarta a parte decimal, mantendo apenas a parte inteira. Não arredonda, apenas remove tudo após o ponto decimal. Esse processo se chama Type Coercion

c) Como evitar:

Usar arredondamento com round() (da biblioteca <math.h>): valor_inteiro = (int)round(2.97); // Resultado: 3
Usar casting explícito e aritmética ou manter a variável como float ou double

2.Resposta:

a) Por que evitar <conio.h>: <conio.h> é específico do Windows e não é padronizada pela ANSI C. Não funciona em Linux, macOS ou outros. É uma relíquia dos tempos do DOS/Windows 3.1 e compromete a compatibilidade do código.

b) Funções equivalentes e portáveis de <stdio.h>:

getchar() - lê um caractere do stdin
putchar() - escreve um caractere na stdout
scanf() - lê dados formatados
printf() - escreve dados formatados

Todas estão em <stdio.h> e funcionam em qualquer plataforma compatível com C ANSI.

c) Código para ler caractere ignorando quebras de linha:

#include <stdio.h>

int main() { char caractere;

// Limpa o buffer de entrada
while (getchar() != '\n');

// Lê o caractere desejado
printf("Digite um caractere: ");
caractere = getchar();

// Limpa novamente o buffer
while (getchar() != '\n');

printf("Você digitou: %c\n", caractere);

return 0;

}

A função getchar() lê um caractere do buffer. O loop while descarta todos os caracteres até encontrar uma quebra de linha.

3.Resposta:

#include <stdio.h>

int main() { int numero;

printf("Digite um número inteiro: ");
scanf("%d", &numero);

printf("\nRepresentações do número %d:\n", numero);
printf("Decimal: %d\n", numero);
printf("Hexadecimal (caixa baixa): %x\n", numero);
printf("Octal: %o\n", numero);
printf("Caractere ASCII: %c\n", numero);

return 0;

}

Os especificadores %d (decimal), %x (hexadecimal), %o (octal) e %c (caractere) permitem exibir o mesmo valor em diferentes representações.

4.Resposta:

Valores finais:

Inicialização: a = 1, b = 2, c = 3, d = 4

1: a += b + c; a = a + (b + c) = 1 + (2 + 3) = 6

2: b *= c = d + 2; c = d + 2 = 6 b = b * c = 2 * 6 = 12

3: d %= a + a + a; d = d % (a + a + a) = 4 % 18 = 4

4: d -= c -= b -= a; Associatividade direita-esquerda: b -= a → b = 12 - 6 = 6 c -= b → c = 6 - 6 = 0 d -= c → d = 4 - 0 = 4

5: a += b += c += 7; Associatividade direita-esquerda: c += 7 → c = 0 + 7 = 7 b += c → b = 6 + 7 = 13 a += b → a = 6 + 13 = 19

Resultado final: a = 19, b = 13, c = 7, d = 4

5.Resposta:

Inicialização: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y = 4.4;

a) i < j + 3 = 1 < 5 = 1 (verdadeiro)

b) 2 * i - 7 <= j - 8 = 2 - 7 <= -6 = -5 <= -6 = 0 (falso)

c) -x + y >= 2.0 * y = -3.3 + 4.4 >= 8.8 = 1.1 >= 8.8 = 0 (falso)

d) x == y = 3.3 == 4.4 = 0 (falso)

e) !(n - j) = !(2 - 2) = !(0) = 1 (verdadeiro)

f) !n - j = (!n) - j = 0 - 2 = -2

g) i && j && k = 1 && 2 && 3 = 1 && 1 = 1 (verdadeiro)

h) i || j - 3 && k = 1 || (-1) && 3 = 1 || 1 = 1 (verdadeiro)

i) i < j && 2 >= k = 1 < 2 && 2 >= 3 = 1 && 0 = 0 (falso)

j) i == 2 || j == 4 || k == 5 = 0 || 0 || 0 = 0 (falso)

6.Resposta:

a) Diferença entre ++n e n++ (pós-fixado):

Pré-incremento: int n = 5; int x = ++n;

++n incrementa n, depois retorna o novo valor. n vira 6, depois x recebe 6. Saída: n = 6, x = 6

Pós-incremento: int m = 5; int y = m++;

m++ retorna o valor atual, depois incrementa m. y recebe 5 (valor antigo), depois m vira 6. Saída: m = 6, y = 5

++x (pre-fixado): incrementa e retorna o novo valor
x++ (pós-fixado): retorna o valor antigo e depois incrementa

b) Por que printf("%d\t%d\t%d\n", n, n+1, n++); gera resultados inconsistentes:

Esse código causa comportamento indefinido. O parâmetro n++ modifica n, e os outros n e n+1 dependem do valor de n. A norma ANSI nao especifica a ordem de avaliação dos parâmetros, então diferentes compiladores podem avaliar em ordens diferentes:

Compilador A: esquerda→direita = 5, 6, 5
Compilador B: direita→esquerda = 6, 7, 5