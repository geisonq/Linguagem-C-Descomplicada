# Aula 02 - Variáveis

Na aula de hoje, iremos abordar como declarar uma variável em C. *Qual a função da variável*? A variável é aonde iremos guardar toda a informação que estivermos trabalhando. Para isso, é necessário definir duas coisas, o **tipo** e o **nome** dessa variável. São duas informações básicas sobre uma variável. A linguagem C tem 4 tipos básicos:

|  Tipo   |             Função              |
|---------|---------------------------------|
| char    | Caracteres                      |
| int     | Valores Inteiros                |
| float   | Valores Reais (ponto flutuante) |
| double  | Valores Reais com ALTA precisão |

Com o tipo definido, temos que escolher o nome da variável. Para isso, podemos utilizar letras(a, b, c ... A, B, C...), números e o underscore `_`.

**REGRAS:** Não se pode utilizar caracteres especiais(`á`, `é`, `ô`, `ç`...), nem pontuação(`!`, `?`, `*`, `-`, `$`, `%`), nem palavras reservadas à linguagem(`int`, `main`, `float`, `double`, `void`...).

Seguindo as regras, vamos verificar a validade de algumas variáveis abaixo:

| Variável | Validade |
|----------|----------|
| x        | Válido   |
| soma     | Válido   |
| _soma    | Válido   |
| soma1    | Válido   |
| 1soma    | **Inválido** |
| int      | **Inválido** |

Porque as últimas duas foram inválidas? Variáveis só podem começar com letras, ou underscore. E a última era uma palavra reservada ao sistema. Vale lembrar, que se ao invés de `int`, tivéssemos declarado `int1`, ela seria válida, pois o todo não é uma variável reservada ao sistema. Outra coisa importante da linguagem C, é que ela é *case-sensitive*, ou seja, diferencia maiúscula de minúscula. Então `SOMA`, `Soma`, `soma`, `SoMa` e `sOmA` são diferentes variáveis.

Vamos então declarar algumas variáveis. Vamos especificar que eu queira declarar um caractere `a` que se chamará letra. Caractere utiliza `char`, então ficaria:

```c
char letra = 'a';
```

Em outro caso, queremos declarar um caractere que está na posição 10 da tabela ASCII:

```c
char letra2 = 10;
```

Agora vamor declarar um número inteiro com a variável num1 valendo 15. E o número real num2 valendo 13.5.

```c
int num1 = 15;
float num2 = 13.5;
```

**DETALHE:** Em C utiliza-se o PONTO como separador decimal, e **NÃO** a vírgula.

Para fazer exponenciação, utilizamos a letra `e`. Por exemplo:

```c
double mol = 6e23;
```

Pode-se declarar várias variáveis, uma por linha, ou várias em uma linha, desde que sejam do mesmo tipo:

```c
int nro1 = 10;
int nro2;
int nro3;
```

OU:

```c
int nro1 = 10, nro2, nro3;
```

O símbolo utilizado para associar algum valor a variável, é o símbolo de `=`.













