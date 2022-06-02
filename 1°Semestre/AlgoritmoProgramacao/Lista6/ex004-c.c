/*
4c - não restrinja a entrada de dados a apenas 5 atletas. Agora após a inclusão de cada atleta o programa deve perguntar ao usuário se deseja incluir outro. A resposta é dada com (S/N). O programa continua mostrando o código do mais alto, e a altura média.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float altura, maisAlto, acum, media = 0;
    int codigoDoMaisAlto = 0;
    int codigo = 0;
    int cont = 1;
    char continuar[1] = "S";


    while(continuar[0] == "S"){
        printf("Informe a ALTURA de %do atletas: ", cont);
        scanf("%f", &altura);
        acum += altura;

        printf("Informe o CODIGO do atleta: ");
        scanf("%d", &codigo);

        printf("Deseja continuar: [S/N]");
        scanf("%s", &continuar);
        continuar[0] = toupper(continuar);


        printf("========================================\n");

        //Codigo do atleta mais alto
        if(altura > maisAlto){
            maisAlto = altura;
            codigoDoMaisAlto = codigo;
        }

    }

    

    printf("O codigo do MAIS ALTO eh: %d", codigoDoMaisAlto);

    return 0;
}