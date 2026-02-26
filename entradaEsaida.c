#include <stdio.h>

    int main(){

        int idade = 35;
        float altura = 1.75;
        char opcao = 's';
        char nome [20] = "Marcos";

        printf("A idade do %s é: %d\n", nome, idade);
        printf("A altura é %.2f\n", altura);//depois de prcentagem botei .2 para printar apenas duas casas decmais.
        printf("A opção é: %c\n", opcao);

        /*printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
        
        %d: Imprime um interio no formato decimal.
        %i: equivalente ao %d. inteiro
        %f: Imprime um número de ponto flutuante no formato padrão.
        %e: Imprime um número de ponto flutuante em notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (String) de caracteres.
        */
        
        printf("Digite a sua idade:");
        scanf("%d", &idade);
        printf("A idade é: %d\n", idade);

        printf("Digite a sua altura:");
        scanf("%f", &altura);
        printf("A altura é: %.2f\n",&altura);

    }

