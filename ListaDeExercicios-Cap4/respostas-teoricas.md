# Lista de Exercícios - Capítulo 4

## Questões objetivas/teóricas
1.Resposta:

a) Com if (x = 0) o programa não compara, ele atribui o valor 0 para a variável x.
   O valor da expressão é o próprio valor atribuído, ou seja, 0, que é falso.
   Então o x sempre vira 0 e o bloco do if nunca é executado (se tiver else, o
   else é que executa). Com if (x == 0) o programa só compara e não altera o x.

b) Em C não existe tipo lógico no padrão ANSI, então qualquer valor numérico
   pode ser usado como condição. Valor igual a 0 (inteiro ou real) é falso.
   Qualquer valor diferente de 0, positivo ou negativo, é verdadeiro.

c) O bloco é executado. A instrução atribui -5 para x e o valor da expressão é
   -5, que é diferente de 0 e por isso é considerado verdadeiro no padrão ANSI C.

2.Resposta:

a) Será impressa a mensagem Opção B

   Explicacao: x > 10 é verdadeiro (15 > 10), então entra no if de dentro.
   Nele y > 10 é falso (5 > 10), e o else pertence a esse if de dentro, não ao
   de fora. Por isso o else é executado, mesmo a indentação dando a entender
   que ele seria do if de fora.

b) O else sempre se associa ao if mais próximo que está antes dele e que ainda
   não tem else, independente da indentação.

c) Para o else ficar ligado ao if de fora (x > 10), é preciso colocar o if de
   dentro entre chaves. Assim o else fica depois da chave que fecha o bloco
   do if de fora e passa a ser executado só quando x <= 10. Com x = 15 e y = 5
   nenhuma mensagem seria impressa.

3.Resposta:

a) A segunda linha usa o operador ternário. Primeiro ele testa a condição
   media >= 7.0. Se for verdadeira, o valor da expressão é 'A', se for falsa
   é 'R'. Esse valor é guardado na variável situacao. Com media = 6.8 a
   condição é falsa, então situacao recebe 'R'.

b) Com if-else fica: se media >= 7.0, situacao recebe 'A', senão situacao
   recebe 'R'. A conta da média continua na linha de antes, igual.

c) Não. O ternário é uma expressão que devolve um valor, e cada lado dele
   aceita só uma expressão. Quando é preciso executar vários comandos, declarar
   variáveis ou fazer decisões mais longas, o if-else é necessário. Usar
   ternário aninhado também deixa o código difícil de ler.

4.Resposta:

a) Saída:
Prata
Ouro

Explicação: codigo vale 2, então o programa entra no case 2 e imprime Prata.
Como não tem break nesse case, ele continua e executa o case 3, imprimindo
Ouro. O break do case 3 é que para a execução.

b) O break serve para sair do switch assim que o case termina, evitando que
   os cases seguintes sejam executados. Quando ele é omitido acontece o efeito cascata.

c) Podem ser usados int, char e os tipos inteiros em geral. Não é permitido float nem double, porque o switch compara
   valores inteiros constantes nos case, e números reais não são exatos
   para esse tipo de comparação.

5.Resposta:

a) Saída:
a = 0, b = 5, c = 8

Explicação: a != 0 é falso, então por causa do curto-circuito o ++b não é
executado e o b continua 5. Como a condição é falsa, cai no else e c vira
10 - 2 = 8.

b) No operador &&, se o primeiro lado já for falso o resultado é falso e o
   segundo lado nem é avaliado. No operador ||, se o primeiro lado já for
   verdadeiro o resultado é verdadeiro e o segundo lado também nem é avaliado.

c) Com a == 0 || ++b > 5, o a == 0 é verdadeiro, então o ++b não é executado
   e o b continua 5. A condição é verdadeira, então c += 10 e o c vira 20.
   Valores finais: b = 5 e c = 20.

6.Resposta:

a) Saída para idade = 65:
Idoso
Adulto
Jovem

Explicação: os três ifs são independentes, então os três são testados. 65 é
maior ou igual a 60, 18 e 12, então as três mensagens são impressas. O else
pertence só ao último if.

b) Na sequência de ifs independentes, todas as condições são testadas e mais
   de um bloco pode ser executado. Na cadeia else-if, assim que uma condição
   verdadeira é encontrada o bloco dela é executado e as outras condições
   são ignoradas, então só um bloco executa.

c) A forma correta é uma cadeia só: if imprime Idoso, depois
   else if imprime Adulto, depois else if imprime
   Jovem, e por fim um else que imprime Criança. Cada condição é ligada à
   anterior com else, então só uma categoria é impressa.