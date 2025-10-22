#include <stdio.h>

int main(){
    printf ("Carta 01 \n");
    char  estado[20] = "A";
    char  codigo[20] =  "A01";
    char cidade[20] = "São Paulo";
    unsigned long int populacao = 12325000;
    float area = 1521.11;
    float pib =  699.28;
    int turisticos = 50;

    float soma = (populacao / area);
    float valor = (pib / populacao);


    printf("Estado: %s \n", estado);
    printf("Codigo da carta: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("Qual e numero da polulação: %li \n", populacao);
    printf("Area em km: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Numero de pontos turisticos: %d \n",turisticos);
    printf("Densidade populacional: %2.f \n", soma); 
    printf("PIB per capita: %.10f reais \n", valor);

    printf ("----------------------------------------------- \n");
    printf ("Carta 02 \n");
    char estado01[20] = "B";
    char codigo01[20] = "B02";
    char cidade01[20] = "Rio de Janeiro";
    unsigned long int populacao01 = 6748000;
    float area01 = 1200.25;
    float pib01 = 300.50;
    int turisticos01 = 30;

    float soma1 = (populacao01 / area01);
    float valor1  = (pib01 / populacao01);


    printf("Estado: %s \n", estado01);
    printf("Codigo da carta: %s \n", codigo01);
    printf("Nome da cidade: %s \n", cidade01);
    printf("Qual e numero da polulação: %.li \n", populacao01);
    printf("Area em km: %f \n", area01);
    printf("PIB: %f \n", pib01);
    printf("Numero de pontos turisticos: %d \n",turisticos01);
    printf("Densidade populacional: %.2f \n", soma1);
    printf("PIB per capita: %.6f reais \n", valor1); 

    printf ("----------------------------------------------- \n");

    int resultadoA = populacao > populacao01;
    int resultadoB = area01 > area;
    int resultadoC = pib > pib01;
    int resultadoD = turisticos > turisticos01;
    int resultadoE = soma > soma1;
    int resultadoF = valor > valor1;


    printf("X1 das melhores requisitos das cartas: \n");
    
    printf("Populaçao: Carta 1 venceu (%d) \n", resultadoA);
    printf("Área: Carta 1 venceu (%d) \n", resultadoB);
    printf("PIB: Carta 1 venceu (%d) \n", resultadoC);
    printf("Pontos Turísticos: Carta 1 venceu (%d) \n", resultadoD);
    printf("Densidade Populacional: Carta 1 venceu (%d) \n", resultadoE);
    printf("PIB per Capita: Carta 1 venceu (%d) \n", resultadoF);

    printf ("----------------------------------------------- \n");

    
printf("Comparação entre as cartas: \n");

    if (populacao > populacao01)
    {printf("Carta 1 venceu! \n");}
        else
        {
            printf("Carta 2 venceu \n");
        }
    if (pib >  pib01)
    {
        printf("Bip da carta 01 venceu! \n");
    }
    else
    {
        printf("Bip da carta 02 venceu \n");
    }
    
        
    
    


















    
}