#include<stdio.h>

    int main(){
        //Variáveis para a Carta 1
        char estado1;
        char codigo1[4];
        char nomeCidade1[50];
        int populacao1;
        float area1;

         //Variáveis para a Carta 2
        char estado2;
        char codigo2[4];
        char nomeCidade2[50];
        int populacao2;
        float area2;

        //Cadastro da Carta 1
        printf("** Cadastro da Carta 1 **\n");
        printf("Estado (A-H): ");
        scanf(" %c", &estado1);
        printf("Código (Ex: A01): ");
        scanf("%s", codigo1);
        printf("Nome da Cidade: ");
        scanf("%s", nomeCidade1); 
        printf("População: ");
        scanf("%d", &populacao1);
        printf("Área (km2²): ");
        scanf("%f", &area1);
            printf("\n\n");
        //Cadastro da Carta 2
        printf("** Cadastro da Carta 2 **\n");
        printf("Estado (A-H: ) ");
        scanf(" %c", &estado2);
        printf("Código (Ex: B02): ");
        scanf("%s", codigo2);
        printf("Nome da Cidade: ");
        scanf("%s", nomeCidade2); 
        printf("População: ");
        scanf("%d", &populacao2);
        printf("Área (km2²): ");
        scanf("%f", &area2);
        printf("\n\n");
        printf("*** Código funcionando ***\n");
        
        return 0;


    }
