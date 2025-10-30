#include <stdio.h>

int main() {

    // DECLARAÇAO PARA PRIMEIRA CARTA:
    char estado1[20];
    char codigo_da_carta1[4]; // 3 letras + '\0'
    char nome_da_cidade1[20];
    float area1; // a área será contabilizada sempre em KM²
    unsigned long int populacao1;    
    float PIB1;
    int numero_de_pontos_turisticos1;
    float densidade_populacional1;
    float PIBPERCAPTA1;

    // DECLARAÇAO PARA CALCULO DO INVERSO DA DENSIDADE POPULACIONAL E SUPER PODER 
    float inversoDP1; // Declaraçao para calcular inverso da densidade populacional; DP = DENSIDADE POPULACIONAL
    float SP1; // SUPER PODER -- SOMA DE TODOS OS ATRIBUTOS, EXCETO NOME, ESTADO E CÓDIGO

    // DECLARAÇAO PARA SEGUNDA CARTA:
    char estado2[20];
    char codigo_da_carta2[4]; // 3 letras + '\0'
    char nome_da_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float densidade_populacional2;
    float PIBPERCAPTA2;


    // DECLARAÇAO PARA CALCULO DO INVERSO DA DENSIDADE POPULACIONAL E SUPER PODER 
    float inversoDP2; // Declaraçao para calcular inverso da densidade populacional; DP = DENSIDADE POPULACIONAL
    float SP2; // SUPER PODER -- SOMA DE TODOS OS ATRIBUTOS, EXCETO NOME, ESTADO E CÓDIGO

    int inicio, comparacao, comparacao2;
    
    // APRESENTAÇAO DO JOGO
        printf("JOGO DE CARTAS SUPER TRUNFO: \n");
        printf("\n"); // espaço entre as informaçoes para melhor visualizaçao de texto
        printf("DESCRIÇÃO DO JOGO: \n");
        printf("\n"); // espaço entre as informaçoes para melhor visualizaçao de texto

        // INFORMAÇOES DO JOGO
            printf("1. CADA CARTA CONTÉM DADOS DIFERENTES REFERENTES A UM ESTADO E CIDADE A ESCOLHA DO JOGADOR; \n");
            printf("\n"); // espaço entre as informaçoes para melhor visualizaçao de texto
            printf("2. TODAS AS CARTAS POSSUEM UM SUPER PODER: \n");
            printf("TODOS OS ATRIBUTOS DE CADA CARTA SOMADOS **EXCETO ESTADO, NOME DA CIDADE E CÓDIGO** FORMAM ESTE SUPER PODER; \n");
            printf("---OBSERVAÇÃO: O VALOR DA DENSIDADE POPULACIONAL SERÁ SOMADO INVERTIDO. \n"); 
            printf("\n"); // espaço entre as informaçoes para melhor visualizaçao de texto
            printf("3. NO FINAL, OS JOGADORES DEVEM COMPARAR OS VALORES DE SUAS CARTAS POR ATRIBUTOS ALÉM DO SUPER PODER; O MAIOR VALOR VENCE! \n");
            printf("---ATENÇAO: PARA DENSIDADE POPULACIONAL, O MENOR VALOR VENCE!--- \n");
            

  // INTERAÇAO COM O JOGADOR ANTES DO INICIO DO JOGO
        printf("\n"); // espaço entre as informaçoes para melhor visualizaçao de texto
        printf("BORA JOGAR? \n");
        printf("1. SIM \n2. NÁO\n");
        printf("Digite sua escolha: ");
        scanf("%d", &inicio);


        switch (inicio)
        {
        case 1:       
    printf("\n"); // espaço entre as informaçoes para melhor visualizaçao de texto

    // DADOS DA PRIMEIRA CARTA DO JOGO
    printf("PREENCHA OS DADOS DA PRIMEIRA CARTA\n");
    printf("\n"); // Espaço para melhor visualizaçao das informaçoes

    printf("Digite o nome do Estado (A a H): ");
    scanf("%s", estado1);

    printf("Digite o código da carta (A01): ");
    scanf("%3s", codigo_da_carta1); // limite de 3 caracteres, sendo as 2 primeiras letras do ESTADO + O NUMERO DA CARTA. EX. MA1

    printf("Digite o nome da cidade: "); 
    scanf("%s", nome_da_cidade1); // limite de 20 caracteres, não pode ser nome composto.

    printf("Digite qual a população da cidade: "); 
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (KM²): "); 
    scanf("%f", &area1); // deve ser contabilizado em KM    

    printf("Digite o PIB da cidade (em reais): "); 
    scanf("%f", &PIB1); 
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numero_de_pontos_turisticos1);   

    // DADOS DA SEGUNDA CARTA DO JOGO
    printf("\n"); // espaço estre os dados da carta, para melhor visualizaçao
    printf("PREENCHA OS DADOS DA SEGUNDA CARTA\n");
    printf("\n"); // espaço estre os dados da carta, para melhor visualizaçao

    printf("Digite o nome do Estado (A a H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (A02): ");
    scanf("%3s", codigo_da_carta2); // limite de 3 caracteres, sendo as duas primeiras letras do ESTADO + O NUMERO DA CARTA. EX. MA1

    printf("Digite o nome da cidade: "); 
    scanf("%s", nome_da_cidade2); // limite de 20 caracteres, não pode ser nome composto.

    printf("Digite qual a população da cidade: "); 
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (KM²): "); 
    scanf("%f", &area2); // deve ser contabilizado em KM    

    printf("Digite o PIB da cidade (em reais): "); 
    scanf("%f", &PIB2); 
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numero_de_pontos_turisticos2);
   
     // IMPRESSÃO DOS DADOS PREENCHIDOS PELO USUÁRIO PARA PRIMEIRA CARTA.
    printf("\n");
    printf("--- DADOS DA PRIMEIRA CARTA: ---\n");
    printf("\n"); // espaço entre o titulo e os dados, para melhor visualizaçao

    printf("ESTADO: %s\n", estado1);
    printf("CÓDIGO DA CARTA: %3s", codigo_da_carta1);
    printf("CIDADE: %s\n", nome_da_cidade1);
    printf("POPULAÇÃO: %lu\n", populacao1);
    printf("AREA EM KM: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes de reais\n", PIB1);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n", numero_de_pontos_turisticos1);

    densidade_populacional1 = (float) populacao1 / area1; // CALCULO PARA DEFINIR DENSIDADE POPULACIONAL
    PIBPERCAPTA1 = PIB1 / (float) populacao1; // CALCULO PARA DEFINIR PIB PERCAPTA      
    printf("DENSIDADE POPULACIONAL: %.4f hab/km²\n", densidade_populacional1); // IMPRESSAO RESULTADO DENSIDADE POPULACIONAL
    printf("PIB PERCAPTA: %.2f reais\n", PIBPERCAPTA1); // IMPRESSAO RESULTADO PIB PERCAPTA
    printf("\n"); // espaço entre as informaçoes para melhor visualizaçao
  
    inversoDP1 = area1 / populacao1; // CALCULO DO INVERSO DA DENSIDADE POPULACIONAL PARA SOMA DO SUPER PODER        
    SP1 = populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + inversoDP1; // calculo SUPER PODER
    printf("*** O SUPER PODER DA CARTA %3s É: %.6f ***\n", codigo_da_carta1, SP1);


    // IMPRESSÃO DOS DADOS PREENCHIDOS PELO USUÁRIO PARA SEGUNDA CARTA.
    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO
    printf("--- DADOS DA SEGUNDA CARTA: ---\n");
    printf("\n"); // ESPAÇO ENTRE O TITULO E DADOS DA CARTA PARA MELHOR VISUALIZAÇAO

    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO DA CARTA: %3s", codigo_da_carta2);
    printf("CIDADE: %s\n", nome_da_cidade2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("AREA EM KM: %.2f km²\n", area2);
    printf("PIB: %.2f milhoes de reais\n", PIB2);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n", numero_de_pontos_turisticos2);
    
    densidade_populacional2 = (float)(populacao2 / area2); // CALCULO PARA DEFINIR DENSIDADE POPULACIONAL
    PIBPERCAPTA2 = (float)(PIB2 / populacao2); // CALCULO PARA DEFINIR PIB PER CAPTA

    printf("DENSIDADE POPULACIONAL: %.4f hab/km²\n", densidade_populacional2); // IMPRESSAO RESULTADO DENSIDADE POPULACIONAL
    printf("PIB PERCAPTA: %.2f reais\n", PIBPERCAPTA2); // IMPRESSAO RESULTADO PIB PERCAPTA

    inversoDP2 = area2 / populacao2; // CALCULO DO INVERSO DA DENSIDADE POPULACIONAL PARA SOMA DO SUPER PODER        
    SP2 = populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + inversoDP2; // calculo SUPER PODER
    printf("*** O SUPER PODER DA CARTA %3s É: %.6f ***\n", codigo_da_carta2, SP2);

    // FIM DA IMPRESSAO DA SEGUNDA CARTA

    
    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO
    // MENU COM AS REGRAS DO JOGO
    printf("ESCOLHA DOIS ATRIBUTOS PARA COMPARAR: \n");
    printf("*** ATENÇÃO: O MAIOR VALOR VENCE, EXCETO PARA O ATRIBUTO 'DENSIDADE POPULACIONAL' QUE É CALCULADO INVERTIDO.\n");
    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO
            
    //MENU INTERATIVO PARA A PRIMEIRA ESCOLHA
    printf("1. POPULAÇÃO\n");
    printf("2. AREA (EM KM²)\n");
    printf("3. PIB\n");
    printf("4. PONTOS TURÍSTICOS\n");
    printf("5. DENSIDADE POPULACIONAL\n");
    printf("6. PIB PERCAPTA\n");
    printf("7. SUPER PODER\n");
    printf("Digite sua escolha: ");
    scanf("%d", &comparacao);
    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO
    
    
    // CONTROLE PARA PRIMEIRA ESCOLHA DE ATRIBUTOS
         switch (comparacao)
         {
         case 1:
            printf("Você escolheu POPULAÇÃO\n");
            printf("ESCOLHA O SEGUNDO ATRIBUTO: \n");
            printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                if (comparacao == 1)
                {
                    // AQUI JA É POSSIVEL ESCOLHER TAMBÉM O SEGUNDO ATRIBUTO
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                }
                
            break;
        
        case 2:
            printf("Você escolheu AREA\n");
            printf("ESCOLHA O SEGUNDO ATRIBUTO: \n");
            printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                
                    if (comparacao == 2) 
                {
                    // AQUI JA É POSSIVEL ESCOLHER TAMBÉM O SEGUNDO ATRIBUTO
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                }
                break;
        case 3:
            printf("Você escolheu PIB\n");
            printf("ESCOLHA O SEGUNDO ATRIBUTO: \n");
            printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      


                    if (comparacao == 3) 
                {
                    // AQUI JA É POSSIVEL ESCOLHER TAMBÉM O SEGUNDO ATRIBUTO
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                }
                }
                break;
            case 4: 
                printf("Você escolheu PONTOS TURISTICOS\n");
                printf("ESCOLHA O SEGUNDO ATRIBUTO: \n");
                printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      


                if (comparacao == 4) 
                {
                    // AQUI JA É POSSIVEL ESCOLHER TAMBÉM O SEGUNDO ATRIBUTO
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                
                }
                break;
            case 5:
                printf("Você escolheu DENSIDADE POPULACIONAL\n");
                printf("ESCOLHA O SEGUNDO ATRIBUTO: \n");
                printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      


                if (comparacao == 5) 
                {
                    // AQUI JA É POSSIVEL ESCOLHER TAMBÉM O SEGUNDO ATRIBUTO
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                }
                break;
            case 6:
                printf("Você escolheu PIB PERCAPTA\n");
                printf("ESCOLHA O SEGUNDO ATRIBUTO: \n");
                printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      


                if (comparacao == 6) 
                {   
                    // AQUI JA É POSSIVEL ESCOLHER TAMBÉM O SEGUNDO ATRIBUTO
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                }
                break;
            case 7:
                printf("Você escolheu SUPER PODER\n");
                printf("ESCOLHA O SEGUNDO ATRIBUTO: \n");
                printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      


                if (comparacao == 7) 
                {
                    // AQUI JA É POSSIVEL ESCOLHER TAMBÉM O SEGUNDO ATRIBUTO
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                }
                break;
         
         default:   
                printf("Opção inválida!"); 
            break;
         }     

         // CONTROLE PARA COMPLEMENTAR A ESCOLHA DO SEGUNDO ATRIBUTO DANDO A OPÇAO DE RETORNAR AO MENU DE ESCOLHA CASO O ATRIBUTO ESCOLHIDO SE REPITA
            switch (comparacao2)
            {
            case 1:
           
                if (comparacao != 1)
                {
                    printf("Você escolheu POPULAÇÃO\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                   
                } else {
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("OPÇÃO JÁ ESCOLHIDA COMO PRIMEIRO ATRIBUTO.\n");
                    printf("ESCOLHA OUTRA OPÇÃO: \n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                
                }
                
            break;
        
        case 2:
            
                if (comparacao != 2)
                {
                    printf("Você escolheu AREA\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                   
                } else {
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("OPÇÃO JÁ ESCOLHIDA COMO PRIMEIRO ATRIBUTO.\n");
                    printf("ESCOLHA OUTRA OPÇÃO: \n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO    

                
                }
                break;
        case 3:
            
                if (comparacao != 3)
                {
                    printf("Você escolheu PIB\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      
                   
                } else {
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("OPÇÃO JÁ ESCOLHIDA COMO PRIMEIRO ATRIBUTO.\n");
                    printf("ESCOLHA OUTRA OPÇÃO: \n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO                    
                }                
                break;
        case 4: 

                 if (comparacao != 4)
                {
                    printf("Você escolheu PONTOS TURISTICOS\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                } else {
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("OPÇÃO JÁ ESCOLHIDA COMO PRIMEIRO ATRIBUTO.\n");
                    printf("ESCOLHA OUTRA OPÇÃO: \n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO                                
                }
                
                break;
            case 5:
                
                 if (comparacao != 5)
                {
                    printf("Você escolheu DENSIDADE POPULACIONAL\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                } else {
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("OPÇÃO JÁ ESCOLHIDA COMO PRIMEIRO ATRIBUTO.\n");
                    printf("ESCOLHA OUTRA OPÇÃO: \n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO                  
                }
                break;
            case 6:
                
                if (comparacao != 6)
                {
                    printf("Você escolheu PIB PERCAPTA\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO                         

                } else {
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("OPÇÃO JÁ ESCOLHIDA COMO PRIMEIRO ATRIBUTO.\n");
                    printf("ESCOLHA OUTRA OPÇÃO: \n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO    

                }
                break;
            case 7:
                
                 if (comparacao != 7)
                {
                    printf("Você escolheu SUPER PODER\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO      

                } else {
                    printf("OPÇÃO JÁ ESCOLHIDA COMO PRIMEIRO ATRIBUTO.\n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("ESCOLHA OUTRA OPÇÃO: \n");
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO  
                    printf("1. POPULAÇÃO\n");
                    printf("2. AREA (EM KM²)\n");
                    printf("3. PIB\n");
                    printf("4. PONTOS TURÍSTICOS\n");
                    printf("5. DENSIDADE POPULACIONAL\n");
                    printf("6. PIB PERCAPTA\n");
                    printf("7. SUPER PODER\n");
                    printf("Digite sua escolha: ");
                    scanf("%d", &comparacao2);
                    printf("\n"); // ESPAÇO ENTRE AS INFORMAÇOES PARA MELHOR VISUALIZAÇAO    
                }
                break;
         
         default:   
                printf("Opção inválida!");
            break;

            }

            // COMPARAÇAO ENTRE OS ATRIBUTOS DA PRIMEIRA ESCOLHA
            if (comparacao == 1 && comparacao != comparacao2) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {
                printf("COMPARAÇÃO POPULAÇÃO: \n%lu vs %lu\n", populacao1, populacao2);
                if (populacao1 > populacao2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (populacao1 == populacao2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
            
            } else if (comparacao == 2 && comparacao != comparacao2) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {       
                printf("COMPARAÇÃO AREA: \n%.2f vs %.2f\n", area1, area2);
                if (area1 > area2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (area1 == area2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao == 3 && comparacao != comparacao2) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO PIB: \n%.2f vs %.2f\n", PIB1, PIB2);
                if (PIB1 > PIB2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (PIB1 == PIB2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao == 4 && comparacao != comparacao2) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO PONTOS TURISTICOS: \n%d vs %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
                if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (numero_de_pontos_turisticos1 == numero_de_pontos_turisticos2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao == 5 && comparacao != comparacao2) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO DENSIDADE POPULACIONAL (INVERSO): \n%f vs %f\n", inversoDP1, inversoDP2);
                if (inversoDP1 < inversoDP2) // NESSE CASO O MENOR VALOR VENCE.
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (inversoDP1 == inversoDP2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao == 6 && comparacao != comparacao2) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO PIB PERCAPTA: \n%.2f vs %.2f\n", PIBPERCAPTA1, PIBPERCAPTA2);
                if (PIBPERCAPTA1 > PIBPERCAPTA2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (PIBPERCAPTA1 == PIBPERCAPTA2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
            } else if (comparacao == 7 && comparacao != comparacao2) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO SUPER PODER: \n%.2f vs %.2f\n", SP1, SP2);
                if (SP1 > SP2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (SP1 == SP2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
            
            
            } else{ 
                printf("UMA DAS ESCOLHAS É INVÁLIDA\n");
            }


            // COMPARAÇAO ENTRE OS ATRIBUTOS DA SEGUNDA ESCOLHA
            if (comparacao2 == 1 && comparacao2 != comparacao) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {
                printf("COMPARAÇÃO POPULAÇÃO: \n%lu vs %lu\n", populacao1, populacao2);
                if (populacao1 > populacao2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (populacao1 == populacao2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
            
            } else if (comparacao2 == 2 && comparacao2 != comparacao) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO AREA: \n%.2f vs %.2f\n", area1, area2);
                if (area1 > area2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (area1 == area2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao2 == 3 && comparacao2 != comparacao) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO PIB: \n%.2f vs %.2f\n", PIB1, PIB2);
                if (PIB1 > PIB2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (PIB1 == PIB2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao2 == 4 && comparacao2 != comparacao) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO PONTOS TURISTICOS: \n%d vs %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
                if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (numero_de_pontos_turisticos1 == numero_de_pontos_turisticos2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao2 == 5 && comparacao2 != comparacao) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO DENSIDADE POPULACIONAL (INVERSO): \n%f vs %f\n", inversoDP1, inversoDP2);
                if (inversoDP1 < inversoDP2) // NESSE CASO O MENOR VALOR VENCE.
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (inversoDP1 == inversoDP2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
                 
            } else if (comparacao2 == 6 && comparacao2 != comparacao) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO PIB PERCAPTA: \n%.2f vs %.2f\n", PIBPERCAPTA1, PIBPERCAPTA2);
                if (PIBPERCAPTA1 > PIBPERCAPTA2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (PIBPERCAPTA1 == PIBPERCAPTA2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                }
            } else if (comparacao2 == 7 && comparacao2 != comparacao) // JA CONDICIONANDO PARA QUE SÓ SEJA VERDADEIRO SE OS ATRIBUTOS FOREM DIFERENTES
            {           
                printf("COMPARAÇÃO SUPER PODER: \n%.2f vs %.2f\n", SP1, SP2);
                if (SP1 > SP2)
                {
                    printf("A CARTA %s VENCEU!\n", estado1);
                }   else if (SP1 == SP2) {
                    printf("DEU EMPATE!\n");
                }   else {
                    printf("A CARTA %s VENCEU!\n", estado2);
                } 
            
            
            } else {
                printf("SAINDO DO JOGO DEVIDO A ESCOLHA INVALIDA\n"); // COMPLEMENTA A MENSAGEM DO ELSE DA COMPARAÇAO DO PRIMEIRO ATRIBUTO.
            }

    }
    
    
    
