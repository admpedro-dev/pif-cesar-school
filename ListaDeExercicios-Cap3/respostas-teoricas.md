# Lista de Exercícios - Capítulo 3

## Questões objetivas/teóricas
1.Resposta:

a) No while, a condição é avaliada antes de cada execução do bloco. Se ela for
   falsa logo na primeira vez, o bloco não executa nenhuma vez.
   No do-while, a condição é avaliada depois da execução do bloco. Por isso o
   bloco executa no mínimo uma vez, mesmo que a condição seja falsa desde o início.

b) for: quando já se sabe quantas vezes vai repetir ou existe um contador
   (de 1 a N, tabelas, laços aninhados). Deixa inicialização, teste e
   incremento na mesma linha, o que facilita a leitura.
   while: quando não se sabe quantas vezes vai repetir e a condição pode ser
   falsa desde o início (ler até acabar os dados, inverter os dígitos de um número).
   do-while: quando o bloco precisa executar pelo menos uma vez, como em menus
   e validação de entrada de dados.

c) É um erro de lógica, não de compilação.

   o código compila normalmente, porque o ponto-e-vírgula vira uma
   instrução vazia e ela passa a ser o corpo do laço. Se a condição for
   verdadeira e nada mudar o valor dela, o programa fica testando a mesma
   condição para sempre, sem fazer nada. Isso é um laço infinito e o programa
   trava. Se tiver um bloco com chaves logo abaixo, ele não faz parte do laço.

2.Resposta:

a) A variável soma foi declarada dentro do bloco do for, então ela só existe
   até a chave que fecha o bloco. No printf final, fora do laço, o compilador
   não reconhece mais a variável soma e dá erro de variável não declarada.

b) Porque a variável é criada de novo a cada iteração e recebe 0 de novo
   (int soma = 0;). Então o soma += i * i sempre resulta só em i * i, e não
   na soma acumulada. Seriam impressos 1, 4, 9 e assim por diante, em vez
   das somas parciais.

c) Para corrigir, basta declarar e inicializar a variável soma antes do laço
   for, no mesmo nível das outras variáveis da main. Assim ela não é recriada
   a cada iteração e o printf final consegue enxergar ela. O resultado
   correto fica:

Saída:
Soma final = 285

Escopo de bloco: variável declarada dentro de chaves só existe e só pode
ser usada dentro daquele bloco.
Visibilidade: é a parte do código onde o nome da variável pode ser usado.
fora do bloco, o nome não é reconhecido.
Tempo de vida: a variável local é criada quando o programa entra no bloco
e destruída quando sai. A cada nova entrada ela é criada e inicializada
de novo. Para manter o valor entre as iterações, ela precisa ser declarada
fora do laço.

3.Resposta:

a) Saída do Trecho A:
36	18	9	4	2	1

a vale 36, 18, 9, 4, 2 e 1. Depois vale 0, e como 0 > 0 é falso,
o laço termina.

b) O Trecho B lê um caractere do teclado a cada repetição, guarda em ch e só
   para quando o caractere digitado for 'X'. A operação ch + 1 soma 1 ao código
   ASCII do caractere, então o printf mostra o caractere seguinte na tabela
   (se digitar 'a' mostra 'b'). O 'X' não é impresso, porque o laço termina
   antes.

   Os parênteses em (ch = getch()) são necessários por causa da precedência:
   o operador != tem precedência maior que o =. Sem os parênteses, primeiro
   seria feita a comparação getch() != 'X' e o ch receberia só 0 ou 1, em vez
   do caractere lido.

c) O for (;;) não tem condição de teste, então ela é sempre verdadeira. Para
   parar o laço pelo próprio programa dá para usar break, return (encerra a
   função) ou exit (encerra o programa inteiro), geralmente dentro de um if
   que verifica a condição de saída.

4.Resposta:

a) O break encerra o laço na hora, sem testar a condição de novo e sem
   executar o resto do bloco. O programa continua na primeira instrução
   depois do laço.

b) O continue pula o resto do corpo e vai direto para a próxima iteração.
   No for, a expressão executada logo depois dele é a de incremento (a
   terceira do cabeçalho). Só depois disso a condição é testada.

c) Só o laço interno é interrompido, que é o mais próximo do break. O laço
   externo continua normalmente.

5.Resposta:

a) O laço executa 5 iterações.

   Justificativa: o teste i < j é verdadeiro para (0,10), (1,9), (2,8), (3,7)
   e (4,6). Depois disso i = 5 e j = 5, e 5 < 5 é falso, então o laço para.

b) Saída:
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) Com o while, as variáveis i = 0 e j = 10 são declaradas antes do laço e a
   condição fica i < j. Dentro do bloco fica o mesmo printf e, no final, o
   i++ e o j-- (um comando para cada, em vez do operador vírgula). O resultado
   é a mesma saída do item b.

6.Resposta:

a) Valor impresso:
Valor final de x = 6

b) No x++ (pós-fixado), a comparação usa o valor atual de x e só depois o
   x é incrementado:

Teste | x na comparação | Resultado  | x depois
1º    | 0 < 5           | verdadeiro | 1
2º    | 1 < 5           | verdadeiro | 2
3º    | 2 < 5           | verdadeiro | 3
4º    | 3 < 5           | verdadeiro | 4
5º    | 4 < 5           | verdadeiro | 5
6º    | 5 < 5           | falso      | 6

   No último teste a comparação dá falso e o laço termina, mas o x já foi
   incrementado. Por isso termina com 6 e não com 5.

c) Dá para escrever com um while normal, com a condição x < 5 e o x++ dentro
   do bloco. Só que assim o x termina em 5, porque falta o incremento do
   último teste. Para dar 6, é preciso colocar mais um x++ depois do laço.
   Outra opção é usar a condição x <= 5 com o x++ dentro do bloco, que também
   termina com 6.

Saída:
Valor final de x = 6