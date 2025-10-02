#include <stdio.h>

int main(){
    
     // Variáveis da Carta 1
    char  Estado1 [50];                  // Nome do Estado (string)
    char  Codigo1 [50];                  // Código da carta (string)
    char  Nome_da_Cidade1 [50];          // Nome da cidade (string)
    int  Populacao1;       // População (inteiro)
    float Area1;                         // Área em km² (número decimal)
    float PIB1;                          // PIB em bilhões (número decimal)
    int   Numero_de_Pontos_Turisticos1;  // Número de pontos turísticos (inteiro)
    float Densidade_Populacional1;       // Densidade populacional população/Area(número decimal)
    float PIB_per_Capita1;               // PIB per Capita PIB/População(número decimal)
    

     // Variáveis da Carta 2
    char  Estado2 [50];
    char  Codigo2 [50];
    char  Nome_da_Cidade2 [50];
    int  Populacao2;
    float Area2;
    float PIB2;
    int   Numero_de_Pontos_Turisticos2;
    float Densidade_Populacional2;
    float PIB_per_Capita2;
      

    // Dados de entrada Carta 
    printf("DESAFIO SUPER TRUNFO!\n");
    printf("Digite agora a Carta 1\n"); 
    printf("Digite seu Estado: \n");
    scanf(" %49[^\n]", Estado1);            // Lê string com espaços até 49 caracteres

    printf("Digite Codigo da Carta: \n");
    scanf(" %49[^\n]", Codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", Nome_da_Cidade1);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao1); 

    printf("Digite sua Area: \n");
    scanf("%f", &Area1);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos1);

    // Dados de entrada Carta 2
    printf("Digite agora a Carta 2\n");
    printf("Digite seu Estado: \n");
    scanf(" %49[^\n]", Estado2);

    printf("Digite Codigo da Carta: \n");
    scanf(" %49[^\n]", Codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", Nome_da_Cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao2); 

    printf("Digite sua Area: \n");
    scanf("%f", &Area2);

     printf("Digite sua PIB: \n");
     scanf("%f", &PIB2);

     printf("Digite o Numero de Pontos Turisticos: \n");
     scanf("%d", &Numero_de_Pontos_Turisticos2);
   
    // ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
    // ESCOLHA AQUI QUAL ATRIBUTO COMPARAR:
    // 1 = População, 2 = Área, 3 = PIB, 4 = Pontos Turísticos  5= Densidade Populacional, 6 = PIB per Capita
    int atributo_escolhido = 4;  // Densidade Populacional (menor vence)
     
    // COMPARAÇÕES ENTRE AS CARTAS
    // COMPARAÇÃO 1: POPULAÇÃO (MAIOR VENCE)
    if(atributo_escolhido == 1){
       printf("     Comparação de Cartas:População:\n\n");
       printf("Carta 1 - %s(%s):%d \n", Nome_da_Cidade1,Codigo1,Populacao1);
       printf("Carta 1 - %s(%s):%d \n", Nome_da_Cidade2,Codigo2,Populacao2);
      if (Populacao1>Populacao2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1);
     }else{
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2);
     }
   }

    // COMPARAÇÃO 2: ÁREA (MAIOR VENCE)
    if(atributo_escolhido == 2){
    printf("     Comparação de Cartas:Área:\n\n");
    printf("Carta 1 - %s(%s):%.2f \n", Nome_da_Cidade1,Codigo1,Area1);
    printf("Carta 2 - %s(%s):%.2f \n", Nome_da_Cidade2,Codigo2,Area2);
     if (Area1>Area2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1);
     }else{
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2);
     }
   }

     // COMPARAÇÃO 3: PIB (MAIOR VENCE)
     if(atributo_escolhido == 3){
    printf("    Comparação de Cartas:PIB:\n\n");
    printf("Carta 1 - %s(%s):%.2f\n", Nome_da_Cidade1,Codigo1,PIB1);
    printf("Carta 2 - %s(%s):%.2f \n", Nome_da_Cidade2,Codigo2,PIB2);
     if (PIB1>PIB2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1);
     }else{
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2);
     }
   }
    // COMPARAÇÃO 4: PONTOS TURÍSTICOS (MAIOR VENCE)
    if(atributo_escolhido == 4){
    printf("     Comparação de Cartas:Pontos Turísticos:\n\n");
    printf("Carta 1 - %s(%s):%d\n", Nome_da_Cidade1,Codigo1,Numero_de_Pontos_Turisticos1);
    printf("Carta 2 - %s(%s):%d \n", Nome_da_Cidade2,Codigo2,Numero_de_Pontos_Turisticos2);
     if (Numero_de_Pontos_Turisticos1>Numero_de_Pontos_Turisticos2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1);
     }else{
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2);
     }
   }
    // COMPARAÇÃO 5: DENSIDADE POPULACIONAL (MENOR VENCE)
    // Calcula a densidade populacional: População / Área
    Densidade_Populacional1 = (Populacao1 / Area1);
    Densidade_Populacional2 = (Populacao2 / Area2);

    if(atributo_escolhido == 5){
       printf("      Comparação de Cartas:Densidade Populacional:\n\n");
       printf("Carta 1 - %s(%s):%.2f \n", Nome_da_Cidade1,Codigo1,Densidade_Populacional1);
       printf("Carta 2 - %s(%s):%.2f \n", Nome_da_Cidade2,Codigo2,Densidade_Populacional2);
      if (Densidade_Populacional1<Densidade_Populacional2) {
          printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1);
     }else{
          printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2);
     }
   }
    // // COMPARAÇÃO 6: PIB PER CAPITA (MAIOR VENCE)
    // Calcula o PIB per capita: PIB / População
    PIB_per_Capita1 = (PIB1 / Populacao1);
    PIB_per_Capita2 = (PIB2 / Populacao2);

   if(atributo_escolhido == 6){
      printf("       Comparação de Cartas:PIB per Capita:\n\n");
      printf("Carta 1 - %s(%s):%.2f\n", Nome_da_Cidade1,Codigo1,PIB_per_Capita1);
      printf("Carta 2 - %s(%s):%.2f \n", Nome_da_Cidade2,Codigo2,PIB_per_Capita2 );
     if (PIB_per_Capita1>PIB_per_Capita2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1);
     }else{
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2);
     }
   }
    
return 0;
}
