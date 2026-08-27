# Lista de Exercícios - Capítulo 1

## Questões objetivas/teóricas
7.Resposta:

a) Saída:
(pula linha)
(tabulação)Bom dia! Shirley.
   
b) Saída:
Você já tomou café? 
(pula linha)

c) Saída:
(pula linha)
(pula linha)
A solução não existe!
Não insista.

d) Saída:
Duas  linhas	de	saída
ou uma?

e) Saída:
um
dois
três

8.Resposta:

#include <stdio.h>
#include <stdlib.h>
int main()
{
 printf("\n\t\"Primeiro programa\"");
 system("PAUSE");
 return 0;
}
 
Saída:
(pula linha)
(tabulação"Primeiro programa"
 
Explicação: \n quebra a linha, \t insere uma tabulação horizontal, \" imprime aspas 
literais sem encerrar a string.

9.Resposta:
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
 printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
 printf("%c", "\"");
 system("PAUSE");
 return 0;
}
 
Saída:
(pula linha)
tabulação)"Primeiro programa
(erro ou caractere inexistente)
 
Explicação: %c espera um caractere (char). Na primeira linha, '\n' gera quebra de 
linha, '\t' gera tabulação, '\"' gera aspas. A segunda linha printf("%c", "\"") 
está INCORRETA: %c espera um char, mas "\"" é uma string (array de chars). Isso 
pode gerar um aviso do compilador ou comportamento indefinido.

10.Resposta:

Resposta correta: b) Verdadeiro
 
Justificativa: A linguagem C é CASE SENSITIVE (sensível a maiúsculas e minúsculas). 
Identificadores como 'peso', 'Peso' e 'PESO' representam 3 variaveis diferentes na memoria
na memória. O compilador C diferencia rigorosamente letras maiúsculas de minúsculas. 
Por exemplo:
  int peso;     // Uma variável
  int Peso;     // Outra variável
  int PESO;     // Mais uma variável diferente
 
Isso também se aplica a palavras-chave: 'main' é válido, 'Main' não é reconhecido.

11.Resposta:
 
Constante    | Classificação                      | Tipo Base em C
-----------  | ---------------------------------- | ---------------
\r           | Sequência de escape                | char
2130         | Constante inteira decimal          | int
-123         | Constante inteira decimal negativa | int
33.28        | Constante de ponto flutuante       | double
0XFA         | Constante inteira hexadecimal      | int
0101         | Constante inteira octal            | int
2.0e30       | Constante de ponto flutuante notação científica | double
\xDC         | Sequência de escape hexadecimal    | char
'\"'         | Constante de caractere             | char
'\\'         | Constante de caractere             | char
'F'          | Constante de caractere             | char
0            | Constante inteira decimal          | int
'\0'         | Constante de caractere (nulo)      | char
"F"          | Constante string                   | char* (array de chars)
-4567.89     | Constante de ponto flutuante negativa | double

12.Resposta:
 
a) int a;
   CORRETO
   Justificativa: Declaração válida de variável inteira.
 
b) float b;
   CORRETO
   Justificativa: Declaração válida de ponto flutuante simples.
 
c) double float c;
   INCORRETO
   Justificativa: Não é permitido combinar dois especificadores de tipo base 
   (double e float). Deve-se usar apenas um: 'double c;' ou 'float c;'.
 
d) unsigned char d;
   CORRETO
   Justificativa: 'unsigned' é um modificador válido para char, criando um char 
   sem sinal (0-255).
 
e) unsigned e;
   CORRETO
   Justificativa: Quando não especificado o tipo base após 'unsigned', o compilador 
   assume implicitamente 'int'. É equivalente a 'unsigned int e;'.
 
f) long float f;
   INCORRETO
   Justificativa: Não existe combinação 'long float' em C ANSI. Para ponto flutuante 
   estendido usa-se 'long double'. 'long' é para inteiros.
 
g) long g;
   CORRETO
   Justificativa: 'long g;' é válido. Equivalente a 'long int g;'.
 
h) long double h;
   CORRETO
   Justificativa: Combinação válida para ponto flutuante de precisão estendida.
 
13.Resposta:
 
Resposta correta: c)
 
Justificativa: Arquivos de cabeçalho (.h) são arquivos de texto ASCII contendo:
- Protótipos de funções
- Definições de constantes
- Macros (#define)
- Declarações de tipos
- Estruturas (struct)

não são binários pré-compilados - são arquivos texto que o pré-processador inclui 
no código-fonte antes da compilação.
 
14.Resposta:
 
Resposta correta: a)
 
Justificativa: Quando você escreve #include <stdio.h>, está instruindo o pré-processador 
a incluir o conteúdo do arquivo stdio.h no seu código-fonte antes da compilação 
propriamente dita.
 
O objetivo é informar ao compilador sobre as funções que você vai usar (printf, scanf, etc.)
fornecendo seus protótipos. Isso permite que o compilador:
1. Verifique se você está usando a função corretamente
2. Verifique tipos de parâmetros
3. Vincule a função corretamente durante a linkedição
 
15.Resposta:
 
Resposta correta: c)
 
Justificativa: #include é uma diretiva de pré processador. O caractere # no início 
identifica isso. É processadaa antes da compilação propriamente dita.
 
Fases: Pré-processamento → Compilação → Linkedição → Execução
 
As diretivas de pré-processador modificam o programa-fonte antes dele ser compilado.
 
16.Resposta:
 
Resposta correta: c)
 
Justificativa: As diretivas (#include, #define, #ifdef, etc.) são interpretadas 
pelo pré processador, que é a primeira fase do compilador.
 
Sequência:
1. Pré-processador lê as diretivas (#include, #define, etc.)
2. Modifica o código-fonte
3. Passa para o compilador propriamente dito
4. Compilador gera código objeto
5. Linkeditor monta o executável final
 
17.Resposta:
 
CORRETAS:
a) printf ( "Primeiro programa" );
b) printf( "Primeiro programa" );
c) printf("Primeiro programa");
 
INCORRETA:
d) printf "Primeiro programa" ;
 
Justificativa: printf é uma função, não é uma palavra-chave. Em C, funções DEVEM 
ser chamadas com parênteses: nome_funcao(argumentos).
 
As três primeiras estão corretas porque o compilador C é bastante flexível com 
espaços em branco dentro da chamada. Espaços entre o nome da função, 
parênteses e argumentos são ignorados.
 
A quarta está errada porque faltam os parênteses, que são sintaxe obrigatória para 
chamadas de função.

   
