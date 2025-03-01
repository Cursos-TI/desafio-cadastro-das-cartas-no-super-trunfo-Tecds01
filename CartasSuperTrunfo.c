#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
//Criei uma estrutura com as caracteristicas de cada cidade que quero que apresente para cada cidade.
struct pais{ 
 //cidade A01
      char cidadeA01[15];
      float populacaoA01;
      float areaA01;
      float pibA01;
      int ptA01; //pontos turisticos
      float densidade_Popa01;   //: População dividida pela área da cidade.
      float pib_p_capa01;        //PIB total dividido pela população.
      float super_podera01;

//cidade A02
      char cidadeA02[15];
      float populacaoA02;
      float areaA02;
      float pibA02;
      int ptA02; //pontos turisticos
      float Densidade_Popa02;   //: População dividida pela área da cidade.
      float PIB_p_capa02;        //PIB total dividido pela população.
      float super_podera02;
};

int main(){
// declarado uma variavel para a estrutura para ser associada com cada campo.
    struct pais e;
//no scanf logo apos o % colocar a quantidade de caracteres seguido de [^\n] para ler todos os caracteres dessa string.
        printf("digite o nome do cidade: \n");
        scanf(" %14[^\n]s", e.cidadeA01);
        fflush(stdin);

        printf("Qual é a ppopulação?: \n");
        scanf(" %f", &e.populacaoA01);
        fflush(stdin);

        printf("Qual é a area?: \n");
        scanf(" %f", &e.areaA01);
        fflush(stdin);

        printf("Qual é o PIB?: \n");
        scanf(" %f", &e.pibA01);
        fflush(stdin);

        printf("Quantos Pontos turistico tem?: \n");
        scanf(" %d", &e.ptA01);
       
        //Carta A02
        printf("digite o nome do cidade: \n");
        scanf(" %14[^\n]s", e.cidadeA02);
        fflush(stdin);

        printf("Qual é a ppopulação?: \n");
        scanf(" %f", &e.populacaoA02);
        fflush(stdin);

        printf("Qual é a area?: \n");
        scanf(" %f", &e.areaA02);
        fflush(stdin);

        printf("Qual é o PIB?: \n");
        scanf(" %f", &e.pibA02);
        fflush(stdin);

        printf("Quantos Pontos turistico tem?: \n");
        scanf(" %d", &e.ptA02);
        fflush(stdin);

//carta A01 nivel intermediario. 
    e.densidade_Popa01 = e.populacaoA01 / e.areaA01;
    e.pib_p_capa01 = e.pibA01 / e.populacaoA01;

//carta A02 nivel intermediario.
    e.Densidade_Popa02 = e.populacaoA02 / e.areaA02;
    e.PIB_p_capa02 = e.pibA02 / e.populacaoA02;

//carta A01 nivel mestre.
    e.super_podera01 = e.populacaoA01 + e.areaA01 + e.pibA01 + e.ptA01 + e.pib_p_capa01;

// carta A02 nivel mestre.
    e.super_podera02 = e.populacaoA02 + e.areaA02 + e.pibA02 + e.ptA02 + e.PIB_p_capa02;

        
//Apresentar o resultado recolhido de cada questão e apresentar de forma organizada. 
        printf("Cidade A01: %s\n , População: %.2f\n , Area: %.2f\n , PIB: %.2f\n , Pontos Turistico: %d\n , Densidade Populacional: %.2f\n , PIB per capita: %.2f\n"
        , e.cidadeA01 , e.populacaoA01 , e.areaA01, e.pibA01 , e.ptA01 , e.densidade_Popa01 , e.pib_p_capa01);
        
        printf("\n\n");

        printf("Cidade A02: %s\n , População: %.2f\n , Area: %.2f\n , PIB: %.2f\n , Pontos Turistico: %d\n , Densidade Populacional: %.2f\n , PIB per capita: %.2f\n"
        , e.cidadeA02 , e.populacaoA02 , e.areaA02, e.pibA02 , e.ptA02 , e.Densidade_Popa02 , e.PIB_p_capa02);
   
        printf("\n\n");
//nivel mestre. Apresentar a comparação dos atributos e definir quem ganhou.
        printf("Comparação de cartas.\n");
        if(e.populacaoA01 > e.populacaoA02)
        {
            printf("População: Carta 1 venceu.\n");
        } else{
            printf("População: Carta 2 venceu.\n");
        }

        if(e.areaA01 > e.areaA02)
        {
            printf("Área: Carta 1 venceu.\n");
        } else{
            printf("Área: Carta 2 venceu.\n");
        }

        if(e.pibA01 > e.pibA02)
        {
            printf("PIB: Carta 1 venceu.\n");
        } else{
            printf("PIB: Carta 2 venceu.\n");
        }

        if(e.ptA01 > e.ptA02)
        {
            printf("Pontos Turisticos: Carta 1 venceu.\n");
        } else{
            printf("Pontos Turisticos: Carta 2 venceu.\n");
        }

        if(e.densidade_Popa01 < e.Densidade_Popa02)
        {
            printf("Densidade Demográfica: Carta 1 venceu.\n");
        } else{
            printf("Densidade Demográfica: Carta 2 venceu.\n");
        }

        if(e.pib_p_capa01 > e.PIB_p_capa02)
        {
            printf("PIB per Capta: Carta 1 venceu.\n");
        } else{
            printf("PIB per Capta: Carta 2 venceu.\n");
        }

        if(e.super_podera01 > e.super_podera02)
        {
            printf("Super Poder: Carta 1 venceu.\n");
        } else{
            printf("Super Poder: Carta 2 venceu.\n");
        }

        
  return 0;
}