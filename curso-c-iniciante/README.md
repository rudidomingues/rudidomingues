# Primeiros passos com a linguagem C

Esta pasta contém uma trilha introdutória para estudantes que estão começando a programar em C. Os exemplos foram organizados em uma ordem progressiva: cada arquivo apresenta poucos conceitos novos e prepara o estudante para a próxima etapa.

## Objetivos de aprendizagem

Ao concluir a trilha, o estudante deverá ser capaz de:

- reconhecer a estrutura básica de um programa em C;
- declarar variáveis dos tipos `int`, `float` e `char`;
- exibir mensagens com `printf` e ler dados com `scanf`;
- utilizar operadores aritméticos, relacionais e lógicos;
- tomar decisões com `if`, `else if`, `else` e `switch`;
- compilar e executar um programa simples pelo terminal.

## Preparação do ambiente

Instale um compilador C, como o GCC. Em distribuições Linux baseadas em Debian ou Ubuntu, ele pode ser instalado com:

```bash
sudo apt install build-essential
```

Para confirmar que o compilador está disponível, execute:

```bash
gcc --version
```

## Comandos básicos no terminal

| Comando | Finalidade |
| --- | --- |
| `pwd` | Mostra em qual pasta você está. |
| `ls` | Lista os arquivos da pasta atual. |
| `cd nome-da-pasta` | Entra em uma pasta. |
| `cd ..` | Volta para a pasta anterior. |
| `mkdir nova-pasta` | Cria uma pasta. |
| `clear` | Limpa a tela do terminal. |
| `gcc arquivo.c -o programa` | Compila um código-fonte C. |
| `./programa` | Executa o programa compilado no Linux ou macOS. |

No Windows, usando PowerShell ou Prompt de Comando, o executável normalmente será iniciado com `programa.exe`.

## Como compilar um exemplo

Acesse esta pasta pelo terminal e compile o primeiro exemplo:

```bash
cd curso-c-iniciante
gcc -std=c11 -Wall -Wextra -pedantic exemplos/01_ola_mundo.c -o ola_mundo
./ola_mundo
```

As opções adicionadas ao `gcc` ajudam a encontrar possíveis problemas:

- `-std=c11`: utiliza o padrão C11 da linguagem;
- `-Wall -Wextra`: habilitam avisos úteis do compilador;
- `-pedantic`: alerta sobre construções fora do padrão escolhido.

Também é possível compilar todos os exemplos de uma só vez:

```bash
make exemplos
```

Os executáveis serão criados dentro da pasta `bin/`. Para remover os arquivos gerados, use:

```bash
make limpar
```

## Sequência de estudos

| Ordem | Arquivo | Conteúdo principal |
| --- | --- | --- |
| 1 | [`exemplos/01_ola_mundo.c`](exemplos/01_ola_mundo.c) | Estrutura mínima, comentários e `printf`. |
| 2 | [`exemplos/02_variaveis.c`](exemplos/02_variaveis.c) | Variáveis, tipos básicos e especificadores de formato. |
| 3 | [`exemplos/03_entrada_saida.c`](exemplos/03_entrada_saida.c) | Entrada de dados com `scanf`. |
| 4 | [`exemplos/04_operadores_aritmeticos.c`](exemplos/04_operadores_aritmeticos.c) | Cálculos com `+`, `-`, `*`, `/` e `%`. |
| 5 | [`exemplos/05_operadores_relacionais.c`](exemplos/05_operadores_relacionais.c) | Comparações com `==`, `!=`, `>`, `<`, `>=` e `<=`. |
| 6 | [`exemplos/06_operadores_logicos.c`](exemplos/06_operadores_logicos.c) | Condições compostas com `&&`, `||` e `!`. |
| 7 | [`exemplos/07_condicionais.c`](exemplos/07_condicionais.c) | Decisões com `if`, `else if` e `else`. |
| 8 | [`exemplos/08_switch.c`](exemplos/08_switch.c) | Menu simples com `switch`. |

## Resumo dos operadores

### Operadores aritméticos

| Operador | Operação | Exemplo |
| --- | --- | --- |
| `+` | Adição | `total = 8 + 2;` |
| `-` | Subtração | `saldo = 10 - 3;` |
| `*` | Multiplicação | `dobro = 2 * 5;` |
| `/` | Divisão | `media = soma / 2.0f;` |
| `%` | Resto da divisão inteira | `resto = 7 % 2;` |

### Operadores relacionais

Uma comparação em C resulta em `1` quando é verdadeira e `0` quando é falsa.

| Operador | Significado | Exemplo |
| --- | --- | --- |
| `==` | Igual a | `idade == 18` |
| `!=` | Diferente de | `opcao != 0` |
| `>` | Maior que | `nota > 7` |
| `<` | Menor que | `temperatura < 20` |
| `>=` | Maior ou igual a | `idade >= 18` |
| `<=` | Menor ou igual a | `quantidade <= 10` |

> Atenção: `=` atribui um valor a uma variável, enquanto `==` compara dois valores.

### Operadores lógicos

| Operador | Nome | Quando o resultado é verdadeiro |
| --- | --- | --- |
| `&&` | E lógico | Quando todas as condições são verdadeiras. |
| `||` | OU lógico | Quando pelo menos uma condição é verdadeira. |
| `!` | NÃO lógico | Quando a condição original é falsa. |

## Atividades práticas

Depois de estudar os exemplos, acesse [`atividades/README.md`](atividades/README.md). A pasta contém enunciados em ordem de dificuldade e arquivos iniciais com comentários `TODO` para orientar a implementação.

Uma boa rotina para cada atividade é:

1. ler o enunciado;
2. escrever uma solução antes de consultar outros códigos;
3. compilar com os avisos habilitados;
4. testar diferentes entradas, incluindo valores nos limites das condições;
5. explicar oralmente ou por escrito o funcionamento da solução.
