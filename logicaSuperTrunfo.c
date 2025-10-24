#include <stdio.h>

int main(){
    
     // Variáveis da Carta 1
    char  Estado1 [50];                  // Nome do Estado (string)
    char  Codigo1 [50];                  // Código da carta (string)
    char  Nome_da_Cidade1 [50];          // Nome da cidade (string)
    long long Populacao1;                // População (inteiro long para numero grandes)
    float Area1;                         // Área em km² (número decimal)
    float PIB1;                          // PIB em bilhões (número decimal)
    int   Numero_de_Pontos_Turisticos1;  // Número de pontos turísticos (inteiro)
    float Densidade_Populacional1;       // Densidade populacional população/Area(número decimal)
    float PIB_per_Capita1;               // PIB per Capita PIB/População(número decimal)
    

     // Variáveis da Carta 2
    char  Estado2 [50];
    char  Codigo2 [50];
    char  Nome_da_Cidade2 [50];
    long long Populacao2;
    float Area2;
    float PIB2;
    int   Numero_de_Pontos_Turisticos2;
    float Densidade_Populacional2;
    float PIB_per_Capita2;
    
    
    int primeiroatributo, segundoatributo;
    int disponivel [7] = {0, 1, 1, 1, 1, 1, 1}; // 0 não usado, 1-6 disponíveis
    int carta1_pontos = 0,carta2_pontos = 0;

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
    scanf("%lld", &Populacao1); 

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
    scanf("%lld", &Populacao2); 

    printf("Digite sua Area: \n");
    scanf("%f", &Area2);

     printf("Digite sua PIB: \n");
     scanf("%f", &PIB2);

     printf("Digite o Numero de Pontos Turisticos: \n");
     scanf("%d", &Numero_de_Pontos_Turisticos2);
   

     // Calcula a densidade populacional com verificação de divisão por zero
    Densidade_Populacional1 = (Area1 > 0) ? (Populacao1 / Area1) : 0;
    Densidade_Populacional2 = (Area2 > 0) ? (Populacao2 / Area2) : 0;
    
    // Calcula o PIB per capita com verificação de divisão por zero
    PIB_per_Capita1 = (Populacao1 > 0) ? (PIB1 / Populacao1) : 0;
    PIB_per_Capita2 = (Populacao2 > 0) ? (PIB2 / Populacao2) : 0;


    //MENU INTERATIVO
    // menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas.
    
    printf("\n*** PRIMEIRA ESCOLHA - Atributo de comparação ***\n");
    printf("Sua escolha (1-6):\n");
    (disponivel[1]) ? printf("1. População\n") : printf("");
    (disponivel[2]) ? printf("2. Área\n") : printf("");
    (disponivel[3]) ? printf("3. PIB\n") : printf("");
    (disponivel[4]) ? printf("4. Número de pontos turísticos\n") : printf("");
    (disponivel[5]) ? printf("5. Densidade demográfica\n") : printf("");
    (disponivel[6]) ? printf("6. PIB per capita\n") : printf("");
    scanf("%d", &primeiroatributo);
    
     
    // VALIDAÇÃO E PROCESSAMENTO DA PRIMEIRA ESCOLHA
    
    // Operador ternário complexo para validar a escolha:
    // Se a escolha é entre 1-6 E está disponível, então:
    //   - Mostra qual atributo foi escolhido
    //   - Marca como indisponível (disponivel[atributo] = 0)
    // Senão:
    //   - Mostra mensagem de erro
    //   - Define primeiroatributo como 0 (inválido)
     // Valida e processa primeira escolha

     (primeiroatributo >= 1 && primeiroatributo <= 6 && disponivel[primeiroatributo]) ? 
        (printf(">>> Primeira escolha: "),
         (primeiroatributo == 1) ? printf("População\n") :
         (primeiroatributo == 2) ? printf("Área\n") :
         (primeiroatributo == 3) ? printf("PIB\n") :
         (primeiroatributo == 4) ? printf("Número de pontos turísticos\n") :
         (primeiroatributo == 5) ? printf("Densidade demográfica\n") :
         printf("PIB per capita\n"),
         disponivel[primeiroatributo] = 0) :
    (printf("Opção inválida ou já escolhida!\n"), primeiroatributo = 0);

   //MENU INTERATIVO
   // SEGUNDA OPÇAO DE ESCOLHA 
   // Mostra apenas opções que ainda não foram escolhidas
    printf("\n*** SEGUNDA ESCOLHA - Atributo de comparação ***\n");
    printf("Sua escolha (1-6):\n");
    (disponivel[1]) ? printf("1. População\n") : printf("");
    (disponivel[2]) ? printf("2. Área\n") : printf("");
    (disponivel[3]) ? printf("3. PIB\n") : printf("");
    (disponivel[4]) ? printf("4. Número de pontos turísticos\n") : printf("");
    (disponivel[5]) ? printf("5. Densidade demográfica\n") : printf("");
    (disponivel[6]) ? printf("6. PIB per capita\n") : printf("");
    scanf("%d", &segundoatributo);
   
    // VALIDAÇÃO E PROCESSAMENTO DA SEGUNDA ESCOLHA
   
    // Mesma lógica da primeira validação
    // Valida e processa segunda escolha
    (segundoatributo >= 1 && segundoatributo <= 6 && disponivel[segundoatributo]) ? 
        (printf(">>> Segunda escolha: "),
         (segundoatributo == 1) ? printf("População\n") :
         (segundoatributo == 2) ? printf("Área\n") :
         (segundoatributo == 3) ? printf("PIB\n") :
         (segundoatributo == 4) ? printf("Número de pontos turísticos\n") :
         (segundoatributo == 5) ? printf("Densidade demográfica\n") :
         printf("PIB per capita\n"),
         disponivel[segundoatributo] = 0) :
    (printf("Opção inválida ou já escolhida!\n"), segundoatributo = 0);

   
   // Switch case para executar a comparação baseada na primeira escolha

    switch (primeiroatributo)
    {
    // COMPARAÇÕES ENTRE AS CARTAS
    // COMPARAÇÃO 1: POPULAÇÃO (MAIOR VENCE)
    case 1:
       printf("     Comparação de Cartas:População:\n\n");
       printf("Carta 1 - %s(%s):%lld \n", Nome_da_Cidade1,Codigo1,Populacao1);
       printf("Carta 2 - %s(%s):%lld \n", Nome_da_Cidade2,Codigo2,Populacao2);
    if (Populacao1>Populacao2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1), carta1_pontos++;
      }else if (Populacao1<Populacao2) {
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
      }else{
        printf("Resultado:Empate!\n");
      } break;
      
   

    // COMPARAÇÃO 2: ÁREA (MAIOR VENCE)
    case 2:
    printf("     Comparação de Cartas:Área:\n\n");
    printf("Carta 1 - %s(%s):%.2f km² \n", Nome_da_Cidade1,Codigo1,Area1);
    printf("Carta 2 - %s(%s):%.2f km²\n", Nome_da_Cidade2,Codigo2,Area2);
    if (Area1>Area2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1),carta1_pontos++;
     }else if (Area1<Area2) {
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2),carta2_pontos++;
     }else{

       printf("Resultado:Empate!\n");
     } break;
      
   

     // COMPARAÇÃO 3: PIB (MAIOR VENCE)
     case 3 :
    printf("    Comparação de Cartas:PIB:\n\n");
    printf("Carta 1 -  %s(%s):R$%.2f Bilhões.\n", Nome_da_Cidade1,Codigo1,PIB1);
    printf("Carta 2 - %s(%s):R$%.2f Bilhões.\n", Nome_da_Cidade2,Codigo2,PIB2);
     if (PIB1>PIB2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1),carta1_pontos++;
     }else if (PIB1<PIB2){
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2),carta2_pontos++;
     }else{ 
        printf("Resultado:Empate!\n");
     } break;
      
   
    // COMPARAÇÃO 4: PONTOS TURÍSTICOS (MAIOR VENCE)
    case 4:
    printf("     Comparação de Cartas:Pontos Turísticos:\n\n");
    printf("Carta 1 - %s(%s):%d\n", Nome_da_Cidade1,Codigo1,Numero_de_Pontos_Turisticos1);
    printf("Carta 2 - %s(%s):%d \n", Nome_da_Cidade2,Codigo2,Numero_de_Pontos_Turisticos2);
    if (Numero_de_Pontos_Turisticos1>Numero_de_Pontos_Turisticos2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1), carta1_pontos++;
     }else if (Numero_de_Pontos_Turisticos1<Numero_de_Pontos_Turisticos2){
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
     }else{  
        printf("Resultado:Empate!\n");
     } break;
      
   
    // COMPARAÇÃO 5: DENSIDADE POPULACIONAL (MENOR VENCE)
    
    case 5:
       printf("      Comparação de Cartas:Densidade Populacional:\n\n");
       printf("Carta 1 - %s(%s):%.2f hab/km²\n", Nome_da_Cidade1,Codigo1,Densidade_Populacional1);
       printf("Carta 2 - %s(%s):%.2f hab/km²\n", Nome_da_Cidade2,Codigo2,Densidade_Populacional2);
    if (Densidade_Populacional1<Densidade_Populacional2) {
          printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1), carta1_pontos++;
     }else if (Densidade_Populacional2 > Densidade_Populacional1){
          printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
     }else {
          printf("Resultado:Empate!\n");

     } break;
         
   
    // // COMPARAÇÃO 6: PIB PER CAPITA (MAIOR VENCE)
   case 6:
      printf("       Comparação de Cartas:PIB per Capita:\n\n");
      printf("Carta 1 - %s(%s):%.2f\n", Nome_da_Cidade1,Codigo1,PIB_per_Capita1);
      printf("Carta 2 - %s(%s):%.2f \n", Nome_da_Cidade2,Codigo2,PIB_per_Capita2 );
   if (PIB_per_Capita1>PIB_per_Capita2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1),carta1_pontos++;
      }else if (PIB_per_Capita1<PIB_per_Capita2){
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2),carta2_pontos++;
     }else{
      printf("Resultado:Empate!\n");
     }
     break;

     default:
            printf("Opcao invalida! Escolha entre 1 e 6.\n");
            break;
       
   }
   // Mesma lógica da primeira comparação, mas usando a segunda escolha
   switch (segundoatributo)
    {
    // COMPARAÇÕES ENTRE AS CARTAS
    // COMPARAÇÃO 1: POPULAÇÃO (MAIOR VENCE)
    case 1:
       printf("     Comparação de Cartas:População:\n\n");
       printf("Carta 1 - %s(%s):%d \n", Nome_da_Cidade1,Codigo1,Populacao1);
       printf("Carta 2 - %s(%s):%d \n", Nome_da_Cidade2,Codigo2,Populacao2);
    if (Populacao1>Populacao2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1), carta1_pontos++;
      }else if (Populacao1<Populacao2) {
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
      }else{
        printf("Resultado:Empate!\n");
      } break;
      
   

    // COMPARAÇÃO 2: ÁREA (MAIOR VENCE)
    case 2:
    printf("     Comparação de Cartas:Área:\n\n");
    printf("Carta 1 - %s(%s):%.2f km² \n", Nome_da_Cidade1,Codigo1,Area1);
    printf("Carta 2 - %s(%s):%.2f km²\n", Nome_da_Cidade2,Codigo2,Area2);
    if (Area1>Area2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1), carta1_pontos++;
     }else if (Area1<Area2) {
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
     }else{

       printf("Resultado:Empate!\n");
     } break;
      
   

     // COMPARAÇÃO 3: PIB (MAIOR VENCE)
     case 3 :
    printf("    Comparação de Cartas:PIB:\n\n");
    printf("Carta 1 -  %s(%s):R$%.2f Bilhões.\n", Nome_da_Cidade1,Codigo1,PIB1);
    printf("Carta 2 - %s(%s):R$%.2f Bilhões.\n", Nome_da_Cidade2,Codigo2,PIB2);
     if (PIB1>PIB2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1), carta1_pontos++;
     }else if (PIB1<PIB2){
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
     }else{ 
        printf("Resultado:Empate!\n");
     } break;
      
   
    // COMPARAÇÃO 4: PONTOS TURÍSTICOS (MAIOR VENCE)
    case 4:
    printf("     Comparação de Cartas:Pontos Turísticos:\n\n");
    printf("Carta 1 - %s(%s):%d\n", Nome_da_Cidade1,Codigo1,Numero_de_Pontos_Turisticos1);
    printf("Carta 2 - %s(%s):%d \n", Nome_da_Cidade2,Codigo2,Numero_de_Pontos_Turisticos2);
    if (Numero_de_Pontos_Turisticos1>Numero_de_Pontos_Turisticos2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1), carta1_pontos++;
     }else if (Numero_de_Pontos_Turisticos1<Numero_de_Pontos_Turisticos2){
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
     }else{  
        printf("Resultado:Empate!\n");
     } break;
      
   
    // COMPARAÇÃO 5: DENSIDADE POPULACIONAL (MENOR VENCE)
    
    case 5:
       printf("      Comparação de Cartas:Densidade Populacional:\n\n");
       printf("Carta 1 - %s(%s):%.2f hab/km²\n", Nome_da_Cidade1,Codigo1,Densidade_Populacional1);
       printf("Carta 2 - %s(%s):%.2f hab/km²\n", Nome_da_Cidade2,Codigo2,Densidade_Populacional2);
    if (Densidade_Populacional1<Densidade_Populacional2) {
          printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1),carta1_pontos++;
     }else if (Densidade_Populacional2 > Densidade_Populacional1){
          printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2),carta2_pontos++;
     }else {
          printf("Resultado:Empate!\n");

     } break;
         
   
    // // COMPARAÇÃO 6: PIB PER CAPITA (MAIOR VENCE)
   case 6:
      printf("       Comparação de Cartas:PIB per Capita:\n\n");
      printf("Carta 1 - %s(%s):%.2f\n", Nome_da_Cidade1,Codigo1,PIB_per_Capita1);
      printf("Carta 2 - %s(%s):%.2f \n", Nome_da_Cidade2,Codigo2,PIB_per_Capita2 );
   if (PIB_per_Capita1>PIB_per_Capita2) {
        printf("Resultado :Carta 1(%s) Venceu!\n",Nome_da_Cidade1),carta1_pontos++;
      }else if (PIB_per_Capita1<PIB_per_Capita2){
        printf("Resultado:Carta 2(%s) Venceu!\n",Nome_da_Cidade2), carta2_pontos++;
     }else{
      printf("Resultado:Empate!\n");
     }
     break;

     default:
            printf("Opcao invalida! Escolha entre 1 e 6.\n");
            break;
       
   }

   // Operador ternário para determinar o vencedor geral:
   // Se carta1 tem mais pontos -> carta1 vence
   // Se carta2 tem mais pontos -> carta2 vence  
   // Senão -> empate

   // RESULTADO FINAL
    printf("\n   RESULTADO FINAL  \n");
    printf("Carta 1 (%s): %d vitórias\n", Nome_da_Cidade1, carta1_pontos);
    printf("Carta 2 (%s): %d vitórias\n", Nome_da_Cidade2, carta2_pontos);
    
    (carta1_pontos > carta2_pontos) ? 
        printf("\n VENCEDOR GERAL: Carta 1 - %s(%s)!\n", Nome_da_Cidade1, Codigo1) :
    (carta2_pontos > carta1_pontos) ? 
        printf("\n VENCEDOR GERAL: Carta 2 - %s(%s)!\n", Nome_da_Cidade2, Codigo2) :
        printf("\n EMPATE GERAL entre as duas cartas!\n");
   
return 0;
}
