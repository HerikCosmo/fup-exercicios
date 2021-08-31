// Implemente um programa que recebe um vetor A de inteiros de tamanho n, um vetor IND de inteiros de tamanho n com valores do intervalo [0, n-1] em ordem qualquer, ou seja, o vetor IND é composto por índices do vetor A, e um vetor OP do tipo char de tamanho n composto pelos símbolos que representam uma operação aritmética (+, -, *, /).

// Seu programa deve calcular o seguinte soma, começando do valor A[0], irá executar a operação contida em OP[0], com o valor existente em A no índice contido em IND[0]. Irá soma com o valor A[1], irá executar a operação contida em OP[1], com o valor existente em A no índice contido em IND[1]. E assim sucessivamente.

// Vamos com um exemplo para esclarecer. Seja o vetor A = [3 7 8 9] de tamanho 4. O vetor IND = [2 3 1 0] de tamanho 4. O vetor OP = [+ - * +] de tamanho 4. Irei fazer o cálculo por partes. Seja valor a variável que armazenará o resultado:

// valor = 0

// valor += A[0] + A[2] = 3 + 8// Essa primeira operação é feita em OP[0] temos o '+' e em IND[0] temos o 2, então fazemos a soma do elemento A[0] com o A[2].

// valor += A[1] - A[3] = 7 - 9// Essa primeira operação é feita em OP[1] temos o '-' e em IND[1] temos o 3, então fazemos a subtração do elemento A[1] com o A[3]

// valor += A[2] * A[1] = 8 * 7// Essa primeira operação é feita em OP[2] temos o '*' e em IND[2] temos o 1, então fazemos a multiplicação do elemento A[2] com o A[1]

// valor += A[3] + A[0] = 9 + 3// Essa primeira operação é feita em OP[3] temos o '+' e em IND[3] temos o 0, então fazemos a soma do elemento A[3] com o A[0]

// Resultado é valor = 75.00.

// A operação não será executada se houver uma divisão por 0.

// Imprima o resultado com duas casas decimais.