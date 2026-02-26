#include<stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[30];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n Matrícula: %d\n ", nome, matricula);
    printf("Idade: %d\n Altura: %.2f\n", idade, altura);//entre o sinal de % e o f coloquei um limitador de casas decimais (.2)

    return 0;




}