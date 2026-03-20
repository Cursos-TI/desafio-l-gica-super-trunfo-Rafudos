#include <stdio.h>

int main(){

    char Estado[3];           
    char Cidade[50];          
    int Populacao;
    float Area;
    float PIB;
    int PontoTuristico;
    float DensidadePopulacional;
    float PIBPerCapita;
    float SuperPoder;


    printf("ESCOLHA SEU ESTADO (SIGLA): \n");
    scanf("%2s", Estado);

    printf("ESCOLHA SUA CIDADE: \n"); 
    scanf("%20s", Cidade);

    printf("QUAL A POPULACAO DA SUA CIDADE? \n");
    scanf("%d", &Populacao);

    printf("QUAL A AREA DA SUA CIDADE? \n");
    scanf("%f", &Area);
    
    printf("QUAL O PIB DA SUA CIDADE? \n");
    scanf("%f", &PIB);

    printf("QUANTOS PONTOS TURISTICOS TEM NA SUA CIDADE? \n");
    scanf("%d", &PontoTuristico);

    DensidadePopulacional = Populacao / Area;
    PIBPerCapita = PIB / Populacao;
    SuperPoder = Populacao + Area + PIB + PontoTuristico;

    char Estado2[3];           
    char Cidade2[50];          
    int Populacao2;
    float Area2;
    float PIB2;
    int PontoTuristico2;
    float DensidadePopulacional2;
    float PIBPerCapita2;
    float SuperPoder2;


    printf("ESCOLHA SEU SEGUNDO ESTADO (SIGLA): \n");
    scanf("%2s", Estado2);

    printf("ESCOLHA SUA SEGUNDA CIDADE: \n"); 
    scanf("%20s", Cidade2);

    printf("QUAL A POPULACAO DA SUA SEGUNDA CIDADE? \n");
    scanf("%d", &Populacao2);

    printf("QUAL A AREA DA SUA SEGUNDA CIDADE? \n");
    scanf("%f", &Area2);
    
    printf("QUAL O PIB DA SUA SEGUNDA CIDADE? \n");
    scanf("%f", &PIB2);

    printf("QUANTOS PONTOS TURISTICOS TEM NA SUA SEGUNDA CIDADE? \n");
    scanf("%d", &PontoTuristico2);

    DensidadePopulacional2 = Populacao2 / Area2;
    PIBPerCapita2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontoTuristico2;

    printf("\n--- DADOS INFORMADOS ---\n");
    printf("ESTADO: %s\n", Estado);
    printf("CIDADE: %s\n", Cidade);
    printf("POPULACAO: %d HABITANTES\n", Populacao);
    printf("AREA: %.2f Km²\n", Area);
    printf("PIB: R$ %.2f\n", PIB);
    printf("PONTOS TURISTICOS: %d\n", PontoTuristico);
    printf("DENSIDADE POPULACIONAL: %.2f\n", DensidadePopulacional);
    printf("PIB PER CAPITA: R$ %.2f\n", PIBPerCapita);

    printf("\n--- DADOS INFORMADOS CARTA 2 ---\n");
    printf("ESTADO: %s\n", Estado2);
    printf("CIDADE: %s\n", Cidade2);
    printf("POPULACAO: %d HABITANTES\n", Populacao2);
    printf("AREA: %.2f Km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("PONTOS TURISTICOS: %d\n", PontoTuristico2);
    printf("DENSIDADE POPULACIONAL: %.2f\n", DensidadePopulacional2);
    printf("PIB PER CAPITA: R$ %.2f\n", PIBPerCapita2);

    printf("\n--- ! COMPARAÇÃO DE CARTAS ! ----\n");

    if (PIB > PIB2)
    {
    printf("\n O PIB DA CIDADE DE %d É MAIOR\n", Cidade);
    }
    if (PIB < PIB2)
    {
    printf("\n O PIB DA CIDADE DE %d É MAIOR\n", Cidade2);
    }
    if (PIB = PIB2)
    {
    printf("\n OS PIBs TÊM VALOR IGUAL\n");
    }

    if (Populacao > Populacao2)
    {
    printf("\n A POPULAÇÃO DA CIDADE DE %s É MAIOR\n", Cidade);
    }
    if (Populacao < Populacao2)
    {
    printf("\n A POPULAÇÃO DA CIDADE DE %s É MAIOR\n", Cidade2);
    }
    if (Populacao = Populacao2)
    {
    printf("\n A POPULAÇÃO DAS DUAS CIDADES SÃO IGUAIS \n");
    }

    if (Area > Area2)
    {
    printf("\n A ÁREA DA CIDADE DE %.d É MAIOR\n", Cidade);
    }
    if (Area < Area2)
    {
    printf("\n A POPULAÇÃO DA CIDADE DE %d É MAIOR\n", Cidade2);
    }
    if (Area = Area2)
    {
    printf("\n A ÁREA DAS DUAS CIDADES SÃO IGUAIS \n");
    }

    if (PontoTuristico > PontoTuristico2)
    {
    printf("\n A CIDADE DE %d TEM MAIS PONTOS TURÍSTICOS\n", Cidade);
    }
    if (PontoTuristico < PontoTuristico2)
    {
    printf("\n A CIDADE DE %d TEM MAIS PONTOS TURÍSTICOS\n", Cidade2);
    }
    if (PontoTuristico = PontoTuristico2)
    {
    printf("\n AS DUAS CIDADES TÊM O MESMO NÚMERO DE PONTOS TURÍSTICOS \n");
    }

    return 0;
}