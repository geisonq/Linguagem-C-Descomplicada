# Linguagem C

C é uma linguagem de programação de finalidade geral. Ela é estreitamente assiciada ao sistema operacional UNIX já que foi desenvolvida neste sistema, e que UNIX está escrito em C. A linguagem, entretanto, não é atada a um sistema operacional ou a máquinas particulares, e, embora sempre carregar o apelido de "linguagem de programação de software básico" devido à sua utilidade no desenvolvimento de sistemas operacionais, ela tem sido usada, igualmente, para escrever grandes programas numéricos, de processamento de texto, e banco de dados.

C é uma linguagem de relativo "baixo nível". Esta caracterização não a desmerece; isto simplesmente significa que C manipula o mesmo tipo de objetos que a maioria dos computadores, tais como caracteres, números, e endereços. Estes podem ser combinados e manipulados com os operadores aritméticos e lógicos usuais implementados pelas máquinas atuais.

C provê apontadores e a habilidade de fazer aritmética com endereços. Os argumentos para funções são passados copiando-se o valor do argumento, e é impossível para a função chamada mudar o valor atual do argumento na função que a chamou. Quando é necessário realizar uma "chamada por referência", um apontador pode ser passado explicitamente, e a função pode mudar o objeto para o qual aponta o apontador. Nomes de arranjos são passados como a localização da origem do arranjo, de forma que argumentos do tipo arranjo são efetivamente chamados por referência.

Qualquer função pode ser chamada recursivamente, e sua variáveis locais são normalmente "automáticas", ou seja, criadas novamente a cada ativação. Definições de funções não podem ser aninhadas, mas as variáveis podem ser declaradas seguindo uma estrutura de bloco. As funções de um programa C podem ser compiladas separadamente. Variáveis podem ser internas a uma função, externas mas conhecidas apenas em um arquivos fonte, ou completamente globais. Variáveis internas podem ser automáticas ou estáticas. Variáveis automáticas podem ser colocadas em registradores para aumentar a eficiência, mas a declaração de registrador é apenas uma dica para o compilador, e não se refere a registradores específicos das máquinas.

## Introdução

**Olá alunos**

Sejam bem-vindos a mais esta ferramenta para auxílio do ensino de programação. Este é um momento singular, no qual a faculdade começa a se incluir no “mundo virtual“, e se adapta a integração de sistemas virtuais com aulas presenciais.

O objetivo destas aulas, são fixar o conteúdo já visto em aula, funcionando como uma revisão de conteúdo, e portal de comunicação de dúvidas e sugestões entre o professor e os alunos.

O sistema está começando, e como todo começo, passamos por uma etapa de adaptação, portanto sugestões são bem-vindas. Tem alguma? Mande-nos um email! Mais informações sobre como entrar em contato na barra superior em “Contato”.
Na nossa primeira aula, iremos abordar o esqueleto de um programa em linguagem C.

### Vídeos
[Instalando o codebloks no windows](https://www.youtube.com/watch?v=LfIS1YQcZTA)

[Instalando o codebloks no Ubuntu 15.10](https://www.youtube.com/watch?v=bfXN55utHPQ)

## Lendo e escrevendo nas variáveis

### Vídeos
* [Aula 01 - Introdução a linguagem C](https://www.youtube.com/watch?v=GiCt0Cwcp-U&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=1)
* [Aula 02 - Declaração de Variáveis em C](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
  * [Resumo](./Resumos/01-lendoEscrendoNasVariaveis.md)
* [Aula 03 - Printf](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
  * [Resumo](./Resumo/02-ComandoPrintf.md)
* [Aula 04 - Scanf](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)

### Slides
https://programacaodescomplicada.files.wordpress.com/2012/05/aula2-variaveis-slides.pdf

## As operações que podemos fazer com as variáveis
### Vídeos
* [Aula 05 - Operador de atribuição](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
* [Aula 06 - Constantes](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
* [Aula 07 - Operadores Aritméticos](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
* [Aula 08 - Comentários](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
* [Aula 09 - Pré e Pós Incremento](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
* [Aula 10 - Atribuição Simplificada](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
* [Aula 11 - Operadores Relacionais](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)
* [Aula 12 - Operadores Lógicos](https://www.youtube.com/watch?v=q51cHsgRHU4&list=PL8iN9FQ7_jt7pMKtbgoc0uUQjoJK-3dYu&index=2)

### Lista de exercícios
[Lista 1](./Exercicios/01-lendoEscrendoNasVariaveis.md)

## Comandos de controle condicional
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Comandos de repetição
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Vetores e matrizes: arrays
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Arrays de caracteres: strings
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Tipos definidos pelo programador
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Funções
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Ponteiros
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Alocação dinâmica
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Arquivos
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## Avançado
### Vídeos
### Lista de exercícios
### Resolução dos exercícios

## O padrão C99
### Vídeos
### Lista de exercícios
### Resolução dos exercícios
