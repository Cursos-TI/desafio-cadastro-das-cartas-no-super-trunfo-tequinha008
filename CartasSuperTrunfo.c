#include <stdio.h>

int main() {

    // Desafio SUPER TRUNDO: 
    // CRIAR UM JOGO DE CARTAS CUJO CONTEUDO SEJA PREENCHIDO PELO USUÁRIO E CADA CARTA SEJA REPRESENTADA POR UM ESTADO E CIDADE

    // INICIANDO A CONFECÇÃO DAS CARTAS

     // PRIMEIRA CARTA:
    char estado1[20];
    char codigo_da_carta1[4]; // 3 letras + '\0'
    char nome_da_cidade1[20];
    float area1; // a área será contabilizada sempre em KM²
    int populacao1;    
    float PIB1;
    int numero_de_pontos_turisticos1;

    // SEGUNDA CARTA:
    char estado2[20];
    char codigo_da_carta2[4]; // 3 letras + '\0'
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;

    // Entrada de dados para a primeira carta
    printf("Dados do primeiro estado / primeira carta:\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta (3 letras): \n");
    scanf("%3s", codigo_da_carta1); // limite de 3 caracteres, sendo as 2 primeiras letras do ESTADO + O NUMERO DA CARTA. EX. MA1

    printf("Digite o nome da cidade: \n"); 
    scanf("%s", nome_da_cidade1); // limite de 20 caracteres, não pode ser nome composto.

    printf("Digite qual a população da cidade: \n"); 
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (KM²): \n"); 
    scanf("%f", &area1); // deve ser contabilizado em KM    
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Digite o PIB da cidade (em reais): \n"); 
    scanf("%f", &PIB1); // milhão

    // COMANDO PARA IMPRIMIR INFORMAÇÕES PREENCHIDAS PELO USUÁRIO PARA CONFECÇÃO DA PRIMEIRA CARTA.

    printf("DADOS DA PRIMEIRA CARTA: \n");

    printf("ESTADO: %s\n", estado1);
    printf("CIDADE: %s\n", nome_da_cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("AREA EM KM: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n", numero_de_pontos_turisticos1);

    
    
    // FIM DA IMPRESSÃO DA PRIMEIRA CARTA.



    // Entrada de dados da segunda carta:

    printf("Dados do segundo estado / segunda carta:\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta (3 letras): \n");
    scanf("%3s", codigo_da_carta2); // limite de 3 caracteres, sendo as duas primeiras letras do ESTADO + O NUMERO DA CARTA. EX. MA1

    printf("Digite o nome da cidade: \n"); 
    scanf("%s", nome_da_cidade2); // limite de 20 caracteres, não pode ser nome composto.

    printf("Digite qual a população da cidade: \n"); 
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (KM²): \n"); 
    scanf("%f", &area2); // deve ser contabilizado em KM    
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Digite o PIB da cidade (em reais): \n"); 
    scanf("%f", &PIB2); // milhão
   
// COMANDO PARA IMPRIMIR INFORMAÇÕES PREENCHIDAS PELO USUÁRIO PARA CONFECÇÃO DA SEGUNDA CARTA.

    printf("DADOS DA SEGUNDA CARTA: \n");

    printf("ESTADO: %s\n", estado2);
    printf("CIDADE: %s\n", nome_da_cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("AREA EM KM: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n", numero_de_pontos_turisticos2);



    return 0;
}
