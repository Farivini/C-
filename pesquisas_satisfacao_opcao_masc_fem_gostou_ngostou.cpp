#include <stdio.h>
#include <iconv.h>
#include <stdlib.h>
#include <string.h>




int main()
{
inicio:
    int  pessoas;
    int gostou;
    int ngostou;
    int contagem;
    int mascn;
    int mascs;
    int femn;
    int fems;
    int resposta;
    float percentmasc;
    float percentfem;
    float defat;
    int sexo;

    pessoas = 150;//UTILIZEI 4 PARA VALIDAR
    gostou = 0;
    ngostou = 0;
    contagem = 0;
    mascn = 0;
    mascs = 0;
    femn = 0;
    fems = 0;
    resposta = 0;

    percentmasc = 0;
    percentfem = 0;
    defat = 0;
    sexo = 0;

    printf("   Bem vindo a pesquisa de mercado\n");
    printf("   Abaixo algumas perguntas a serem respondidas\n\n");

    for (contagem >= 0; contagem <= pessoas;)
    {
        contagem = contagem + 1;
        sexo = 0;
        resposta = 0;
        printf(" Informe qual seu sexo\n\n 1 - Para masculino\n 2 - Para femi-nino\n");
        scanf("%d", &sexo);
        if (sexo == 1)
        {
            sexo = 0;
            printf(" Voce gostou do produto ?\n\n 1 - Sim\n 2 - Nao\n");
            scanf("%d", &resposta);
            if (resposta == 1)
            {
                mascs = mascs + 1;
                resposta = 0;
            }
            if (resposta == 2)
            {
                mascn = mascn + 1;
                resposta = 0;
            }

        }


        if (sexo == 2)
        {
            sexo = 0;
            resposta = 0;
            printf(" Voce gostou do produto?\n\n 1 - Sim\n 2 - Nao\n");
            scanf("%d", &resposta);
            if (resposta == 1)
            {
                fems = fems + 1;
                resposta = 0;
            }
            if (resposta == 2)
            {
                femn = femn + 1;
                resposta = 0;
            }
        }

    }
    if (contagem != 0)
    {
        defat = 100 / 150; //UTILIZEI 4 PARA VALIDAR E VER SE ESTAVA CERTO
        percentfem = fems * defat;
        percentmasc = mascn * defat;
        gostou = mascs + fems;
        ngostou = mascn + femn;
        printf(" A porcentagem de sexo feminino que respondeu sim foi %.2f:\n\n ", percentfem);
        printf(" A porcentagem de sexo masculino que respondeu nao foi %.2f:\n\n ", percentmasc);
        printf("    Obrigado por participar da pesquisa\n\n   ");
        printf("    A seguir mostraremos o resultado da pesquisa\n\n");
        printf(" A quantidade de pessoas que gostaram foi %d\n\n", gostou);
        printf(" A quantidade de pessoas que nao gostaram foi %d\n\n", ngostou);
    }



}
