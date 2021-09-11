// Somente faça essa questão se você fez a questão EXPANDIR TAMANHO DO VETOR (ALOCAÇÃO DINÂMICA).

// Aqui, você vai encapsular em uma função essa operação de expandir um vetor de inteiros alocado dinamicamente.

// Implemente uma função que recebe como parâmetro dois vetores de inteiros alocados dinamicamente de tamanhos n e m, respectivamente. Veja uma sugestão abaixo:

// int* expandir_vetor(int* vet, int n, int* vet2, int m){}

// ATENÇÃO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!   Como iremos liberar na função os vetores passados como parâmetros, precisamos usar int* vet no lugar de int vet[].

// Essa função irá alocar dinamicamente um vetor de tamanho n+m e irá copiar os elementos do vetor vet e vet2, nessa ordem, nesse novo vetor. Irá liberar a memória dos dois vetores e retornar o endereço do novo vetor.

// Na função principal, receba esses dois vetores e armazene em vetores alocados dinamicamente. Chame a função para fazer essa expansão e receba o endereço do novo vetor em um ponteiro.

// Depois imprima esse novo vetor.

// Entrada:
// 5
// 2 4 7 8 9
// 4
// 2 4 1 2

// Saída:
// 2 4 7 8 9 2 4 1 2