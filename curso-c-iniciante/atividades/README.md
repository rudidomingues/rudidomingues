# Atividades práticas

Estas atividades utilizam somente os conceitos apresentados nos exemplos da trilha. Faça os exercícios na ordem sugerida. Cada arquivo inicial contém a estrutura mínima e comentários `TODO` indicando o que deve ser desenvolvido.

## Como compilar uma atividade

Na pasta `curso-c-iniciante`, execute:

```bash
gcc -std=c11 -Wall -Wextra -pedantic atividades/01_apresentacao.c -o apresentacao
./apresentacao
```

Troque o nome do arquivo e do executável conforme a atividade escolhida.

## 1. Cartão de apresentação

Arquivo inicial: [`01_apresentacao.c`](01_apresentacao.c)

Declare variáveis para armazenar seu primeiro nome, sua idade e a letra que identifica sua turma. Depois, exiba uma apresentação em três linhas.

Exemplo de saída:

```text
Nome: Ana
Idade: 15 anos
Turma: B
```

**Pratique:** variáveis, tipos básicos, `printf` e especificadores de formato.

## 2. Calculadora de média

Arquivo inicial: [`02_media.c`](02_media.c)

Leia duas notas, calcule a média aritmética e mostre o resultado com duas casas decimais.

Exemplo:

```text
Digite a primeira nota: 8
Digite a segunda nota: 7
Media: 7.50
```

**Pratique:** `float`, `scanf`, soma e divisão.

## 3. Número par ou ímpar

Arquivo inicial: [`03_par_impar.c`](03_par_impar.c)

Leia um número inteiro e informe se ele é par ou ímpar. Use o operador `%` para verificar o resto da divisão por `2`.

**Pratique:** `int`, `%`, `if` e `else`.

## 4. Classificação por idade

Arquivo inicial: [`04_classificacao_idade.c`](04_classificacao_idade.c)

Leia a idade de uma pessoa e exiba uma das classificações:

- `Crianca`: idade menor que `12`;
- `Adolescente`: idade de `12` a `17`;
- `Adulto`: idade de `18` a `59`;
- `Idoso`: idade maior ou igual a `60`.

Se a idade for negativa, informe que o valor é inválido.

**Pratique:** operadores relacionais, `if`, `else if` e `else`.

## 5. Acesso ao laboratório

Arquivo inicial: [`05_acesso_laboratorio.c`](05_acesso_laboratorio.c)

Leia a idade do estudante e pergunte se ele possui autorização (`1` para sim e `0` para não). Permita o acesso quando o estudante tiver pelo menos `16` anos **e** possuir autorização. Mostre uma mensagem explicando se a entrada foi permitida ou negada.

**Pratique:** operador lógico `&&`.

## 6. Benefício de transporte

Arquivo inicial: [`06_beneficio_transporte.c`](06_beneficio_transporte.c)

Leia a idade de uma pessoa e pergunte se ela é estudante (`1` para sim e `0` para não). Informe que ela possui benefício quando for estudante **ou** tiver idade menor ou igual a `12` **ou** tiver idade maior ou igual a `60`.

**Pratique:** operador lógico `||`.

## 7. Mini calculadora com menu

Arquivo inicial: [`07_mini_calculadora.c`](07_mini_calculadora.c)

Leia dois números e uma opção do menu:

```text
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
```

Use `switch` para executar a operação escolhida. Antes de dividir, verifique se o segundo número é diferente de zero. Exiba uma mensagem para opções inválidas.

**Pratique:** cálculos, `switch`, `if` e operador `!=`.

## Desafio extra

Após concluir as sete atividades, adapte a mini calculadora para informar se o resultado de uma operação é positivo, negativo ou igual a zero.
