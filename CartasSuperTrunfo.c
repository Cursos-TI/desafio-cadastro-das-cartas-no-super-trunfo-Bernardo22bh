#include <stdio.h>

int main(){

char estado[10];
char codigo[20];
char cidade[50];
int populacao, turismo;
float area, pib;

char estado2[10];
char codigo2[20];
char cidade2[50];
int populacao2, turismo2;
float area2, pib2;


printf ("................\n");
printf ("Bem-Vindos ao Super Trunfo: Cidades!\n");

printf ("O jogo Super-Trunfo consiste em tomar\ntodas as cartas em jogos dos outros participantes\npor meio de escolhas de caracteristicas de carta\n\n");
printf ("Para jogar, cadastre os dados de suas cartas.\n Inicialmente, cada jogador inicia com duas cartas.\n\n");

printf ("Primeira carta \n\n");
printf ("Estado: \n");
scanf ( "%s", estado);
printf ("Codigo: \n");
scanf ( "%s",codigo);

printf ("Cidade: \n");
scanf ("%s", cidade);

printf ("Populacao: \n");
scanf ("%d", &populacao);

printf ("Area(km²): \n");
scanf ("%f", &area);

printf ("PIB: \n");
scanf ("%f", &pib);

printf ("Pontos turisticos: \n");
scanf ("%d", &turismo);

printf ("Cadastre a segunda carta. \n\n");
printf ("Segunda carta \n\n");
printf ("Estado: \n");
scanf ("%s", estado2);

printf ("Codigo: \n");
scanf ("%s" , codigo2);
printf ("Cidade: \n");
scanf (" %s", cidade2);

printf ("Populacao: \n");
scanf ("%d", &populacao2);

printf ("Area(km²): \n");
scanf ("%f", &area2);

printf ("PIB: \n");
scanf ("%f", &pib2);

printf ("Pontos turisticos: \n");
scanf ("%d", &turismo2);

printf("\n\nCartas cadastradas com sucesso!\n\n");

printf ("Primeira carta\n\n");
printf ("Estado: %s \n", estado);
printf ("Codigo: %s \n", codigo);
printf ("Cidade: %s \n", cidade);
printf ("Populacao: %d \n", populacao);
printf ("Area(km²): %f \n", area);
printf ("PIB: %f \n", pib);
printf ("Pontos turisticos: %d \n", turismo);

printf ("Segunda carta\n\n");
printf ("Estado: %s \n", estado2);
printf ("Codigo: %s \n", codigo2);
printf ("Cidade: %s \n", cidade2);
printf ("Populacao: %d \n", populacao2);
printf ("Area(km²): %f \n", area2);
printf ("PIB: %f \n", pib2);
printf ("Pontos turisticos: %d \n", turismo2);

printf ("Bom jogo e boa sorte");

return 0;
}