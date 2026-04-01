#include <stdio.h>
    int main (){

        int populacao1 = 12325000;
        char cidade1[50] = "saopaulo";
        float area1 = 1521.11;
        float pib1 = 699.28;
        int pontos_turisticos1 = 50;
        char codigo1[7] = "A01";
        char estado1 = 'A';
        float densidadepopulacional1;
        float pibpercapita1;
        float superpoder1;
        
        

        int populacao2 = 6748000;
        char cidade2[40]= "riodejaneiro";
        float area2 = 1200.25;
        float pib2 = 300.50;
        int pontos_turisticos2 = 30;
        char codigo2[7]= "B02";
        char estado2 = 'B';
        float densidadepopulacional2;
        float pibpercapita2;
        float superpoder2;
        int resultado;



    
        printf("Nome da cidade da carta 1: \n");
        scanf("%s", cidade1);
        
        printf("Populacao da carta 1: \n");
        scanf("%d", &populacao1);


        printf("Codigo da carta 1: \n ");
        scanf("%s", codigo1);

        printf("Estado da carta 1: \n");
        scanf(" %c", &estado1);

        printf("Pontos turisticos da carta 1: \n");
        scanf("%d", &pontos_turisticos1);

        printf("PIB da carta 1: \n ");
        scanf("%f", &pib1);

        printf("Area da carta 1: \n");
        scanf("%f", &area1);

        densidadepopulacional1 = (float) populacao1 / area1;
        pibpercapita1 = pib1 / (float) populacao1;
        
        
    

        printf("Nome da Cidade da carta 2: \n");
        scanf("%s", cidade2);

        printf("Populacao da carta2: \n");
        scanf("%d", &populacao2); 
        
        printf("Codigo da carta 2: \n ");
        scanf("%s", codigo2);

        printf("Estado da carta 2: \n");
        scanf(" %c", &estado2);

        printf("Pontos turisticos da carta 2: \n");
        scanf("%d", &pontos_turisticos2);

        printf("PIB da carta 2: \n ");
        scanf("%f", &pib2);

        printf("Area da carta 2 : \n");
        scanf("%f", &area2);

        densidadepopulacional2 = (float) populacao2 / area2;
        pibpercapita2 = pib2 / (float) populacao2;

        superpoder1 = populacao1 + area1 + pib1 + pibpercapita1 + ((float)1 / densidadepopulacional1) + pontos_turisticos1;
        superpoder2 = populacao2 + area2 + pib2 + pibpercapita2 + ((float)1 / densidadepopulacional2) + pontos_turisticos2;

        resultado = superpoder1 > superpoder2;
    



    

        printf("\nCarta 1:\n");
        printf("Codigo: %s\n", codigo1);
        printf("Estado: %c\n", estado1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f km2\n", area1);
        printf("PIB: %.2f bilhoes de reais\n", pib1);
        printf("Pontos Turisticos: %d\n", pontos_turisticos1);
        printf("Densidade populacional: %.2f\n" ,densidadepopulacional1);
        printf("PIB per capita: %.2f\n", pibpercapita1);

        printf("\nCarta 2:\n");
        printf("Codigo: %s\n", codigo2);
        printf("Estado: %c\n", estado2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f km2\n", area2);
        printf("PIB: %.2f bilhoes de reais\n", pib2);
        printf("Pontos Turisticos: %d\n", pontos_turisticos2);
        printf("Densidade populacional: %.2f\n" ,densidadepopulacional2);
        printf("PIB per capita: %.2f\n", pibpercapita2);

        printf("\nResultado da comparacao: %d\n", resultado);

        printf("Atributo de comparacao das cartas: Populacao\n");

        printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);

        if(populacao1 > populacao2){
            printf("Carta 1 - (%s) Venceu!\n", cidade1);
        } else {
             printf("Carta 2 - (%s) Venceu!\n", cidade2);
        }

        printf("Atributo de comparacao das cartas: Area\n");

        printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, area2);

        if (area1 > area2){
            printf("Carta 1 - (%s) Venceu!\n", cidade1);
        } else { 
            printf("Carta 2 - (%s) Venceu!\n", cidade2);

        }

        printf("Atributo de comparacao das cartas: PIB\n");

        printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pib2);

        if(pib1 > pib2){
            printf("Carta 1 - (%s) Venceu!\n", cidade1);
        } 
        else{
            printf("Carta 2 - (%s) Venceu!\n", cidade2);

        }

        
        return 0;

    }
    
